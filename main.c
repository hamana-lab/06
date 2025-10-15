#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
    return(a+b);
}

int square(int n)
{
    return(n*n);
}    

int get_max(int a, int b)
{
    if (a>b)
     return a;
    else
     return b;
}


int main(void)
{
  int x;
  
  printf("sum two result is %i\n", sumTwo(2, 3));
  printf("square result is %i\n", square(4));
  printf("get max result is %i\n", get_max(2, 3));

  
  system("PAUSE");	
  return 0;
}
