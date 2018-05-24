//
// Created by wojciechsalapatek on 24.05.18.
//

#include <memory>
#include <iostream>
#include "ChainedHashArray.h"

using std::cout;
using std::endl;

void InitializeChainedHashArray(ChainedHashArray *hashArray, int size){
    hashArray->array = new Element*[size];
    hashArray->allocatedSize = size;
}

void DeleteChainedHashArray(ChainedHashArray *hashArray){
    for (int i = 0; i < hashArray->allocatedSize; ++i) {
        Element *iterator = hashArray->array[i];
        while (iterator != nullptr) {
            Element *toDelete = iterator;
            iterator = iterator->next;
            cout << "deleting: " << toDelete->value << endl;
            delete toDelete;
        }
    }
    delete [] hashArray->array;
    delete hashArray;
}

int Hash(int key, int size){
    return key % size;
}

void Add(ChainedHashArray *hashArray, int value, int key){
    int index = Hash(key, hashArray->allocatedSize);
    if (hashArray->array[index] == nullptr){
        Element *element = new Element;
        element->value = value;
        element->key = key;
        element->next = nullptr;
        hashArray->array[index] = element;
    }

    else {
        Element *iterator = hashArray->array[index];
        while (iterator->next != nullptr) iterator = iterator->next;
        Element *element = new Element;
        element->value = value;
        element->key = key;
        element->next = nullptr;
        iterator->next = element;
    }
}

Element* GetElement(ChainedHashArray *hashArray, int key){
    int index = Hash(key, hashArray->allocatedSize);
    Element *iterator = hashArray->array[index];
    while ((iterator->next != nullptr) && iterator->key != key) iterator = iterator->next;
    return iterator;
}

void PrintChainedHashArray(ChainedHashArray *hashArray){
    for (int i = 0; i < hashArray->allocatedSize; ++i) {
        cout<<"["<<i<<"] "<<": "<<"[";
        if(hashArray->array[i] != nullptr){
            Element *iterator = hashArray->array[i];
            cout<<iterator->value<<", ";
            while (iterator->next != nullptr) {
                iterator = iterator->next;
                cout<<iterator->value<<", ";
            }
        }
        cout<<"]"<<endl;
    }
}