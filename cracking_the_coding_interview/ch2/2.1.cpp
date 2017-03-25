
#include <iostream>

#include <map>
#include <vector>

#include <node.hpp>

template<class T>
void RemoveDuplicatesFromList(node<T>* n) {
    std::map<T,bool> seen;

    node<T>* curr = n;
    node<T>* prev = nullptr;

    while(curr != nullptr) {
        if(seen.find(curr->value) != seen.end()) {
            prev->next = curr->next;
        } else {
            seen.insert(std::pair<T,bool>(curr->value,true));
            prev = curr;
        }
        curr = curr->next;
    }
}

void test(std::vector<int> init) {
    Node<int> list;
    for(int i: init) list.insert(i);
    
    std::cout << list << std::endl;
    RemoveDuplicatesFromList(list.head);
    std::cout << list << std::endl << std::endl;
}

int main() {
    test({});
    test({1});
    test({1,1});
    test({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1});
    test({1,2,1});
    test({1,2,1,2});
    test({1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1});
    return 0;
}

