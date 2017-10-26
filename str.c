#include <stdio.h>
#include <string.h>

int main() {
  //strcat = string concatenation
  //strncat = string concatenation limited to n places
  char a[15] = "0123456789";
  char b[5] = "abc";
  char c[15] = "0123456789";
  char d[5] = "abc";

  //strcat
  strcat(a,b);
  strncat(c,d,2);

  printf("a: %s\nb: %s\n",a,c);
  //return 0;
}
