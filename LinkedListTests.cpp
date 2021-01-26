#include "LinkedList.hpp"
#include <cassert>

using namespace std;

int main() {
    // test constructor
    {
        LinkedList<int> test;
        assert(test.length() == 0);
    }

    // test append
    {
        LinkedList<int> test;
        test.appendNode(5);
        assert(test.length() == 1);

    } 
}
