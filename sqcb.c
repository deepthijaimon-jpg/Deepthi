//WAPC to input an integer. Calculate and display the square and cube of the number.
#include <stdio.h>
int main() 
{
    int number;
    printf("\nEnter an integer: ");
    scanf("%d", &number);
    int square = number*number;
    int cube = number*number*number;
    printf("\nSquare of %d: %d", number, square);
    printf("\nCube of %d: %d", number, cube);
    return 0;
}
