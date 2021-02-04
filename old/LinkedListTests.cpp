#include "LinkedList.cpp"
#include <cassert>
// #include <iostream>
#include <stdlib.h> // to get random integers
#include <string>

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
        int randint = rand() % 100 + 1; // random number between 1 and 100
        test.appendNode(randint);
        assert(test.length() == 1);

    } 

    // test append and delete
    {
        LinkedList<int> test;
        int randint = rand() % 100 + 1; // random number between 1 and 100
        test.appendNode(randint);
        assert(test.length() == 1);
        bool found = test.deleteNode(randint);
        assert(found);
        assert(test.length() == 0);
    }

    // test append and delete with more items
    {
        LinkedList<int> test;
        int randlength = rand() % 30 + 5; // range of 5 to 35
        int randint;
        int usedInts[randlength];

        for (int i = 0; i < randlength; i++) {
            randint = rand() % 100 + 1;
            test.appendNode(randint);
            usedInts[i] = randint; 
        }

        assert(test.length() == randlength);

        for (int i = 0; i < randlength; i++) {
            test.deleteNode(usedInts[i]);
        }

        assert(test.length() == 0);
    }

    // test pop
    {
        LinkedList<int> test;
        test.appendNode(5);
        test.appendNode(6);
        test.appendNode(7);

        assert(test.length() == 3);

        int seven = test.popNode();
        assert(seven == 7);
        assert(test.length() == 2);

        int six = test.popNode();
        assert(six == 6);
        assert(test.length() == 1);

        int five = test.popNode();
        assert(five == 5);
        assert(test.length() == 0);
    }

    // test insert
    {
        LinkedList<string> test;
        test.appendNode("This is a test");
        test.appendNode("This is another test");
        test.insertNode("This is the first node now");

        assert(test.length() == 3);

        assert(test.popNode() == "This is another test");
        assert(test.popNode() == "This is a test");
        assert(test.popNode() == "This is the first node now");
    }

    //test get
    {
        LinkedList<string> test;
        test.appendNode("This is a test");
        test.appendNode("This is another test");
        test.insertNode("This is the first node now");

        assert(test.length() == 3);

        assert(test.getNode(1) == "This is a test");
    }

    return 0;
}
