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

    // Function to insert a new node with given value
    void insert(int element, Node *&parent, Node *&currentNode)
    {
        //this function searches the currentnode of the specified node as well as current node of its parent

        currentNode = root;
        parent = nullptr; // Initialize parent to nullptr
        while ((currentNode != nullptr) && (currentNode->info != element)) 
        {
            parent = currentNode;
            if (element < currentNode->info) 
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
            
        }

    }

    void insert()
    {
        int x;
        cout << "masukkan nilai";
        cin >> x;

        //step 1: allocate memory for the new node
        Node *newNode = new Node();
//step 2: assign values to the data fields of new node
        newNode->info = x;

        //step 3: make the left and right child of the new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //step 4: locate the node which will be the parent of the new node to inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //step 5: if parent is null(tree is empty)
        if (parent == nullptr) 
        {
            //5a: mark the new node as root
            root = newNode;

            //5b: exit
            return;
        } 
       //step 6: if the values in the data field of the new node is less than of the parent
        if (x < parent->info) 
        {
            //6a: make the left child of the parent point to the new node
            parent->leftchild = newNode;

            //6b: exit
            return;
        } 
        //step 7: if the values in the data field of the new node is greater than of the parent
        else if (x > parent->info) 
        {
            //7a: make the right child of the parent point to the new node
            parent->rightchild = newNode;

            //7b: exit
            return;
        }
        
    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr) 
        return;
            inorder(ptr->leftchild); 
            cout << ptr->info << " "; //parent
            inorder(ptr->rightchild); 
        }
    }

       void preorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr) 
        return;
            cout << ptr->info << " "; //parent
            preorder(ptr->leftchild); 
            preorder(ptr->rightchild); 
        
    }
    void postorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr) 
        return;

            postorder(ptr->leftchild); 
            postorder(ptr->rightchild); 
            cout << ptr->info << " "; //parent
        
    }
   
}
