#include <iostream>
#include "SingleLinkedList.h"
// #include "Output.h"
using namespace std;

// void outputList(SingleLinkedList<int> list);
int main() {
    SingleLinkedList<int> list;

    // add some items to the list
    cout << "Testing push_back with 10 and 20 then push_front() with 5 and 2: " << endl;
    list.push_back(10);
    list.push_back(20);
    list.push_front(5);
    list.push_front(2);

    cout << "List contents: ";
    for (int i = 0; i < list.size(); i++) {
        cout << list.front() << " ";
        list.push_back(list.front());
        list.pop_front();
    }
    cout << endl;

    // test the insert method
    cout << endl;
    cout << "Testing insert() method with 30 at 1 and 40 at 3: " << endl;
    list.insert(1, 30);
    list.insert(3, 40);

    // print the contents of the list
    cout << "List contents: ";
    for (int i = 0; i < list.size(); i++) {
        cout << list.front() << " ";
        list.push_back(list.front());
        list.pop_front();
    }
    cout << endl;

    // test the remove method
    cout << endl;
    cout << "Testing the remove() method at index 2: " << endl;
    bool removed = list.remove(2);
    cout << "Item removed: " << removed << endl;

    // print the contents of the list
    cout << "List contents: ";
    for (int i = 0; i < list.size(); i++) {
        cout << list.front() << " ";
        list.push_back(list.front());
        list.pop_front();
    }
    cout << endl;

    cout << endl << "Testing the find() method with value 10: " << endl;
    cout << "find(10): " << list.find(10) << endl;

    // test the pop_back method
    cout << endl;
    cout << "Testing the pop_back() and pop_front() methods: " << endl;
    list.pop_back();
    list.pop_front();

    // print the contents of the list
    cout << "List contents: ";
    for (int i = 0; i < list.size(); i++) {
        cout << list.front() << " ";
        list.push_back(list.front());
        list.pop_front();
    }
    cout << endl;

    cout << endl << "Testing the front() and back() methods: " << endl;
    cout << "front: " << list.front() << endl;
    cout << "back: " << list.back() << endl;

    cout << endl << "Testing the size() method: " << endl;
    cout << "size: " << list.size() << endl;


    return 0;
}
