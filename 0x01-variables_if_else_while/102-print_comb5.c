#include <stdio.h>

/**
 * main - prints unique number combinations between 00 and 100
 * Return: 0 for sucess
 */


int main(void) {
    int i = 0;
    while (i < 100) {
        int j = i + 1; // Ensures unique combinations
        while (j < 100) {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
            
            if (i != 98 || j != 99) { // Avoids printing comma at the end
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    return 0;
}
