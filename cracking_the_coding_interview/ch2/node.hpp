
#ifndef NODE_HPP_
#define NODE_HPP_

template<class T>
struct node {
    node* next;
    T value;
};

template<class T>
struct Node {


    node<T>* head;
    node<T>* tail;

    Node() {
        tail = head = nullptr;
    }


    void insert(T val) {
        node<T>* n = new node<T>();
        n->next = nullptr;
        n->value = val;
        if(head == nullptr) {
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
    }
};

template<class T>
std::ostream& operator<<(std::ostream & os, Node<T> & n) {
    node<T>* c = n.head;
    os << "[";
    if( c != nullptr) {
        os << c->value;
        c = c->next;
        while(c != nullptr) {
            os << ", " << c->value;
            c = c->next;
        }
    }
    return os << "]";
}
#endif
