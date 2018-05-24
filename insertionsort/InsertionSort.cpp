//
// Created by wojciechsalapatek on 29.03.18.
//

#include <iostream>
#include "InsertionSort.h"

void InsertionSort(int *array, int size){
    int j=0;
    int tmp=0;
    for (int i = 1; i<size; ++i) {
        j = i;
        while(j>0 && array[j] < array[j-1]) {
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
            j--;
        }

    }
}