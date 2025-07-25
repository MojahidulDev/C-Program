#include <stdio.h>

int main() {
    int num, reversed = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    if (num == reversed)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

