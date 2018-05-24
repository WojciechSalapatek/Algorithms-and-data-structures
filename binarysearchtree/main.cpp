//
// Created by wojciechsalapatek on 04.04.18.
//


#include <memory>
#include <iostream>
#include <sstream>
#include "BinarySearchTree.h"
using std::shared_ptr;

int main(){
    std::stringstream ss;
    shared_ptr<SmartTree> bst = nullptr;
    bst = CreateLeaf(&bst, 12);
    bst = Insert(bst, 5);
    bst = Insert(bst, 18);
    bst = Insert(bst, 19);
    bst = Insert(bst, 15);
    bst = Insert(bst, 13);
    bst = Insert(bst, 17);
    bst = Insert(bst, 9);
    bst = Insert(bst, 2);
    std::cout<<DumpTree(bst)<<std::endl;
    shared_ptr<SmartTree> found = Search(bst, 18);
    std::cout<<"Finding 18 returned: "<<found->value<<std::endl;
    std::cout<<"Finding 18 returned rihgt child : "<<found->right->value<<std::endl;

    found = Search(bst, 20);
    bool good = found == nullptr;
    std::cout<<"Finding notexisting value returned null : "<<good<<std::endl;

    std::cout<<"Finding maximum returned : "<<Max(bst)->value<<std::endl;
    std::cout<<"Finding minimum returned : "<<Min(bst)->value<<std::endl;

    PrintTreeInOrder(bst, &std::cout);
    std::cout<<std::endl;
    std::cout<<"Finding successor of  9 returned : "<<DumpTree(Succeessor(Search(bst, 9)))<<std::endl;
    std::cout<<"Finding successor of  12 returned : "<<DumpTree(Succeessor(Search(bst, 12)))<<std::endl;
    std::cout<<"Finding successor of  19 returned : "<<DumpTree(Succeessor(Search(bst, 19)))<<std::endl;

    Delete(Search(bst, 19));
    std::cout<<"After deleting 19 : "<<DumpTree(bst)<<std::endl;
    Insert(bst, 19);
    Delete(Search(bst, 18));
    std::cout<<"After deleting 18: "<<DumpTree(bst)<<std::endl;
    Delete(Search(bst, 2));
    std::cout<<"After deleting 2: "<<DumpTree(bst)<<std::endl;

    return 0;
}