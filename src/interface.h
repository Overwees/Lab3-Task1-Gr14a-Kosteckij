//
// creater by Pavel Kosteckij 05.03.2023
//

#ifndef INTERFACE_H
#define INTERFACE_H

#include "stddef.h"

// This function is used in main.c client file. Implementation is
// in server.c file

// This function calculates the sum of nubmer's digits
// agrument: int value
// return: int value

int calc_sum_of_digits(int num);

#endif