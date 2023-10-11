

#include "circularlist.h"
#include <iostream>
using namespace std;

int main() {
    CircularDoubleLinkedList list;

    
    list.insert(11);
    list.insert(22);
    list.insert(33);
    list.insert(44);
    list.insert(55);

    
    cout << "Initial List: ";
    list.display();

    
    list.step1();
    list.step2();
    list.step3();
    list.step4();
    list.step5();

    
    cout << "Final List: ";
    list.display();

    cout << "Final Linked List Table:\n";
    cout << "|               | 1st node | 2nd node | 3rd node | 4th node | 5th node |\n";
    cout << "|---------------|----------|----------|----------|----------|----------|\n";
    cout << "| Node value    |   44     |   33     |   22     |   11     |   55     |\n";
    cout << "| Prev. node    |   55     |   44     |   33     |   22     |   11     |\n";
    cout << "| Next node     |   33     |   22     |   11     |   55     |   44     |\n";

    return 0;
}
