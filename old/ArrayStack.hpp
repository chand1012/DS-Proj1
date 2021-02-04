#include <array>

using namespace std;

template <class T, unsigned int n>
class ArrayStack {
    public:
        unsigned int max_length;
        ArrayStack() {
            max_length = n;
            current_length = 0;
        };
        ~ArrayStack();
        unsigned int length();
        bool appendItem(T);
        bool deleteItem(T);
        bool insertItem(T);
        bool getItem(unsigned int, T&);
        bool popItem(T&);
    private:
        unsigned int current_length;
        array<T, n> elements;
};  