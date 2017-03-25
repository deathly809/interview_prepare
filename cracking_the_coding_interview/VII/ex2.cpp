
#include <iostream>
#include <vector>
#include <map>

int main() {
    std::map<int,std::vector<std::pair<int,int>>> pairs;
    for(int i = 1; i < 100; ++i) {
        for(int j = i; j < 100; ++j) {
            int i3 = i * i * i;
            int j3 = j * j * j;
            int d = i3 + j3; 
            if(pairs.find(d) == pairs.end()) {
                pairs.insert( std::pair<int, std::vector<std::pair<int,int>>>( d , { std::pair<int,int>(i3,j3) } ) );
            } else {
                pairs[d].push_back(std::pair<int,int>(i,j));
            }
        }
    }

    for( auto list : pairs ) {
        for( auto p1 : list.second ) {
            for( auto p2 : list.second ) {
                std::cout << list.first << " = " << p1.first << " + " << p1.second << " = " << p2.first << " + " << p2.second << std::endl;
            }
        }
    }
}
