/** Advent of Code 2018 -- Day 2
 *
 */

/**
 * global count of number with exactly 2, exactly 3
 * loop through each item:
 *  struct: 
 *
 */

#include <stdio.h> //FILE, fopen, fclose
#include <string.h> // memset()

int num_2_ltrs = 0;
int num_3_ltrs = 0;


int*
letterFrequency(char *word, int *pFreqLtrs) {
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
countTwoThreeLtrs(int *pFreqLtrs) {
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
  int pFreq[25] = {0};
  char line[20];
  char ch;
  int i = 0;

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
  while((ch=fgetc(pfile) != EOF)) {
    if (ch == '\0') {
      letterFrequency(line, pFreq);
      countTwoThreeLtrs(pFreq);
      memset(pFreq, 0, 25);
      memset(pFreq, '\0', 20);
      i = 0;
    } else {
      line[i]=ch;
      i++; 
    }
  }
  
/**
  letterFrequency("aa", pFreq);
  countTwoThreeLtrs(pFreq);
  memset(pFreq, 0, 25);
  
  puts("=== second word === \n");

  letterFrequency("bbb", pFreq);
  countTwoThreeLtrs(pFreq);
*/

 fclose(pfile);
  return 0;
}

