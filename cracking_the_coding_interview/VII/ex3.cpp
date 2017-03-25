
#include <iostream>

int main(int argc, char* argv[]) {
    if(argc != 3) {
        std::cout << "usage: " << std::string(argv[0]) << " STRING1 STRING2" << std::endl;
        return 1;
    }

    std::string larger(argv[2]);
    std::string smaller(argv[1]);

    if(larger.size() < smaller.size()) {
        std::string tmp = larger;
        larger = smaller;
        smaller = tmp;
    }

    int counts[256];
    for(int i = 0 ; i < 256; ++i) counts[i] = 0;
    int non_zeros = 0;

    for(int i = 0; i < smaller.size(); ++i) {
        char c = smaller[i];
        if(counts[c] == 0) ++non_zeros;
        ++counts[c];
    }

    for(int i = 0; i < smaller.size(); ++i) {
        char c = larger[i];
        counts[c]--;
        if(counts[c] == 0) non_zeros--;
        else if(counts[c] == -1) non_zeros++;
    }

    if(non_zeros == 0) std::cout << 0 << std::endl;
    
    for(int i = smaller.size(); i < larger.size(); ++i) {
        char c = larger[i - smaller.size()];

        // add it back
        counts[c]++;
        if(counts[c] == 0) --non_zeros;
        else if(counts[c] == 1) ++non_zeros;

        // remove new
        c = larger[i];
        counts[c]--;
        if(counts[c] == 0) --non_zeros;
        else if(counts[c] == -1) ++non_zeros;
        
        if(non_zeros == 0) std::cout << i << std::endl;
    }

    return 0;
}
