#include <stdio.h>
#include "ddptypes.h"

void hallo_test(ddpstring* str) {
    printf("Hallo aus test.c: %s", str->str);
}