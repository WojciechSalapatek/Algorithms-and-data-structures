//
// Created by wojciechsalapatek on 02.04.18.
//

#include <random>
#include <iostream>
#include "MergeSort.h"

using std::cout;
using std::endl;


int main(){
    int size = 100;
    int array[size];
    for (int i = 0; i < size ; ++i) {
        array[i] = rand() % 20000;
    }
    cout<<"before sort: "<<endl;
    for(auto i : array) cout<<i<<", ";
    MergeSort(array, 0, size - 1);
    cout<<endl;
    cout<<"after sort: "<<endl;
    for(auto i : array) cout<<i<<", ";
    cout<<endl;
    return 0;
}