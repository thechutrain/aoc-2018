/**
 *  Confused!
 *  - I thought sizeof returned the length of the items in the array?
 *  - is this decay of the pointer?
 *
 *
 *
 */

#include <stdio.h>

static int fixedArr[2];
static int *ptArray = {1,2,3,4};

int
main() {
  int *pA = {1,4,5};
  printf("Size of fixed array: %lu", sizeof(fixedArr));
  printf("\nThe size of ptArray: %lu", sizeof(ptArray));
  printf("\nThe size of pA: %lu", sizeof(*pA));

}
