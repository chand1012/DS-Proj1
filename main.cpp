
#include <iostream>
#include <string>
#include <stack>
#include <fstream>
#include <chrono> 
#include <bits/stdc++.h>
using namespace std::chrono; 

#include "VectorStack.cpp"

using namespace std;

void print_n_char(char x, unsigned int n) {
    for (unsigned int i = 0; i < n; ++i) {
        cout << x;
    }
}

int main() {
    ofstream datastream;
    datastream.open("Results.csv");

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

    datastream << "int_vect_push,";
    cout << "pushing int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(testint);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_vect_size,";
    cout << "insert int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.insert(testint);
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
        VectorStack<int> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
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

    datastream << "double_vect_push,";
    cout << "pushing double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(pi);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_vect_size,";
    cout << "insert double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.insert(pi);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_vect_pop,";
    cout << "Popping double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
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

    datastream << "string_vect_push,";
    cout << "pushing string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(teststr);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_stack_insert,";
    cout << "Insert int stack";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.insert(teststr);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_vect_pop,";
    cout << "Popping string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #4: INT STL STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_stack_push,";
    cout << "pushing string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<int> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(testint);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_stack_insert,";
    cout << "insert string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<int> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.emplace(testint);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "int_stack_pop,";
    cout << "Popping string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<int> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #5: DOUBLE STL STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_stack_push,";
    cout << "pushing double stacks";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<double> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(pi);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_stack_insert,";
    cout << "insert double stackss";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<double> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.emplace(pi);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "double_stack_pop,";
    cout << "Popping double stacks";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<double> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "TEST #6: STRING STL STACK." << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_stack_push,";
    cout << "pushing double stacks";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<string> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(teststr);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_stack_insert,";
    cout << "insert string stackss";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<string> TestStack;
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.emplace(teststr);
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    datastream << "string_stack_pop,";
    cout << "Popping string stacks";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        stack<string> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.push(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.pop();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;
    
    datastream.close();

    return 0;
}