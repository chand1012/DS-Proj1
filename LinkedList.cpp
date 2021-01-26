#include "LinkedList.hpp"

template <class T>
LinkedList<T>::~LinkedList()
{
    Node *node = NULL;
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

template <class T>
bool LinkedList<T>::deleteNode(T) {
    
} 

template <class T>
T LinkedList<T>::popNode() {

}