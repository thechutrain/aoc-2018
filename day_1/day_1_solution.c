/**
 * Advent of Code 2018 - solution to Day 1
 * link: https://adventofcode.com/2018/day/1
 *
 *
 */

#include <stdio.h>
#define file_name frequency.txt

int
main(){
  // 1) open file name and read each line 
  FILE *fp;
  fp = fopen("frequency.txt", "r");
  if (fp==NULL) {
    printf("could not open file");
  } else {
    printf("opened file");
    fclose(fp);
  }

  return 0;
}
