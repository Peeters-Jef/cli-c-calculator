#include "calculator.h"
#include <stdio.h>


Operator calculator_operator_set() {
    char choosen_operator;
    char input[100];

    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, " %c", &choosen_operator) == 1) {
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
        
        } else {
            printf("Invalid input");
        }
    }
}

int calculator_number_set() {
    int choosen_number;
    char input[100];


    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, "%d", &choosen_number) == 1) {
            break;
        } else {
            printf("invalid input. Try again \n");
        }
    }

    return choosen_number;
}

bool calculator_calculate(int choosen_number_first, int choosen_number_second, Operator choosen_operator, int *result) {
    switch (choosen_operator) {
        case SUM:
            *result = choosen_number_first + choosen_number_second;
            return true;
        case DIFFERENCE:
            *result = choosen_number_first - choosen_number_second;
            return true;
        case PRODUCT:
            *result = choosen_number_first * choosen_number_second;
            return true;
        case QUOTIENT:
            if (choosen_number_second == 0) {
                printf("Error: Cannot divide by ZERO\n");
                return false;
            }
            *result = choosen_number_first / choosen_number_second;
        default:
            return false;
    }
}
