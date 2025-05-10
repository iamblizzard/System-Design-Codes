#include "sorting-context.h"
#include "sorting-strategy.h"

#include <iostream>

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    SortingContext* context = new SortingContext(new BubbleSort());
    context->sort(array, size);

    context->setStrategy(new QuickSort());
    context->sort(array, size);

    context->setStrategy(new MergeSort());
    context->sort(array, size);
}