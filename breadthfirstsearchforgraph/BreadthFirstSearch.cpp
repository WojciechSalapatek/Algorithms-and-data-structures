//
// Created by wojciechsalapatek on 24.05.18.
//

#include <iostream>
#include "BreadthFirstSearch.h"
using std::cout;
using std::endl;

void BreadthFirstSearch(int **A, int n, int v){
    bool *visited = new bool[n];
    for(int i = 0; i < n; i++) visited[i] = false;

    Element *element = new Element;
    element->next = nullptr;
    element-> data = v;
    Element *head = element;
    Element *tail = element;
    Element *tmp = element;

    visited[v] = true;

    while(head != nullptr){
        v=head->data;
        tmp = head;
        cout<<head->data + 1<<", ";
        head = head->next;
        if(head == nullptr) tail = nullptr;
        delete tmp;

        for (int i = 0; i <n; ++i) {
            if(A[v][i] == 1 && !visited[i]) {
                tmp = new Element;
                tmp->next = nullptr;
                tmp->data = i;
                if(tail == nullptr) head = tmp;
                else tail->next = tmp;
                tail = tmp;
                visited[i] = true;
            }
        }

    }

    delete [] visited;
}