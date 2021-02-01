template <class T>
class ArrayStack {
    public:
        unsigned int max_length;
        ArrayStack(unsigned int n) {
            T elements[n];
            max_length = n;
        }
        unsigned int length();
        void appendItem(T);
        void deleteItem(T);
        
}