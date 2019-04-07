/**
 * Advent of Code 2018 - solution to Day 1
 * link: https://adventofcode.com/2018/day/1
 *
 *
 */

#include <stdio.h>
#include <string.h>

// #define max_int_size 5
// #define file_name frequency.txt // DOESNT WORK
char file_name[] = "test.txt";

//int isPositive(){}

void clearBuffer(char *line, int size) {
  int i;
  for (i=0; i<size; i++) {
    line[i]='\0'; 
  }
  puts(line);
}

void readEachLine(FILE *fp) {
  char line[10]; 
  char ch;
  int i = 0;

  while((ch=fgetc(fp)) != EOF) {
    //printf("%c\n", ch); 
    if (ch == '\n') {
      // FOR DEBUGGING:
      puts(line);
      printf("String length: %lu\n", strlen(line));
    
      // reset:  
      i = 0;
      clearBuffer(line, 10);
     
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
