#ifndef SORTING_STRATEGY_H
#define SORTING_STRATEGY_H

#include <iostream>

class SortingStrategy {
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(int* array, int size) = 0;
};

class BubbleSort : public SortingStrategy {
public:
    void sort(int* array, int size) override;
};

class QuickSort : public SortingStrategy {
public:
    void sort(int* array, int size) override;
};

class MergeSort : public SortingStrategy {
public:
    void sort(int* array, int size) override;
};

#endif // SORTING_STRATEGY_H