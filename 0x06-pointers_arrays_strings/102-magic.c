#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  p[5] = 98;
  /* ...so that this prints 98\n */
  printf("n : %p\n",&n);
  printf("a : %p\n",a);
  for (int i=0; i<7; i++)
  {
    printf("address a[%d]: %p\n",i,&a[i]);
  }
  for (int i=0; i<6; i++)
  {
    printf("address p[%d]: %p\n",i,&p[i]);
  }
  printf("p : %p\n",p);

  printf("a[2] = %d\n", a[2]);
  return (0);
}
