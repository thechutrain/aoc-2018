#include <stdio.h>

int main() {
  char a = 'a';
  printf("%d\n", a);
  printf("%d", '0');
  printf("%d", a-'0');

  if (a > 98) {
    puts("HI");
  }

  return 0;
}
