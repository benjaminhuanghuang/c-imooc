#include <stdio.h>

void move(int n, char src, char dest, char tmp)
{
  if (n == 0)
    return;
  else if (n == 1)
  {
    printf("%c --> %c \n", src, dest);
  }
  else{
    move(n-1, src, tmp, dest);
    move(1, src, dest, tmp);
    move(n-1, tmp, dest, src);
  }
}


int main( void) {
  move(3, 'A', 'C', 'B');

  return 0;
}