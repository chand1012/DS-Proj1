
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <chrono> 
using namespace std::chrono; 

#include "VectorStack.cpp"
#include "ArrayStack.cpp"
#include "LinkedList.cpp"

using namespace std;

void print_n_char(char x, unsigned int n) {
    for (unsigned int i = 0; i < n; ++i) {
        cout << x;
    }
}

int main() {
    stringstream datastream;

    datastream << "testname,10,100,1000,10000,100000,1000000,10000000" << endl;

    unsigned int iteration;
    unsigned int iterations[7] = {10, 100, 1000, 10000, 100000, 1000000, 10000000};

    const int testint = 20000000;
    const double pi = 3.141592653589793238463;
    const string teststr = "This is a test";

    cout << "STARTING TIMED TESTS." << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #1: INT VECTOR STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_vect_append,";
    cout << "Appending int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> stack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(testint);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_vect_iterate,";
    cout << "Iterating int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.getItem(j);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_vect_delete,";
    cout << "Deleting int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.popItem();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #2: DOUBLE VECTOR STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_vect_append,";
    cout << "Appending double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> stack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(pi);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_vect_iterate,";
    cout << "Iterating double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.getItem(j);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_vect_delete,";
    cout << "Deleting double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.popItem();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #3: STRING VECTOR STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_vect_append,";
    cout << "Appending string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> stack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(teststr);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_vect_iterate,";
    cout << "Iterating string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.getItem(j);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_vect_delete,";
    cout << "Deleting string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendItem(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.popItem();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #4: INT LINKED LIST STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "linkedlist_vect_append,";
    cout << "Appending int linked lists";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        LinkedList<int> stack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendNode(testint);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "linkedlist_vect_iterate,";
    cout << "Iterating int linked lists";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        LinkedList<int> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendNode(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.getNode(j);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_vect_delete,";
    cout << "Deleting int linked lists";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        LinkedList<int> stack;
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.appendNode(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            stack.popNode();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    // cout << "TEST #4: INT ARRAY STACK." << endl;
    // print_n_char('-', 20);
    // cout << endl;

    // datastream << "int_array_append,";

    // for (unsigned int i = 0; i < 7; ++i) {
    //     iteration = iterations[i];
    //     ArrayStack<int, 100000000> stack;
    //     auto start = high_resolution_clock::now(); 
    //     for (unsigned int j = 0; j < iteration; ++j) {
    //         stack.appendItem(testint);
    //     }
    //     auto end = high_resolution_clock::now(); 
    //     auto duration = duration_cast<microseconds>(end - start);
    //     datastream << duration.count() << ',';
    // }
    // datastream << endl;

    // datastream << "int_array_iterate,";

    // for (unsigned int i = 0; i < 7; ++i) {
    //     iteration = iterations[i];
    //     ArrayStack<int, 100000000> stack;
    //     for (unsigned int j = 0; j < iteration; ++j) {
    //         stack.appendItem(testint);
    //     }
    //     auto start = high_resolution_clock::now();
    //     int x;
    //     for (unsigned int j = 0; j < iteration; ++j) {
    //         stack.getItem(x);
    //     }
    //     auto end = high_resolution_clock::now(); 
    //     auto duration = duration_cast<microseconds>(end - start);
    //     datastream << duration.count() << ',';
    // }
    // datastream << endl;

    // datastream << "int_array_delete,";

    // for (unsigned int i = 0; i < 7; ++i) {
    //     iteration = iterations[i];
    //     ArrayStack<int, 100000000> stack;
    //     for (unsigned int j = 0; j < iteration; ++j) {
    //         stack.appendItem(testint);
    //     }
    //     auto start = high_resolution_clock::now();
    //     int x;
    //     for (unsigned int j = 0; j < iteration; ++j) {
    //         stack.popItem(x);
    //     }
    //     auto end = high_resolution_clock::now(); 
    //     auto duration = duration_cast<microseconds>(end - start);
    //     datastream << duration.count() << ',';
    // }
    // datastream << endl;

    cout << "Outputting Results.csv...." << endl;
    ofstream file;
    file.open("Results.csv");
    file << datastream.str();
    file.close();

    return 0;
}