#include <vector>

using namespace std;

template <class T>
class VectorStack{
    public:
        VectorStack() {};
        ~VectorStack(){};
        unsigned int length();
        void appendItem(T);
        void insertItem(T);
        bool deleteItem(T);
        T getItem(unsigned int);
        T popItem();
    private:
        vector<T> elements;
        
};