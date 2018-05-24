//
// Created by wojciechsalapatek on 30.03.18.
//

#include "QuickSort.h"
#include <algorithm>

void QuickSort(int *array, int start, int end){
    int pivot;
    if(start<end){
        pivot = Partition(array, start, end);
        QuickSort(array, start, pivot-1);
        QuickSort(array, pivot+1, end);
    }
}


int Partition(int *array, int start, int end){
    int i = start-1;
    for (int j = start; j < end; ++j) {
        if(array[j] < array[end]){
            i++;
            std::swap(array[j], array[i]);
        }
    }
    std::swap(array[i+1], array[end]);
    return i+1;
}