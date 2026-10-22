#include<stdio.h>

// Function declaration
void printHello();
int calcSquare(int n);

// Function call
int main() {
    int n;
    printHello();
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d is %d\n", n, calcSquare(n));
    return 0;
}

// Function definition
void printHello() {
    printf("Hello, World!\n");
}
int calcSquare(int n) {
    return n * n;
}