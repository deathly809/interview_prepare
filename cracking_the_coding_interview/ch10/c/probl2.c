
#include <stdio.h>
#include <string.h>

void update(int buffer[256], const char* ptr, int update) {
    while(*ptr) {
        buffer[(int)(*ptr)] += update;
        ++ptr;
    }
}

int is_anagram(const char* a, const char* b) {
    static int counts[256];
    memset(counts,0,sizeof(int) * 256);

    update(counts,a,1);
    update(counts,b,-1);

    for(int i = 0 ; i < 256; ++i) {
        if(counts[i]) {
            return 0;
        }
    }
    return 1;
}

// insertion sort
void sortStrings(char** strings, size_t num_strings) {

    for(unsigned i = 1; i < num_strings; ++i) {
        char* str = strings[i];
        unsigned int pos = i;

        // slide everyone to an anagram if it exists
        while(pos > 0 && !is_anagram(strings[pos - 1],str)) {
            strings[pos] = strings[pos - 1];
            --pos;
        }

        if(pos != i) {
            strings[pos] = str;
        }
    }
}

int main() {
    char* strings[] = {
        "dam",
        "hello",
        "goodbye",
        "snoopy",
        "god",
        "mad",
        "dog"
    };
    sortStrings(strings, 7);
    for(int i = 0 ; i < 7; ++i) printf("%s\n", strings[i]);
    return 0;
}
