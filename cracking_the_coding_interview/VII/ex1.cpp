
#include <iostream>

#include <map>

std::map<int,int> readData() {
    std::map<int,int> result;
    int val;
    while(std::cin >> val) {
        result.insert(std::pair<int,int>(val,val));
    }
    return result;
}

int main() {
    std::map<int,int> data = readData();

    for(auto p : data ) {
        int f = p.first;
        if(data.find(f - 2) != data.end()) std::cout << "(" << f << "," << f - 2 << ")" << std::endl;
        if(data.find(f + 2) != data.end()) std::cout << "(" << f << "," << f + 2 << ")" << std::endl;
    }
    return 0;
}
