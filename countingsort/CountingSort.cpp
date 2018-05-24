//
// Created by wojciechsalapatek on 02.04.18.
//

#include "CountingSort.h"


void CountingSort(int *array,int *result, long long int size, int min, int max){
    int counts[max - min + 1];
    for (long long int i = 0; i < max - min + 1; ++i) counts[i] = 0;
    for (long long int i = 0; i < size; ++i) counts[array[i]]++;
    for (long long int j = 1; j <max - min + 1 ; ++j) counts[j] += counts[j-1];
    for (long long int k = 0; k < size; ++k) {
        result[counts[array[k]]] = array[k];
        counts[array[k]]--;
    }
}