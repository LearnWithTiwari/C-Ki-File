#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Compare the two numbers and print the smaller one
    if (num1 < num2) {
        printf("%d is the smaller number.\n", num1);
    } else if (num2 < num1) {
        printf("%d is the smaller number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
