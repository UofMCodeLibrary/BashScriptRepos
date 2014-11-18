// A simple bubble sort demonstration.

#include <stdio.h>
 
int main()
{
  // A few utility variables are created.
  int n, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);

  // The number of elements is n. An array of n integers is created, and then we prompt for n integers.
  int array[n]

  printf("Enter %d integers\n", n);
 
  for (int c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }

  // Here the sort happens. Move up from the beginning.
  for (int c = 0 ; c < ( n - 1 ); c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  // Give back the sorted list.
  printf("Sorted list in ascending order:\n");
 
  for (int c = 0 ; c < n ; c++ ) {
     printf("%d\n", array[c]);
  }
 
  return 0;
}