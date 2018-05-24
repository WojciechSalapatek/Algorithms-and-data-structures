//
// Created by wojciechsalapatek on 02.04.18.
//

#include <random>
#include <iostream>
#include "HeapSort.h"

using std::cout;
using std::endl;


int main(){
    int size = 2000000;
    int array[size];
    for (int i = 0; i < size ; ++i) {
        array[i] = rand() % 200;
    }
    HeapSort(array, size);
    return 0;
}