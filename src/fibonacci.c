#include <stdio.h>

unsigned int fibonacci(unsigned int n)
{
  if (n == 1 || n == 0)
  {
    return n;
  }

  unsigned int last = 0; // 0
  unsigned int curr = 1; // 1

  // start from 2
  for (int i = 2; i <= n; i++)
  {
    unsigned int tmp = curr;
    curr += last;
    last = tmp;
  }

  return curr;
}

int main()
{
  printf("Fibonacci(10) : %d\n", fibonacci(10));
}