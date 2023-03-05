#pragma once
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include <stddef.h>
#include <stdexcept>

template <typename Item_Type> class SingleLinkedList {
public:
    // Constructor
    SingleLinkedList();
    // Destructor
    ~SingleLinkedList();

    // Adds a new node with the item at the front of the list
    void push_front(const Item_Type& item);

    // Adds a new node with the item at the back of the list
    void push_back(const Item_Type& item);

    // Removes the node at the front of the list
    void pop_front();

    // Removes the node at the back of the list
    void pop_back();

    // Returns the item at the front of the list
    Item_Type front() const;

    // Returns the item at the back of the list
    Item_Type back() const;

    // Returns true if the list is empty
    bool empty() const;

    // Inserts a new node with the item at position index
    void insert(size_t index, const Item_Type& item);

    // Removes the node at position index
    bool remove(size_t index);

    // Returns the position of the first occurrence of item if it is found
    // Returns the size of the list if item is not found
    size_t find(const Item_Type& item) const;

    // Returns the number of items in the list
    size_t size() const;

    // void output() const;

private:
    struct Node { // Node struct
        Item_Type item;
        Node* next;
        Node(const Item_Type& item, Node* next = nullptr)
            : item(item), next(next) {}
    };
    Node* head;       // Pointer to the first node in the list
    Node* tail;       // Pointer to the last node in the list
    size_t num_items; // Number of nodes in the list
};

#endif