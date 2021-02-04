#include <vector>

using namespace std;

template <class T>
class VectorStack{
    public:
        VectorStack() {};
        ~VectorStack(){};
        unsigned int size();
        void push(T);
        void insert(T);
        bool remove(T);
        T at(unsigned int);
        T pop();
    private:
        vector<T> elements;
        
};