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


#define X 0xFF
//00011011
//00010011
//00001000
#include <math.h>


int main(void)
{
    /* Define temporary variables */
    double value;
    double i, f;

    /* Assign the value we will calculate the modf of */
    value = 1.7;

    /* Calculate the modf of the value returning the fractional and integral parts */
    f = modf(value, &i);

    /* Display the result of the calculation */
    printf("The Integral and Fractional parts of %f are %f and %f\n", value, i, f);
    return 0;
}
