//
// Created by wojciechsalapatek on 04.04.18.
//

#include <memory>
#include "BinarySearchTree.h"
#include <sstream>
#include <iostream>

void DeleteIfOneChild(const shared_ptr<SmartTree> &member);

using std::shared_ptr;

shared_ptr <SmartTree> CreateLeaf(shared_ptr<SmartTree> *parent ,int value){
    shared_ptr<SmartTree> leaf = std::make_shared<SmartTree>();
    leaf->value = value;
    leaf->left = nullptr;
    leaf->right = nullptr;
    leaf->parent = *parent;
    return leaf;
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
    if (tree == nullptr) return "null";
    std::string result="";
    std::string output="";
    PrintTreeFromRoot(tree, result);
    for (int i = 1; i < result.length(); ++i) output += result[i];
    return output;
}

shared_ptr<SmartTree> Insert(shared_ptr<SmartTree> tree, int number){
    shared_ptr<SmartTree> *it = &tree;
    shared_ptr<SmartTree> *parent = nullptr;
    while(*it != nullptr){
        parent = it;
        if(number>(*it)->value) it = &((*it)->right);
        else it = &((*it)->left);
    }
    *it = CreateLeaf(parent ,number);
    return tree;
}

shared_ptr<SmartTree> Search(shared_ptr<SmartTree> tree, int value){
    shared_ptr<SmartTree> it = tree;
    while(it != nullptr && it->value != value){
        if(value > it->value) it = it->right;
        else it = it->left;
    }
    return it;
}

shared_ptr<SmartTree> Min(shared_ptr<SmartTree> tree){
    shared_ptr<SmartTree> it = tree;
    while (it->left != nullptr) it = it-> left;
    return it;
}
shared_ptr<SmartTree> Max(shared_ptr<SmartTree> tree){
    shared_ptr<SmartTree> it = tree;
    while (it->right != nullptr) it = it-> right;
    return it;

}

shared_ptr<SmartTree> Succeessor(shared_ptr<SmartTree> member){
    if(member->right != nullptr) return Min(member->right);
    shared_ptr<SmartTree> it = member;
    bool isNull = member->parent == nullptr;
    while (member->parent != nullptr && member->parent->right == member){
        member = member->parent;
    }
    return member->parent;
}

bool isLeft(shared_ptr<SmartTree> member){
    return member->parent->left == member;
}

bool hasLeft(shared_ptr<SmartTree> member){
    return member->left != nullptr;
}

void Delete(shared_ptr<SmartTree> member){
    int children = 0;
    if(member->left != nullptr) children++;
    if(member->right != nullptr) children++;
    if(children == 0){
        if(isLeft(member)) member->parent->left = nullptr;
        else member->parent->right = nullptr;
    }

    else if (children == 1){
        DeleteIfOneChild(member);
    }

    else{
        member->value = Succeessor(member)->value;
        DeleteIfOneChild(Succeessor(member));
    }
}

void DeleteIfOneChild(const shared_ptr<SmartTree> &member) {
    if (hasLeft(member)){
            if(isLeft(member)) member->parent->left=member->left;
            else member->parent->right=member->left;
        }
        else{
            if(isLeft(member)) member->parent->left=member->right;
            else member->parent->right=member->right;
        }
}
