#include "VectorStack.cpp"
#include <cassert>

using namespace std;

int main() {

    { // test constructor

        VectorStack<int> test;
        assert(test.length() == 0);

    }

    { // test append and get
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.appendItem(i);
        }

        assert(test.length() == 5);
        assert(test.getItem(0) == 0);
        assert(test.getItem(4) == 4);

    }

    { // test insert and get
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.insertItem(i);
        }

        assert(test.length() == 5);
        assert(test.getItem(0) == 4);
        assert(test.getItem(4) == 0);
        
    }

    { // test insert and delete
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.insertItem(i);
        }

        int x = test.getItem(3);

        test.deleteItem(3);

        assert(test.length() == 4);
        assert(test.getItem(3) != x);
        
    }

    { // test append and pop
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.appendItem(i);
        }

        int x = test.popItem();

        assert(test.length() == 4);
        assert(x == 4);

    }

    return 0;
}