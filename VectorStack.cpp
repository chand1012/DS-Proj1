#include "VectorStack.hpp"

using namespace std;

template <class T>
unsigned int VectorStack<T>::size() {
    return elements.size();
}

template <class T>
void VectorStack<T>::push(T data) {
    elements.push_back(data);
}

template <class T>
void VectorStack<T>::insert(T data) {
    typename vector<T>::iterator it;
    it = elements.begin();
    elements.insert(it, data);
}

template <class T>
bool VectorStack<T>::remove(T data) {
    typename vector<T>::iterator it;
    it = elements.begin();
    T temp;
    for (unsigned int i = 0; i < elements.size(); ++i) {
        temp = elements.at(i);
        if (temp == data) {
            elements.erase(it + i);
            return true;
        }
    }
    return false;
}

template <class T>
T VectorStack<T>::at(unsigned int index) {
    return elements.at(index);
}

template <class T>
T VectorStack<T>::pop() {
    unsigned int lastIndex = elements.size() - 1;
    T temp = elements.at(lastIndex);
    elements.pop_back();
    return temp;
}