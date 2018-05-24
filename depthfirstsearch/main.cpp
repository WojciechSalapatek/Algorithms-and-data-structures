//
// Created by wojciechsalapatek on 24.05.18.
//

#include "DepthFirstSearch.h"

int main(){
    int **A= new int*[6];
    for (int i = 0; i < 6; ++i) {
        A[i] = new int[6];
        for (int j = 0; j < 6; ++j) {
            A[i][j] = 0;
        }
    }
    A[0][1] = 1;
    A[0][2] = 1;
    A[1][0] = 1;
    A[1][3] = 1;
    A[1][4] = 1;
    A[2][0] = 1;
    A[2][4] = 1;
    A[3][1] = 1;
    A[3][4] = 1;
    A[3][5] = 1;
    A[4][2] = 1;
    A[4][3] = 1;
    A[4][5] = 1;
    A[5][3] = 1;
    A[5][4] = 1;

    bool *visited = new bool[6];
    for (int k = 0; k < 6; ++k) visited[k] = false;

    DepthFirstSearch(A, 0, 6, visited);

    for(int i = 0; i < 6; i++) delete A[i];
    delete [] A;
    return 0;
}