//Sum of Natural Numbers Using while Loop

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}

/*In both programs, the loop is iterated n number of times. And, in each iteration, the value of i is added to sum and i is incremented by 1.

Though both programs are technically correct, it is better to use for loop in this case. It's because the number of iterations is known.

The above programs don't work properly if the user enters a negative integer. Here is a little modification to the above program where we keep taking input from the user until a positive integer is entered.*/