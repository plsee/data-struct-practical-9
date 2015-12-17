#include "Node.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void ex1();
void ex2();
void ex3();
void printValues(Node* head);
void addToFront(Node* head, Node* newNode);void addToBack(Node* head, Node* newNode);
Node* popFront(Node* head);
Node* popBack(Node* head);



void main(){

    cout << "EX 1" << endl;
    ex1();

    cout << "EX 2" << endl;
    ex2();

    cout << "EX 3" << endl;
    ex3();
}



void ex1(){


    Node* node1 = new Node();
    Node* head = node1;
    Node* curr = node1;
    Node* prev = node1;

    node1->setData(10);

    cout << node1->getData() << endl;
    cout << head->getData() << endl;
    cout << curr->getData() << endl;
    cout << prev->getData() << endl;
    

}

void ex2(){


    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* head = node1;
    Node* curr = node1;
    Node* prev = node1;

    node1->setData(10);
    node2->setData(20);

    node1->next = node2;
    node2->next = nullptr;

    printValues(head);
    
    


}
void ex3(){

    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* head = new Node();
    Node* head2 = new Node();
    Node* curr = head;
    Node* prev = head;

    node1->setData(10);
    node2->setData(20);

    node1->next = node2;
    node2->next = nullptr;

    Node* node3 = new Node();
    Node* node4 = new Node();
    node3->setData(30);
    node4->setData(40);

    cout << "Adding Nodes to the front" << endl;
    addToFront(head, node1);
    addToFront(head, node2);
    addToFront(head, node3);
    addToFront(head, node4);
    printValues(head);


    cout << "Adding Nodes to the Back" << endl;
    addToBack(head2, node1);
    addToBack(head2, node2);
    addToBack(head2, node3);
    addToBack(head2, node4);
    printValues(head2);

    cout << "End of Ex3" << endl;
}

void printValues(Node* head){

    while (head != nullptr){

        cout << head->getData() << endl;
        head = head->next;

    }


}


void addToFront(Node* head, Node* newNode){

    newNode->next = head->next;
    head->next = newNode;


}


void addToBack(Node* head, Node* newNode){
    
    Node* curr = head;
    newNode->next = nullptr;
    
    while (curr->next != nullptr){
        curr = curr->next;  
    }
    curr->next = newNode;
}

Node* popFront(Node* head){






}