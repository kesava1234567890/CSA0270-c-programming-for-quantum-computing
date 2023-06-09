#include <stdio.h>

void swap(int* num1, int* num2);

int main() {
    int num1, num2;

    printf("Enter two numbers to swap:\n");
    scanf("%d%d", &num1, &num2);

    printf("Before swapping:\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    return 0;
}

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
