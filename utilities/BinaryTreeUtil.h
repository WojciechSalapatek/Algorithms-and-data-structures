//
// Created by wojciechsalapatek on 02.04.18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BINARYTREEUTIL_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BINARYTREEUTIL_H

#include <memory>
#include <iostream>

using std::shared_ptr;
struct SmartTree{
    int value;
    shared_ptr <SmartTree> left;
    shared_ptr <SmartTree> right;
};

shared_ptr <SmartTree> CreateLeaf(int value){
    shared_ptr<SmartTree> leaf = std::make_shared<SmartTree>();
    leaf->value = value;
    leaf->left = nullptr;
    leaf->right = nullptr;
    return leaf;
}

shared_ptr <SmartTree> InsertLeftChild(shared_ptr<SmartTree> tree, shared_ptr<SmartTree> left_subtree){
    tree->left = left_subtree;
    return tree;
}

shared_ptr <SmartTree> InsertRightChild(shared_ptr<SmartTree> tree, shared_ptr<SmartTree> right_subtree){
    tree->right = right_subtree;
    return tree;
}

void PrintTreeInOrder(const shared_ptr<SmartTree> &shared_ptr, std::ostream *out){
    if (shared_ptr->left != nullptr) PrintTreeInOrder(shared_ptr->left, out);
    *out<<shared_ptr->value<<", ";
    if (shared_ptr->right != nullptr) PrintTreeInOrder(shared_ptr->right, out);
}

int PrintTreeFromRoot(const shared_ptr<SmartTree> &shared_ptr, std::string &out){
    out += " [" + std::to_string(shared_ptr->value);
    if (shared_ptr->left != nullptr) PrintTreeFromRoot(shared_ptr->left, out);
    else out += " [none]";
    if (shared_ptr->right != nullptr) PrintTreeFromRoot(shared_ptr->right, out);
    else out += " [none]";
    out += "]";
}


std::string DumpTree(const shared_ptr<SmartTree> &tree){
    std::string result="";
    std::string output="";
    PrintTreeFromRoot(tree, result);
    for (int i = 1; i < result.length(); ++i) output += result[i];
    return output;
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_BINARYTREEUTIL_H
