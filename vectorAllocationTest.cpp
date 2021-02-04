#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    unsigned int iterations[8] = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
    unsigned int iteration;

    const int testint = 2000000;

    ofstream datastream;
    datastream.open("VectorResults.csv");

    datastream << "iterations,size,capacity" << endl;
    for (unsigned int i = 0; i < 8; ++i) {
        vector<int> test;
        iteration = iterations[i];
        for (unsigned int j = 0; j < iteration; ++j) {
            test.push_back(testint);
        }
        datastream << iteration << ',' << test.size() << ',' << test.capacity() << endl;
    }

    datastream.close();

    return 0;
}