#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "bitmask.h"
#define LEN 2
int main(){
 u_int32_t mask[] = {0, 0};
    if (setBit(mask, LEN, 2)){
        fprintf(stderr, "setbit: mask overflow error!\n");
    }
    if (setBit(mask, LEN, 63)){
        fprintf(stderr, "setbit: mask overflow error!\n");
    }
    if (setBit(mask, LEN, 10)){
        fprintf(stderr, "setbit: mask overflow error!\n");
    }
    if (clearBit(mask, LEN, 10)){
        fprintf(stderr, "clearbit: mask overflow error!\n");
    }
    if (flipBit(mask, LEN, 10)){
        fprintf(stderr, "flipbit: mask overflow error!\n");
    }
    if (setBit(mask, LEN, 10345)){
        fprintf(stderr, "setbit: mask overflow error!\n");
    }
    printMask(mask, LEN);
    return 0;
}