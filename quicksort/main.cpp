//
// Created by wojciechsalapatek on 30.03.18.
//


#include <random>
#include <iostream>
#include "QuickSort.h"

using std::cout;
using std::endl;


int main(){
    int size = 2000000;
    int array[size];
    for (int i = 0; i < size ; ++i) {
        array[i] = rand() % 200000;
    }
    //cout<<"before sort: "<<endl;
    //for(auto i : array) cout<<i<<", ";
    QuickSort(array, 0, size-1);
    //cout<<endl;
    //cout<<"after sort: "<<endl;
    //for(auto i : array) cout<<i<<", ";
    //cout<<endl;
    return 0;
}