//
// Created by wojciechsalapatek on 29.03.18.
//

#include <random>
#include <iostream>
#include "InsertionSort.h"

using std::cout;
using std::endl;


int main(){
    int array[100];
    for (int i = 0; i < 100 ; ++i) {
        array[i] = rand() % 200;
    }
    cout<<"before sort: "<<endl;
    for(auto i : array) cout<<i<<", ";
    InsertionSort(array, 100);
    cout<<endl;
    cout<<"after sort: "<<endl;
    for(auto i : array) cout<<i<<", ";
    cout<<endl;
    return 0;
}