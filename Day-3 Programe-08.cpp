#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int numDigits(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int temp = num, sum = 0, digit;
    int n = numDigits(num);
    while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    return (sum == num);
}

// Function to print all Armstrong numbers between a given interval
void printArmstrongNumbers(int lower, int upper) {
    printf("Armstrong numbers between %d to %d are: ", lower, upper);
    for(int i=lower; i<=upper; i++) {
        if(isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print all Armstrong numbers from 1 to n
void findArmstrongNumbers(int n) {
    printf("Armstrong numbers between 1 to %d are: ", n);
    for(int i=1; i<=n; i++) {
        if(isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lower, upper, n;
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
    scanf("%d", &upper);
    printArmstrongNumbers(lower, upper);
    printf("Input value of n: ");
    scanf("%d", &n);
    findArmstrongNumbers(n);
    return 0;
}
