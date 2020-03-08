#include <stdio.h>
#include <string.h>
#include "validator.h"

int main(int argc, char *argv[]){
    int size = strlen(argv[1]);
    int creditCardNumber[size];

    for (int index = 0; index < size; index++){
        creditCardNumber[index] = argv[1][index] - '0';
    }
    
    isCreditCardValid(creditCardNumber, size);
    return 0;
}