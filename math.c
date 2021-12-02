#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/

/*
 * Checks if the number is prime of not
*/
int isPrime(int number)
{
    int iter;
    for(iter = 2; iter < number ; iter++)
    {
        if(number % iter == 0 ) // divisible by iter(Not Prime)
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*-------------------------------------------------------------*/
/*
 * Checks if a number is a power of another or not
*/
int isPowerOf(int base, int number)
{
    int result = 1;
    for(int iter = 0 ; iter < number; iter++)
    {
        result = result * base;
        if(result == number)
        {
            return 0;
        }
    }
    if(result != number)
    {
        return 1;
    }
}
/*-------------------------------------------------------------*/
void swap_two_nums(int* num1_ptr, int* num2_ptr)
{
    int temp;
    temp = *num1_ptr;
    *num1_ptr = *num2_ptr;
    *num2_ptr = temp;
}
