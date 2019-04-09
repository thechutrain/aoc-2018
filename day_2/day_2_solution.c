/** Advent of Code 2018 -- Day 2
 *
 */

/**
 * global count of number with exactly 2, exactly 3
 * loop through each item:
 *  struct: 
 *
 */

#include <stdio.h>


int
main() {
  FILE *pfile;

 if (!(pfile = fopen("input.txt", "r"))) {
  fprintf(stderr, "There was an error writing opening the file");
  return 1;
 }
 
 fclose(pfile);

  return 0;
}

