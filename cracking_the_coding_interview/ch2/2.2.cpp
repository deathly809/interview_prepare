
#include <iostream>

#include <vector>

#include <node.hpp>

template<class T>
T GetKthFromLast(node<T>* n, int k) {
    node<T>* curr = n;
    for(int i = 0; i <= k; ++i) {
        if(curr == nullptr) throw std::runtime_error("less than k elements in list");
        curr = curr->next;
    }
    while(curr != nullptr) {
        curr = curr->next;
        n = n->next;
    }
    return n->value;
}


void test(std::vector<int> init, int k) {
    Node<int> list;
    for(int i: init) list.insert(i);
    
    std::cout << k << ": " << list << std::endl;
    try {
        std::cout << GetKthFromLast(list.head, k) << std::endl << std::endl;
    }catch(std::runtime_error & e) {
        std::cout << "not enough elements" << std::endl << std::endl;
    }
}

int main() {
    test({},0);
    test({1},0);
    for(int i = 0 ; i <= 10; ++i) {
        test({1,2,3,4,5,6,7,8,9,10},i);
    }
    return 0;
}

