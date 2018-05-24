//
// Created by wojciechsalapatek on 24.05.18.
//

#include <memory>
#include <iostream>
#include "ChainedHashArray.h"

int main(){
    ChainedHashArray *hashArray = new ChainedHashArray;
    InitializeChainedHashArray(hashArray, 20);
    Add(hashArray, 20, 1);
    Add(hashArray, 30, 50);
    Add(hashArray, 110, 300);
    Add(hashArray, 11, 9);
    Add(hashArray, 1, 2221);
    PrintChainedHashArray(hashArray);
    std::cout<<"Getting 2221 gave me: "<<GetElement(hashArray, 9)->value<<std::endl;
    PrintChainedHashArray(hashArray);
    DeleteChainedHashArray(hashArray);

    return 0;
}