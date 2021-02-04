#include "VectorStack.cpp"
#include <cassert>

using namespace std;

int main() {

    { // test constructor

        VectorStack<int> test;
        assert(test.size() == 0);

    }

    { // test append and get
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.push(i);
        }

        assert(test.size() == 5);
        assert(test.at(0) == 0);
        assert(test.at(4) == 4);

    }

    { // test insert and get
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.insert(i);
        }

        assert(test.size() == 5);
        assert(test.at(0) == 4);
        assert(test.at(4) == 0);
        
    }

    { // test insert and delete
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.insert(i);
        }

        int x = test.at(3);

        test.remove(3);

        assert(test.size() == 4);
        assert(test.at(3) != x);
        
    }

    { // test append and pop
        VectorStack<int> test;
        
        for (unsigned int i = 0; i < 5; ++i) {
            test.push(i);
        }

        int x = test.pop();

        assert(test.size() == 4);
        assert(x == 4);

    }

    return 0;
}