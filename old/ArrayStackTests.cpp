#include "ArrayStack.cpp"
#include <cassert>
#include <iostream>

using namespace std;

const unsigned int MAX_LENGTH = 5;

int main() {

    { // test empty ArrayStack
        ArrayStack<int, MAX_LENGTH> test;

        assert(MAX_LENGTH == test.max_length);
        assert(test.length() == 0);
    }

    { // test append and length
        ArrayStack<int, MAX_LENGTH> test;

        bool status;

        for (int i = 0; i<MAX_LENGTH; ++i) {
            status = test.appendItem(i);
            assert(status);
        }

        assert(test.length() == MAX_LENGTH);
    }

    { // test append and delete.
        ArrayStack<int, MAX_LENGTH> test;

        bool status;

        for (int i = 1; i<=MAX_LENGTH; ++i) {
            status = test.appendItem(i);
            assert(status);
        }

        status = test.deleteItem(2);

        assert(status);

        assert(test.length() == (MAX_LENGTH - 1));
    }

    { // test append and get
        ArrayStack<int, MAX_LENGTH> test;

        bool status;
        int x;

        for (int i = 1; i<=MAX_LENGTH; ++i) {
            status = test.appendItem(i);
            assert(status);
        }

        for (int i = 0; i<MAX_LENGTH; ++i) { 
            status = test.getItem(i, x);
            assert(status);
            assert(x == i+1);
        }

    }

    { // test append, delete, and get
        ArrayStack<int, MAX_LENGTH> test;

        bool status;
        int x;
        int y;

        for (int i = 1; i<=MAX_LENGTH; ++i) {
            status = test.appendItem(i);
            assert(status);
        }
        status = test.getItem(3, x);
        assert(status);

        status = test.deleteItem(x);
        assert(status);

        status = test.getItem(3, y);
        assert(status);
        assert(x != y);

    }

    { // test insert
        ArrayStack<int, MAX_LENGTH> test;

        bool status;

        for (int i = 0; i<MAX_LENGTH; ++i) {
            status = test.insertItem(i);
            assert(status);
        }

        assert(test.length() == MAX_LENGTH);
    
    }

    { // test insert and get
        ArrayStack<int, MAX_LENGTH> test;

        bool status;
        int x;

        for (int i = 0; i<MAX_LENGTH; ++i) {
            status = test.insertItem(i);
            assert(status);
        }

        for (int i = 1; i<=MAX_LENGTH; ++i) { 
            status = test.getItem(i-1, x);
            assert(status);
            assert(x == MAX_LENGTH-i);
        }

    }

    { // test insert and pop
        ArrayStack<int, MAX_LENGTH> test;

        bool status;
        int x;
        int y = 0;

        for (int i = 0; i<MAX_LENGTH; ++i) {
            status = test.insertItem(i);
            assert(status);
        }

        for (int i = 0; i<MAX_LENGTH; ++i) {
            status = test.popItem(x);
            assert(status);
            assert(x == y);
            ++y;
        }

        y = x;

        status = test.popItem(x);
        assert(!status);
        assert(x == y);

    }

    return 0;
}

