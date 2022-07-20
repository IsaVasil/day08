#include<stdio.h>
#include <stdlib.h>
#include <stdint.h>
int setBit(u_int32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] |= (1ull << b);
    return 0;
}

int clearBit(u_int32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] &= ~(1ull << b); 
    return 0;
}

int flipBit(u_int32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] ^= (1ull << b);
    return 0; 
}

int checkBit(u_int32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return -1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    return !!(mask[index] & (1ull << b)); 
}
void printMask(u_int32_t* mask, size_t n){
    for (int i = n * sizeof(*mask) * __CHAR_BIT__ - 1; i >= 0; i--){
        printf("%2d ", i);
    }
    putchar('\n');
    for (int i = n * sizeof(*mask) * __CHAR_BIT__ - 1; i >= 0; i--){
        printf("%2d ", checkBit(mask, n, i));
    }
    putchar('\n');
}
