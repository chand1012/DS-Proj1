#include "LinkedList.hpp"

template <class T>
LinkedList<T>::~LinkedList() {
    Node *node = nullptr;
    Node *nextNode;

    node = head;

    while (node != nullptr)
    {
        nextNode = node->next;

        delete node;

        node = nextNode;
    }

}

template <class T>
unsigned int LinkedList<T>::length() {
    return node_count;
}

template <class T>
void LinkedList<T>::insertNode(T data) {
    Node *newNode;
    newNode = new Node;
    newNode -> data = data;
    newNode -> next = head;
    head = newNode;
    node_count++;
}

template <class T>
void LinkedList<T>::appendNode(T data) {
    if (!head) {
        insertNode(data);
        return;
    }

    Node *nextNode;
    Node *previousNode;

    previousNode = head;

    while (previousNode -> next != nullptr) {
        previousNode = previousNode -> next;
    }

    nextNode = new Node;
    nextNode -> data = data;
    previousNode -> next = nextNode;
    nextNode -> next = nullptr;
    node_count++;
}

// works in testing
// breaks in prod
template <class T>
T LinkedList<T>::getNode(unsigned int index) {
    
    Node *workingNode;

    workingNode = head;

    unsigned int counter = 0;

    while (workingNode -> next != nullptr) {
        if (counter == index) {
            return (workingNode -> data);
        }
        ++counter;
        workingNode = workingNode -> next;
    }
    return workingNode -> data;
}

template <class T>
bool LinkedList<T>::deleteNode(T data) {
    Node *r = head;
    Node *b = nullptr;

    if (head == nullptr) {
        return false;
    }

    if (r->data == data) {
        head = r->next;
        delete r;
        node_count--;
        return true;
    }

    while (r->data != data) {
        b = r;
        r = r->next;
        if (r == nullptr) {
            return false;
        }
    } 
    
    if (r) {
        b->next = r->next;
        delete r;
        node_count--;
    }
    return true;
} 

template <class T>
T LinkedList<T>::popNode() {
    Node *r = head;

    while(r->next != nullptr) {
        r = r->next;
    }

    T data = r->data;

    deleteNode(data);
    return data;
}