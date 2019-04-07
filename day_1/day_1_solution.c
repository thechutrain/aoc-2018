/**
 * Advent of Code 2018 - solution to Day 1
 * link: https://adventofcode.com/2018/day/1
 *
 *
 */

#include <stdio.h>
#define max_int_size 5
// #define file_name frequency.txt // DOESNT WORK
char file_name[] = "test.txt";

//int isPositive(){}

void readEachLine(FILE *fp) {
  char line[max_int_size + 1]; // since its also going to take +/-
  char ch;
  while((ch=fgetc(fp)) != EOF) {
    printf("%c\n", ch);
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
