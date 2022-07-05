#include<stdio.h>
int main ()
{
  int first = 0, second = 1, next, i, n;
  printf ("Enter the number of terms: ");
  scanf ("%d", &n);
  printf ("The %d terms of fibonacci sequence is:\n",n);
  for (i = 0; i < n; i++)
  {
  	if(i<=1)
        next = i;
 	else {
	  next = first + second;
      first = second;
      second = next;
	 }
 	printf("\n %d",next);
    }
  return 0;
}
