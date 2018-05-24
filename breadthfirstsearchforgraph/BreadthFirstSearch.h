//
// Created by wojciechsalapatek on 24.05.18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BREADTHFIRSTSEARCH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BREADTHFIRSTSEARCH_H


struct Element{
    Element *next;
    int  data;
};

void BreadthFirstSearch(int** A,int v, int n);


#endif //ALGORITHMS_AND_DATA_STRUCTURES_BREADTHFIRSTSEARCH_H
