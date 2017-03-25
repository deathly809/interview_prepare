
#include <iostream>
#include <vector>

#include <node.hpp>

template<class T>
void deleteNode(node<T>* n) {
    node<T>* t = n->next;
    n->next = t->next;
    n->value = t->value;
    delete t;
}

void test(std::vector<int> init, int k) {
    Node<int> list;
    node<int>* n;
    int pos = 0;
    for(int i : init) {
        list.insert(i);
        if(k == pos) {
            n = list.tail;
        }
        ++pos;
    }

    std::cout << k << ": " << list << std::endl;
    deleteNode(n);
    std::cout << list << std::endl << std::endl;
}

int main() {
    test({1,2,3,4},1);
    test({1,2,3,4},2);
    test({1,2,3},1);
}
