#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdbool.h>

typedef enum {
    SUM,
    DIFFERENCE,
    PRODUCT,
    QUOTIENT
} Operator;


Operator calculator_operator_set();
int calculator_number_set();
bool calculator_calculate(int choosen_number_first, int choosen_number_second, Operator choosen_operator, int *result);

#endif
