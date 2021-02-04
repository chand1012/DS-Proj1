template <class T>
class LinkedList {
    public: 
        LinkedList() {
            head = nullptr;
        };
        ~LinkedList();
        void appendNode(T); // adds the node to the end
        void insertNode(T); // inserts the node at the beginning
        bool deleteNode(T); // deletes the matching node
        T getNode(unsigned int); // gets the node at the specified position
        T popNode(); // gets the node from the end and deletes it
        unsigned int length();
    private:
        unsigned int node_count = 0;
        struct Node { // the node with our data
            T data;
            Node *next;
        };
        Node *head;
};