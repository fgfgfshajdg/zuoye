#include <stdio.h>

int main() {
    unsigned char byte = 10101010; 

    printf("原始二进制数：");
    for (int i = 7; i >= 0; i--) {
        if ((byte >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    printf("提取的每个位：\n");
    for (int i = 7; i >= 0; i--) {
        unsigned char mask = 1 << i;
        unsigned char bit = (byte & mask) >> i;
        printf("%d ", bit);
    }
    printf("\n");

    return 0;
}

    
    
