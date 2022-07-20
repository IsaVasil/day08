#pragma once
#include <stdlib.h>
#include <stdint.h>
#include "test.c"
int setBit(u_int32_t *mask, size_t n, size_t bit);
int clearBit(u_int32_t *mask, size_t n, size_t bit);
int flipBit(u_int32_t *mask, size_t n, size_t bit);
int checkBit(u_int32_t *mask, size_t n, size_t bit);