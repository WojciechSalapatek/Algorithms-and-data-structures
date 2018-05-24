//
// Created by wojciechsalapatek on 30.03.18.
//

#include "BubbleSort.h"


void BubbleSort(int *array, int size){
    bool sorted;
    int tmp;
    for (int i = 0; i < size; ++i) {
        sorted = true;
        for (int j = 0; j < size-i-1; ++j) {
            if(array[j] > array[j+1]){
                sorted = false;
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
        if(sorted) break;
    }
}