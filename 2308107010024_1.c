#include <stdio.h>

int main() {
    char choice;
    int number, result = 0, base = 1, remainder;

    printf("Masukkan jenis konversi (a, b, c, d): ");
    scanf(" %c", &choice);

    printf("Masukkan bilangan: ");
    scanf("%d", &number);

    switch (choice) {
        case 'a': // Decimal to binary
            while (number > 0) {
                remainder = number % 2;
                result = result + remainder * base;
                number = number / 2;
                base = base * 10;
            }
            printf("Biner: %d\n", result);
            break;

        case 'b': // Binary to decimal
            while (number > 0) {
                remainder = number % 10;
                result = result + remainder * base;
                number = number / 10;
                base = base * 2;
            }
            printf("Desimal: %d\n", result);
            break;

        case 'c': // Decimal to octal
            while (number > 0) {
                remainder = number % 8;
                result = result + remainder * base;
                number = number / 8;
                base = base * 10;
            }
            printf("Oktal: %d\n", result);
            break;

        case 'd': // Octal to decimal
            while (number > 0) {
                remainder = number % 10;
                result = result + remainder * base;
                number = number / 10;
                base = base * 8;
            }
            printf("Desimal: %d\n", result);
            break;

        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}