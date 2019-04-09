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

static int pFreqLetters[25]; // adds the value to the heap

int*
letterFrequency(char *word) {
  int i;

  while (*word != '\0') {
    printf("C: %c -- ", *word);
    printf("I: %i -- ", *word);
    printf("D: %d -- ", *word);
    //i = *word - '0'; // keeps it as a char (1 byte)
    i = *word - 0; // Promotion, casts char to int (2 bytes?) 
    printf("Casted to int: %i\n", i);
    word++;
  }

  /**
  while (*(word + i) != '\0') {
    printf("%c\n", word[i]);
    //((int)word[i]);

    i++;
  }
  */
  return pFreqLetters;
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

  letterFrequency("abc");


 fclose(pfile);
  return 0;
}

