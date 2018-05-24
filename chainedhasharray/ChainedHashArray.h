//
// Created by wojciechsalapatek on 24.05.18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_CHAINEDHASHARRAY_H
#define ALGORITHMS_AND_DATA_STRUCTURES_CHAINEDHASHARRAY_H

struct Element{
    int key;
    int value;
    struct Element *next;
};
struct ChainedHashArray{
    Element* *array;
    int allocatedSize;
};

void InitializeChainedHashArray(ChainedHashArray *hashArray, int size);
void DeleteChainedHashArray(ChainedHashArray *hashArray);
void Add(ChainedHashArray *hashArray, int value, int key);
Element* GetElement(ChainedHashArray *hashArray, int key);
void PrintChainedHashArray(ChainedHashArray *hashArray);

#endif //ALGORITHMS_AND_DATA_STRUCTURES_CHAINEDHASHARRAY_H
