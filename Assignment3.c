#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    char input[10];
    
    printf("Enter the data type name (or \"all\" to display all): ");
    scanf("%s", input);
    
    if (input[0] == 'i' && input[1] == 'n' && input[2] == 't' && input[3] == '\0') {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
    } else if (input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't' && input[5] == '\0') {
        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %d to %d\n", -2147483648, 2147483647);
    } else if (input[0] == 'd' && input[1] == 'o' && input[2] == 'u' && input[3] == 'b' && input[4] == 'l' && input[5] == 'e' && input[6] == '\0') {
        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %d to %d\n", -2147483648, 2147483647);
    } else if (input[0] == 'c' && input[1] == 'h' && input[2] == 'a' && input[3] == 'r' && input[4] == '\0') {
        printf("Size of char: %zu byte\n", sizeof(char));
        printf("Value range of char: %d to %d\n", -128, 127);
    } else if (input[0] == 'a' && input[1] == 'l' && input[2] == 'l' && input[3] == '\0') {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %d to %d\n", -2147483648, 2147483647);
        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %d to %d\n", -2147483648, 2147483647);
        printf("Size of char: %zu byte\n", sizeof(char));
        printf("Value range of char: %d to %d\n", -128, 127);
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}
