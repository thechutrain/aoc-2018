/**
 * Advent of Code 2018 - solution to Day 1
 * link: https://adventofcode.com/2018/day/1
 *
 *
 */

#include <stdlib.h>  // for atoi()
#include <stdio.h>
#include <string.h>

// #define max_int_size 5
// #define file_name frequency.txt // DOESNT WORK, why??
char file_name[] = "test.txt";
int total_sum = 0;
//int isPositive(){}


/** Convert char[] (string) to a signed-integer
 * 
 *
 */
int parseToInt(char *c) {
  int i;
  int sign;
  int curr_int = 0;
  sign = (*c == '-') ? -1 : 1; 
 
  // NOTE: since its an array of chars (each number is actually an ASCII number
  i = 1;
  do {
    printf("C[i]: %i\n", atoi(c + i));
    //curr_int = (curr_int * 10) + atoi(c + i);
    //curr_int = (curr_int * 10) + *(c + i); // these are equivalent!
    i++;
  } while (c[i] != '\0');

  /**
  while (c[i] != '\0') {
    printf("C[i]: %c\n", c[i]);
    curr_int = (curr_int * 10) + atoi(c + i);
    //curr_int = (curr_int * 10) + *(c + i); // these are equivalent!
    i++;
  }
  */ 
  // printf("%i", sign);


  printf("PARSED INT: %i\n", curr_int);
  return 2 * curr_int;
}


void clearBuffer(char *line, int size) {
  int i;
  // printf("%i\n",size);
  for (i=0; i<size; i++) {
    line[i]='\0'; 
  }
  puts(line);
}

void readEachLine(FILE *fp) {
  char line[10]; 
  char ch;
  int i = 0;
  int curr_int;

  while((ch=fgetc(fp)) != EOF) {
    //printf("%c\n", ch); 
    if (ch == '\n') {
      // FOR DEBUGGING:
      //puts(line);
      //printf("String length: %lu\n", strlen(line));
    
      // reset:
      curr_int = parseToInt(line);
      printf("parsed int plus 5: %i \n", curr_int + 5);
      i = 0;
      clearBuffer(line, sizeof(line));
     
      // call the addition function
    } else {
      line[i] = ch;
      i++;
    }
  }
}


int
main(){
  // 1) open file name and read each line 
  FILE *fp;

  fp = fopen(file_name, "r");
  if (fp==NULL) {
    printf("could not open file");
    return 1;
  } else {
     // printf("opened file");
    readEachLine(fp);

    fclose(fp);
  }

  return 0;
}
