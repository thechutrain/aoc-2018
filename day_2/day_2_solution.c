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

static int pFreqLtrs[25] = {0}; // adds the value to the heap
int num_2_ltrs = 0;
int num_3_ltrs = 0;


int*
letterFrequency(char *word) {
  // NOTE: assuming all chars are lowercase
  int i;
  while (*word != '\0') {
    i = *word - 97; // Promotion, casts char to int (2 bytes?) 
    pFreqLtrs[i] +=1;
    word++;
  }
  
  return pFreqLtrs;
}

void
countTwoThreeLtrs() {
 int hasTwoLtr = 0;
 int hasThreeLtr = 0;

 int i;
 for (i=0; i< 26; i++) {
   if (pFreqLtrs[i] == 2) {
    hasTwoLtr = 1; 
   }
   if (pFreqLtrs[i] == 3) {
    hasThreeLtr= 1; 
   }
 }

 if(hasTwoLtr) {
    num_2_ltrs += 1;
    puts("Has at least one letter that appears twice");
 }

 if(hasThreeLtr) {
    num_3_ltrs +=1;
    puts("Has at least one letter that appears three times");
 }
}


int
main() {
  FILE *pfile;
  //int *pFreq;

 if (!(pfile = fopen("input.txt", "r"))) {
  fprintf(stderr, "There was an error writing opening the file");
  return 1;
 }

 /**
  * 1) read each line of the file:
  *
  * 2) count the letters in the words:
  *
  * 3) pass the int* into a fn that checks if char appears twice, or three times
  *
  */


  letterFrequency("abbccz");

  countTwoThreeLtrs();

 fclose(pfile);
  return 0;
}

