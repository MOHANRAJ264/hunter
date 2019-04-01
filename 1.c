#include <stdio.h>

void main ()
{
  int a[1000];
  int n, i, j, count = 0;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if ((a[i] == a[j]) && (a[j] != '$'))
	    {
	      count++;
	      a[j] = '$';
	    }
	}
      if (count != 0)
	{
	  printf ("%d", a[i]);
	}
      count = 0;
    }
}
