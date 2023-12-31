/**
 * @file ex7.c

 * @author Ahmed Atia (atiaa6501@gmail.com)
 *
 * @version 1.0
 * @date 2023-07-10
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main(int argc, char** argv)
{
    float a = 0;
    float b = 0;
    
    printf("Please enter the value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &a);

    printf("Please enter the value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &b);

    /*
    ex.
        a = 30, b = 40 ----> a = a * b = 120
        b = a / b = 120 / 40 = 30 "The original value of a"
        a = a / b = 120 / 30 = 40 "The original value of b"
    */
    a = a * b;
    b = a / b;
    a /= b;
    
    printf("The new value of a = %f\nThe new value of b = %f\n", a, b);
    return 0;
}
