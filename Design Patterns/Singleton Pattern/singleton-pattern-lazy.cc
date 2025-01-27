#include <mutex>
#include "singleton-pattern-lazy.h"

// Define static members outside the class
SingletonPatternLazy* SingletonPatternLazy::instance = nullptr;
std::mutex SingletonPatternLazy::mtx;

SingletonPatternLazy* SingletonPatternLazy::getInstance() {
    if (instance == nullptr) {
        // Lock the mutex to ensure thread safety
        std::lock_guard<std::mutex> lock(mtx);
        // Double lock checking
        if (instance == nullptr) {
            instance = new SingletonPatternLazy();
        }
    }
    return instance;
}