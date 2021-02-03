#include "ArrayStack.hpp"

#include <algorithm>

using namespace std;

template <class T, unsigned int n>
ArrayStack<T, n>::~ArrayStack() {
    max_length = 0;
}

template <class T, unsigned int n>
unsigned int ArrayStack<T, n>::length() {
    return current_length;
}

template<class T, unsigned int n>
bool ArrayStack<T, n>::appendItem(T data) {
    if (current_length <= max_length) {
        elements[current_length] = data;
        ++current_length;
        return true;
    } 

    return false;
}

template <class T, unsigned int n>
bool ArrayStack<T, n>::deleteItem(T data) {
    T temp;
    unsigned int index = max_length + 1;

    for (unsigned int i = 0; i < current_length; ++i) {
        temp = elements[i];
        if (temp == data) {
            index = i;
            break;
        }
    }

    if (index != (max_length + 1)) {
        --current_length;
        for (unsigned int i = index; i < current_length; ++i) {
            elements[i] = elements[i+1];
        }
        return true;
    }

    return false;
}

template <class T, unsigned int n>
bool ArrayStack<T, n>::insertItem(T data) {
    if (current_length < max_length) {
        ++current_length;
        rotate(elements.rbegin(), elements.rbegin() + 1, elements.rend());
        elements[0] = data;
        return true;
    }

    return false;
}

template <class T, unsigned int n>
bool ArrayStack<T, n>::getItem(unsigned int index, T& output) {
    if (index < current_length) {
        output = elements[index];
        return true;
    }

    return false;
}

template <class T, unsigned int n>
bool ArrayStack<T, n>::popItem(T& output) {
    if (current_length > 0) {
        --current_length;
        output = elements[current_length];
        return true;
    }

    return false;
}