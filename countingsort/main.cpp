//
// Created by wojciechsalapatek on 02.04.18.
//

#include <random>
#include <iostream>
#include "CountingSort.h"

using std::cout;
using std::endl;


int main() {
    long long int size = 100;
    int array[size];
    int result[size];
    int min = 0;
    int max = 50;
    for (long long int i = 0; i < size ; ++i) {
        array[i] = rand() % max + min;
        result[i] = 0;
    }
    cout<<"before sort: "<<endl;
    for(auto i : array) cout<<i<<", ";
    CountingSort(array, result, size, min, max);
    cout<<endl;
    cout<<"after sort: "<<endl;
    for(auto i : result) cout<<i<<", ";
    cout<<endl;
    return 0;
}