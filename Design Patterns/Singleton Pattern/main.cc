#include <iostream>
#include <chrono>

#include "SingletonPatternLazy.h"
#include "SingletonPatternEager.h"

using namespace std;
using namespace std::chrono;

double timeTaken(high_resolution_clock::time_point start,
        high_resolution_clock::time_point end) {
    return duration_cast<nanoseconds>(end - start).count();
}

int main () {
    auto start = high_resolution_clock::now();
    SingletonPatternEager* eagerInstance = SingletonPatternEager::getInstance();
    auto end = high_resolution_clock::now();

    cout << "Time taken to get eager instance: " << timeTaken(start, end) << " ns" << endl;

    start = high_resolution_clock::now();
    SingletonPatternLazy* lazyInstance = SingletonPatternLazy::getInstance();
    end = high_resolution_clock::now();

    cout << "Time taken to get lazy instance: " << timeTaken(start, end) << " ns" << endl;
    
    start = high_resolution_clock::now();
    eagerInstance = SingletonPatternEager::getInstance();
    end = high_resolution_clock::now();

    cout << "Time taken to get eager instance for second time: " <<
        timeTaken(start, end) << " ns" << endl;
    
    start = high_resolution_clock::now();
    lazyInstance = SingletonPatternLazy::getInstance();
    end = high_resolution_clock::now();

    cout << "Time taken to get lazy instance for second time: " <<
        timeTaken(start, end) << " ns" << endl;
}