// Estudo de binario para decimal

#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int multiplier = 1;
    while (binary != 0) {
        decimal = decimal + (binary % 10)* multiplier;
        binary = binary / 10;
        multiplier = multiplier * 2;
    }
    return decimal;
}

int main() {
    int bin;
    printf("Entre o seu numero binario: ");
    scanf("%d" ,&bin);
    int dec = binaryToDecimal(bin);
    printf("O numero eh: %d \n" ,dec );
    return 0;
}
