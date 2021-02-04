
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <iomanip>
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
    stringstream datastream;

    datastream << "testname,10,100,1000,10000,100000,1000000,10000000,100000000" << endl;

    unsigned int iteration;
    unsigned int iterations[8] = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

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
        VectorStack<int> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(testint);
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
    cout << "Size of int vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<int> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.getItem(j);
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
            TestStack.appendItem(testint);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.popItem();
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
        VectorStack<double> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(pi);
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
    cout << "Size of double vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<double> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.getItem(j);
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
        VectorStack<double> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(pi);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.popItem();
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
        VectorStack<string> TestStack;
        auto start = high_resolution_clock::now(); 
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(teststr);
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
    cout << "Size of string vectors";
    for (unsigned int i = 0; i < 7; ++i) {
        cout << '.';
        iteration = iterations[i];
        VectorStack<string> TestStack;
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.appendItem(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.getItem(j);
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
            TestStack.appendItem(teststr);
        }
        auto start = high_resolution_clock::now();
        for (unsigned int j = 0; j < iteration; ++j) {
            TestStack.popItem();
        }
        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(end - start);
        datastream << duration.count() << ',';
    }
    datastream << endl;
    cout << endl;
    print_n_char('-', 20);
    cout << endl;

    cout << "Outputting Results.csv...." << endl;
    ofstream file;
    file.open("Results.csv");
    file << datastream.str();
    file.close();

    return 0;
}