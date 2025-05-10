#ifndef SORTING_CONTEXT_H
#define SORTING_CONTEXT_H

#include "sorting-strategy.h"

class SortingContext {
private:
    SortingStrategy* strategy_;
public:
    SortingContext(SortingStrategy* strategy) : strategy_(strategy) {}
    void setStrategy(SortingStrategy* strategy);
    void sort(int* array, int size);
};

#endif // SORTING_CONTEXT_H