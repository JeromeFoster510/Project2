

#ifndef LIST_H
#define LIST_H

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class CircularDoubleLinkedList {
private:
    Node* head;

public:
    CircularDoubleLinkedList();
    void insert(int data);
    void display();
    void step1();
    void step2();
    void step3();
    void step4();
    void step5();
};

#endif

