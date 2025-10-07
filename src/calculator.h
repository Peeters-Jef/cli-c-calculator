#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdbool.h>

typedef enum {
    SUM,
    DIFFERENCE,
    PRODUCT,
    QUOTIENT,
    NONE
} Operator;


Operator calculator_operator_set();
double calculator_number_set();
bool calculator_calculate(double choosen_number_first, double choosen_number_second, Operator choosen_operator, double *result);

#endif
