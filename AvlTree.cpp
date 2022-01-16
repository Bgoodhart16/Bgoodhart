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



Node* leftRotate(Node* x) {
    Node *y = x->right; 
    Node *T2 = y->left; 

    y->left = x; 
    x->right = T2; 

    x->height = max(height(x->left), height(x->right)) + 1; 
    y->height = max(height(y->left), height(y->right)) + 1; 
    return y;
}



int getBalance(Node* N) {
    if(n == NULL)
        return 0;
    return height(N->left) - height(N->right);
}



Node* insert(int key, Node* node) {
    if(node == NULL)
        return(newNode(key));

    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);
    else
        return node;


    node->height = 1 + max(height(node->left), height(node->right)); 
    
    
    int balance = getBalance(node);


    if(balance > 1 && key < node->left->key)
        return rightRotate(node);

    if(balance < -1 && key > node->right->key)
        return leftRotate(node);
    
    if(balance > 1 && key > node->left->key){
        node->left - leftRotate(node->left);
        return rightRotate(node);
    }
    if(balance < -1 && key < node->right->key){
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }


    return node;

}


