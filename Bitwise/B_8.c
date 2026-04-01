#include <stdio.h>
#include <stdint.h>

void set_bit(uint64_t arr[], int x) {
    int word = x / 64;
    int bit  = x % 64;
    printf("bit : %d\n",bit);
    arr[word] |= (1ULL << bit);
}

int main() {
    uint64_t Aset[2] = {0};
    uint64_t Bset[2] = {0};

    int A[] = {10,20,30,40,50,60,70,80};
    int B[] = {11,20,31,41,50,61,70,81};

    for (int i = 0; i < 8; i++) {
        set_bit(Aset, A[i]);
        set_bit(Bset, B[i]);
    }

    return 0;
}