#include <iostream>
#include <bits/stdc++.h>
using namespace std;



//creating the framwork for the linked list
class Node {
    public:
        int data;
        Node* next;};



void printList(Node* a) {   
    while(a != NULL) {
    cout << a->data << ", ";
    a = a->next;
}
    cout << endl;
}



void append(Node* &a, int freshData){
    Node* newNode = new Node();
    newNode->data = freshData;
    newNode->next = NULL;
    a->next = newNode;
}



//pass in the info you want to add and the head node.
void insertNewNode(Node* a, int freshData, int userPos){
    int pos = 0;
    while(a != NULL){
        a = a->next;
        if(pos == userPos - 1){
            Node* freshNode = new Node();
            freshNode->data = freshData;
            freshNode->next = a->next;
            a->next = freshNode;

        }
        pos++;
    }
}



//only use to add to front of list.
void pushNode(Node* first, int freshData){
    Node* newFirst = new Node();
    newFirst->data = freshData;
    newFirst->next = first;
}




int main() {

Node* first = NULL;
Node* second = NULL;
Node* third = NULL;

first = new Node();
second = new Node();
third = new Node();

first->data = 1;
first->next = second;
second->data = 2;
second->next = third;
third->data = 3; 
third->next = NULL;

printList(first);
//append(third, 4); works
printList(first);
//insertNewNode(first, 8, 2); works
//printList(first);
pushNode(first, 11);
pushNode(first, 22); // this node is there but you can't 
//access it with the print function bc the pushed node is out scope of print()

return 0;}
