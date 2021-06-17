#include <stdio.h>
void
solution (int n)
{
  int arr[n], i, sum;
  sum = 0;
  for (i = 0; i < n - 1; i++)
    {
      arr[i] = i + 1;
      sum = sum + i + 1;
    }
  arr[n - 1] = -sum;


  for (i = 0; i < n; i++)
    {

      printf ("%d ", arr[i]);
    }

}

int
main ()
{
  int n;
  scanf ("%d", &n);
  solution (n);
}
