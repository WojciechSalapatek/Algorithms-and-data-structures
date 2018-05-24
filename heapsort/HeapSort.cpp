//
// Created by wojciechsalapatek on 02.04.18.
//

#include <algorithm>
#include "HeapSort.h"

int Right(int position){
    return 2*position +1;
}
int Left(int position){
    return 2*position;
}
int Parent(int position){
    return (int) position/2;
}


void Heapify(int *array, int position, int end){
    int biggest;

    if (end >= Left(position) && array[Left(position)] > array[position]) biggest = Left(position);
    else biggest = position;

    if (end>=Right(position) && array[Right(position)] > array[biggest]) biggest = Right(position);

    if(biggest != position){
        std::swap(array[position], array[biggest]);
        Heapify(array, biggest, end);
    }
}

void BuildHeap(int *array, int size){
    for (int i = size/2 + 1; i >= 0 ; --i) Heapify(array, i, size - 1);
}

void HeapSort(int *array, int size){
    BuildHeap(array, size);
    for (int i = size - 1; i > 0; --i) {
        std::swap(array[0], array[i]);
        Heapify(array, 0, i - 1);
    }
}