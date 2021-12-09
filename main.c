#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/

/*-------------------- Macro declarations --------------------*/
#define  PIN_MASK_VAL	      1U
#define  PORT_MASK_VALUE      0XFF

/*---------------------- Function Macros ----------------------*/
/*Pins Utils*/
#define  SET_BIT(REGISTER, BIT_POS)              (REGISTER |= (PIN_MASK_VAL<<BIT_POS))
#define  CLEAR_BIT(REGISTER, BIT_POS)            (REGISTER &= ~(PIN_MASK_VAL<<BIT_POS))
#define  TOGGLE_BIT(REGISTER, BIT_POS)           (REGISTER ^= (PIN_MASK_VAL<<BIT_POS))
#define  READ_BIT(REGISTER, BIT_POS)             ((REGISTER >> BIT_POS) & PIN_MASK_VAL)
#define  WRITE_BIT(REGISTER, BIT_POS, VALUE)     ((REGISTER &= ~(PIN_MASK_VAL<<BIT_POS))|(VALUE << BIT_POS))

/*Port Utils*/
#define SET_PORT(REGISTER)                 (REGISTER |= PORT_MASK_VALUE)
#define CLEAR_PORT(REGISTER)               (REGISTER &= ~PORT_MASK_VALUE)
#define TOGGLE_PORT(REGISTER)              (REGISTER ^= PORT_MASK_VALUE)
#define READ_PORT(REGISTER)                (REGISTER &= PORT_MASK_VALUE)
#define WRITE_PORT(REGISTER, VALUE)        ((REGISTER &= ~PORT_MASK_VALUE)|VALUE)


#include <math.h>
unsigned int (*ptr) (void) = NULL;
unsigned int (*arrptr[2]) (void) = {NULL, NULL}; // array of pointers to functions

unsigned int *addone(void);
unsigned int *retArr(void);

int getAdd(int num1, int num2);
int getSub(int num1, int num2);
int perform_arithmatic_operation(int num1, int num2, int (*funPtr) (int num1, int num2)); // callBack

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
