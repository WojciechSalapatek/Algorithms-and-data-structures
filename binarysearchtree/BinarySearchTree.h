//
// Created by wojciechsalapatek on 04.04.18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BINARYSEARCHTREE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BINARYSEARCHTREE_H

#include <memory>

using std::shared_ptr;

struct SmartTree{
    int value;
    shared_ptr <SmartTree> left;
    shared_ptr <SmartTree> right;
    shared_ptr <SmartTree> parent;
};

shared_ptr <SmartTree> CreateLeaf(shared_ptr<SmartTree> *parent , int value);
shared_ptr <SmartTree> InsertLeftChild(shared_ptr<SmartTree> tree, shared_ptr<SmartTree> left_subtree);
shared_ptr <SmartTree> InsertRightChild(shared_ptr<SmartTree> tree, shared_ptr<SmartTree> right_subtree);
void PrintTreeInOrder(const shared_ptr<SmartTree> &shared_ptr, std::ostream *out);
int PrintTreeFromRoot(const shared_ptr<SmartTree> &shared_ptr, std::string &out);
std::string DumpTree(const shared_ptr<SmartTree> &tree);
shared_ptr<SmartTree> Insert(shared_ptr<SmartTree> tree, int number);
shared_ptr<SmartTree> Search(shared_ptr<SmartTree> tree, int value);
shared_ptr<SmartTree> Min(shared_ptr<SmartTree> tree);
shared_ptr<SmartTree> Max(shared_ptr<SmartTree> tree);
shared_ptr<SmartTree> Succeessor(shared_ptr<SmartTree> member);
void Delete(shared_ptr<SmartTree> member);

#endif //ALGORITHMS_AND_DATA_STRUCTURES_BINARYSEARCHTREE_H
