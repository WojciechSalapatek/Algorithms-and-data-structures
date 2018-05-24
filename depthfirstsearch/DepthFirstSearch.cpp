//
// Created by wojciechsalapatek on 24.05.18.
//

#include <iostream>
#include "DepthFirstSearch.h"
using std::cout;
using std::endl;

void DepthFirstSearch(int **A, int v, int n, bool *visited){

    visited[v] = true;
    cout<<v<<", ";

    for(int i = 0; i < n; i++) if((A[v][i] == 1) && !visited[i]) DepthFirstSearch(A,i, n, visited);
}