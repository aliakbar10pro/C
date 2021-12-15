//Sum of Natural Numbers Using for Loop

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

//The above program takes input from the user and stores it in the variable n. Then, for loop is used to calculate the sum up to n.