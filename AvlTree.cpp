#include <iostream>
using namespace std;

// An AVL tree node 
class Node 
{    public:
    int key; 
    Node *left; 
    Node *right; 
    int height;}; 



int max(int a, int b){
    return (a > b)? a : b;
}



int height(Node* n){
    return n->height;
}



Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}



Node* rightRotate(Node* oldRoot){
    Node* x = oldRoot->left;
    Node* T2 = x->right;

    x->right = oldRoot;
    oldRoot->left = T2;

    y->height = max(height(y->left, height(y->right) + 1);
    x->height = max(height(x->left, height(x->right) + 1);
    return x;
}


