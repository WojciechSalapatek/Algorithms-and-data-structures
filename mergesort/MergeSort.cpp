//
// Created by wojciechsalapatek on 02.04.18.
//

#include "MergeSort.h"

void Merge(int *array, int start, int mid, int end){
    int left_length = mid - start + 1;
    int right_length = end - mid;
    int left[left_length];
    int right[right_length];
    int l=0;
    int r=0;
    for (int i = 0; i < left_length; ++i) {
        left[i] = array[start + i];
    }
    for (int i = 0; i < right_length; ++i) {
        right[i] = array[mid + i + 1];
    }

    for (int j = start; j <= end; ++j) {
        if((left[l] <= right[r] && l<left_length) || r>= right_length){
            array[j] = left[l];
            l++;
        }
        else{
            array[j] = right[r];
            r++;
        }
    }
}


void MergeSort(int *array, int start, int end){
    int mid;
    if (start<end){
        mid = (end + start)/2;
        MergeSort(array, start, mid);
        MergeSort(array, mid + 1, end);
        Merge(array, start, mid, end);
    }
}

