#include "calculator.h"
#include <stdio.h>


Operator calculator_operator_set() {
    char choosen_operator;
    scanf("%c", &choosen_operator);

    switch (choosen_operator) {
        case '+':
            return SUM;
            break;
        case '-':
            return DIFFERENCE;
            break;
        case '*':
            return PRODUCT;
            break;
        case '/':
            return QUOTIENT;
            break;
        default:
            printf("Default operator chosen: None");
            break;
    }
}

int calculator_number_set() {
    int choosen_number;
    scanf("%d", &choosen_number);

    return choosen_number;
}

int calculator_calculate(int choosen_number_first, int choosen_number_second, Operator choosen_operator) {
    switch (choosen_operator) {
        case SUM:
            return choosen_number_first + choosen_number_second;
            break;
        case DIFFERENCE:
            return choosen_number_first - choosen_number_second;
            break;
        case PRODUCT:
            return choosen_number_first * choosen_number_second;
            break;
        case QUOTIENT:
            return choosen_number_first / choosen_number_second;
            break;
    }
}
