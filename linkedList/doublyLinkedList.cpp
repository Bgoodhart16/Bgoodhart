#include <iostream>
using namespace std;


struct Node{
    public:
    Node* next;
    Node* prev;
    int data;};



/*class doublyLinkedList{

    public:
    doublyLinkedList(){
    Node* head = NULL;
    Node* endOf = NULL;
    head->next = endOf;
    head->prev = NULL;
    endOf->prev = head;
    endOf->next = NULL;
    head->data = 0;};
    
    ~doublyLinkedList();
    void makeList(int length, Node* start, Node* last);
    void printList();
    private:
    Node *head = nullptr;
    Node *endOf = nullptr;
    };

doublyLinkedList::~doublyLinkedList(){
        //cout << "BAlls";
        while (head != endOf) {
        auto* tmp = head;
        head = head->next;
        delete tmp;
    }}
*/


//This function is broken bc my brain cant figure out the 
//recursion to make it work. Always points back to the head..?
void makeList(int length, Node* &start) {
    int listLen = 0;
    Node* tmp = new Node();
    start->next = tmp;
    while(listLen != length){
        ++listLen;
        Node* freshNode = new Node();
        tmp->next = freshNode;
        start->next = freshNode;
        freshNode->prev = start;
        start = start->next;
    }
   }

void printList(Node* &head) {
    Node* curr = head;
    if(head != NULL){
        cout << curr->data << " ";
        curr = head->next;
    }
    else
        cout << "This is the only data in the list: " << head->data << endl;;
}



int main() {
    Node* head = new Node();
    Node* endOf = new Node();
    makeList(5, &head);
    printList(&head);
}