#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/


    static int maxTemp;
    static int minTemp;
void take_temp(int temp)
{
    static int flag = 0;
    if(flag == 0)
    {
        maxTemp = temp;
        minTemp = temp;
        flag = 1;
    }
    if(flag == 1)
    {
        if(temp > maxTemp)
        {
            maxTemp = temp;
        }
        if(temp < minTemp)
        {
            minTemp = temp;
        }
    }

}


int get_max_temp(void)
{
    return maxTemp;
}

int get_min_temp(void)
{
    return minTemp;
}
