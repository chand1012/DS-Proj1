template <class T>
class LinkedList {
    public: 
        LinkedList() {
            head = nullptr;
        };
        ~LinkedList();
        void appendNode(T);
        void insertNode(T);
        bool deleteNode(T);
        T getNode(unsigned int);
    private:
        struct Node {
            T data;
            Node *next;
        }
        Node *head;
}