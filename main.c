#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/

/*-------------------- Macro declarations --------------------*/
#define  PIN_MASK_VAL	      1U
#define  PORT_MASK_VALUE      0XFF



#include <math.h>
unsigned int (*ptr) (void) = NULL;
unsigned int (*arrptr[2]) (void) = {NULL, NULL}; // array of pointers to functions

unsigned int *addone(void); // Pointer to function
unsigned int *retArr(void); // Pointer to function

int getAdd(int num1, int num2);
int getSub(int num1, int num2);
int perform_arithmatic_operation(int num1,
                                 int num2,
                                 int (*funPtr) (int num1, int num2)
                                 ); // callBack function

int main(void)
{
    int result = perform_arithmatic_operation(3,7,getAdd);
    printf("%d", result);

    return 0;
}

int getAdd(int num1, int num2)
{
    return num1 + num2;
}

int getSub(int num1, int num2)
{
    return num1 - num2;
}

int perform_arithmatic_operation(int num1, int num2, int (*funPtr) (int num1, int num2))
{
    if(NULL == funPtr)
    {
        return 0;
    }
    else if(NULL != funPtr)
    {
        int result = funPtr(num1, num2);
        return result;
    }
}






unsigned int *addone(void)
{
    static unsigned int var = 5;
    var++;
    return &var;
}

unsigned int *retArr(void)
{
    static unsigned int arr[3] = {1,2,3};
    return arr;
}
