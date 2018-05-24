//
// Created by wojciechsalapatek on 30.03.18.
//

#include "SelectionSort.h"

void SelectionSort(int *array, int size){
    int minIndex;
    int tmp;
    for (int i = 0; i < size; ++i) {
        minIndex = i;
        for (int j = i; j < size; ++j) {
            if(array[j] < array[minIndex]) minIndex = j;
        }
        tmp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = tmp;
    }
}