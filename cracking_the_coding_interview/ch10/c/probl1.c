

#include <stdio.h>

void merge(int *a, unsigned int len_a, int *b, unsigned int len_b ) {

    // indices
    unsigned int pos_a = len_a - 1;
    unsigned int pos_b = len_b - len_a - 1;
    unsigned int pos = len_b - 1;

    while(pos_a < len_a && pos_b < len_b) {
        if( a[pos_a] > b[pos_b]) {
            b[pos--] = a[pos_a--];
        } else {
            b[pos--] = b[pos_b--];
        }
    }

    while(pos_a < len_a) {
        b[pos--] = a[pos_a--];
    }

    while(pos_b < len_b) {
        b[pos--] = b[pos_b--];
    }
}

void printArray(int* b, unsigned int len) {
    char* pre = "";
    for(unsigned int i = 0 ; i < len ; ++i) {
        printf("%s%d", pre, b[i]);
        pre = " ";
    }
}

int main() {

    int a[] = {2, 4, 6, 8};
    int b[] = {1, 3, 5, 7, 0, 0, 0, 0};

    unsigned int len_a = sizeof(a) / sizeof(int);
    unsigned int len_b = sizeof(b) / sizeof(int);

    merge(a, len_a, b, len_b);

    printArray(b, len_b);
    printf("\n");
}