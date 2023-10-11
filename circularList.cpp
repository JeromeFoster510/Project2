

#include "circularlist.h"
#include <iostream>
#include "circularList.h"
using namespace std;

CircularDoubleLinkedList::CircularDoubleLinkedList() {
    head = nullptr;
}

void CircularDoubleLinkedList::insert(int data) {
    Node* newNode = new Node{ data, nullptr, nullptr };
    if (!head) {
        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }
    else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
    }
}

void CircularDoubleLinkedList::display() {
    if (!head) return;

    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

void CircularDoubleLinkedList::step1() {
    if (head && head->next && head->next->next && head->next->next->next) {
        head->next->next->next->next = head->next->next->next->next->next;
    }
    display();  
}

void CircularDoubleLinkedList::step2() {
    if (head && head->prev && head->prev->prev && head->prev->prev->prev &&
        head->next && head->next->next && head->next->next->next &&
        head->next->next->next->prev) {
        head->prev->prev->prev->prev = head->next->next->next->next->prev;
    }
    display();  
}

void CircularDoubleLinkedList::step3() {
    if (head && head->next && head->next->next && head->next->next->next &&
        head->next->next->next->prev && head->prev && head->prev->prev &&
        head->prev->prev->prev) {
        head->next->next->next->prev->next = head->prev->prev->prev->next;
    }
    display();  
}

void CircularDoubleLinkedList::step4() {
    if (head && head->next) {
        head->next = head->next->next;
    }
    display();  
}

void CircularDoubleLinkedList::step5() {
    if (head && head->next && head->next->prev && head->next->next &&
        head->next->next->next) {
        head->next->prev->next = head->next->next->next;
    }
    display();  
}
