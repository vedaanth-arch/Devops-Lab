#include <stdio.h>
int add (int a, int  b);
int main() {
    int x, y, result;
    printf ("enter the first number: ");
    scanf ("%d", &x);

    printf ("enter the second number: ");
    scanf ("%d", &y);
    result = add (x, y);
    printf ("the sum of %d and %d is: %d\n", x, y, result);

    return 0;
}
int add (int a, int b) {
    return a + b;
}