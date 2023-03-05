//
// creater by Pavel Kosteckij 05.03.2023
//

#include "interface.h"

int calc_sum_of_digits(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

// Implementation of interface.h function