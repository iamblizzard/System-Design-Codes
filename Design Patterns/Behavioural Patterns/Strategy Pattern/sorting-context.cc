#include "sorting-context.h"
#include "sorting-strategy.h"

void SortingContext::setStrategy(SortingStrategy* strategy) {
    if (strategy_ != nullptr) {
        delete strategy_;
    }
    strategy_ = strategy;
}

void SortingContext::sort(int* array, int size) {
    strategy_->sort(array, size);
}