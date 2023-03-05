//
// creater by Pavel Kosteckij 05.03.2023
//

//client file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interface.h"

//main sorts random array by sum of digits

int main (void)
{
  int n;
  int * mass;
  printf("Enter the size of array:");
  if (scanf ("%d",&n) == 1)
  {
    mass = malloc(sizeof(int) *  n);
          srand(time(NULL));
    for (int i = 0; i < n; i++) {
      mass[i] = rand() % 100;
      }
  	for (int i = 0; i < n - 1; i++) {
      for (int j = i+1; j < n; j++) {
        if (calc_sum_of_digits(mass[i]) > calc_sum_of_digits(mass[j])) {
          int tmp = mass[i];
          mass[i] = mass[j];
          mass[j] = tmp;
        }
      }
    }
    printf("Sorted array:\n");
    for (int i = 0 ; i < n; i++)
      printf("%d ",mass[i]);
    printf("\n");
  }
  return 0;
}
