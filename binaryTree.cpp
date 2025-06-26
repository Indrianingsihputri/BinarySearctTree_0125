//binarySearchTree

#include <iostream>
using namespace std;

class Node {
    int info;
    Node *leftchild;
    Node *rightchild;

    //constructor for the node class
    Node()
    {
        leftchild = nullptr;// Initialize left child to nullptr
        rightchild = nullptr;// Initialize right child to nullptr
    }
};

class Binarytree
{
public:
    Node *root;

    //constructor for the Binarytree class
    Binarytree()
    {
        root = nullptr; // Initialize root to nullptr
    }
};