#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;

    int digits = countDigits(num);

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if num is an Armstrong number
    if (result == num)
        return 1; 
    else
        return 0; 
}

int main() {
    int start = 0, end = 100000;

    printf("Armstrong numbers between 0 and 100,000:\n");

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
