#ifndef _NODE_H
#define _NODE_H


class Node
{

public:

    Node();
    ~Node();

    void setData(int newData);
    int getData();

    Node* next;


private: 

    int data;
   
};



#endif
