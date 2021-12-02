//#include "stack.h"
///*
// * @Author: Ahmed Sedeek
// *
//*/
//
///*stack*/
//static int stack[STACK_SIZE];
//static int sp = 0;
//
///*queue*/
//static int Q[Q_SIZE];
//static int in = 0;
//static int out = 0;
//
//static int c_flag = 0;
//
///*stack*/
//stack_status stack_pop(int* data)
//{
//    stack_status status = DONE;
//
//    if(sp == 0)
//    {
//        status = STACK_EMPTY;
//    }
//    else
//    {
//        sp--;
//        *data = stack[sp];
//    }
//    return status;
//}
//
//stack_status stack_push(stack_t st_ptr, int data)
//{
//    if(st_ptr == NULL_PTR)
//    {
//        return;
//    }
//    stack_status status = DONE;
//
//    if(st_ptr->sp == st_ptr->stackSize)
//    {
//        status = STACK_FULL;
//    }
//    else
//    {
//        st_ptr->dataArray[st_ptr->sp] = data;
//        (st_ptr->sp)++;
//        status = DONE;
//    }
//    return status;
//}
//
//stack_t stack_create(int size)
//{
//    stack_t* localStack =malloc(size * sizeof(stack_t));
//    localStack->dataArray = malloc(size * sizeof(int));
//    localStack->sp = 0;
//    localStack->stackSize = size;
//    return localStack;
//}
//
//void stack_delete(stack_t* st_ptr)
//{
//    free(st_ptr->dataArray);
//    free(st_ptr);
//}
//
//
///*queue*/
//queue_status inqueue(int data)
//{
//    queue_status status;
//    if(in == out && c_flag == 1)
//    {
//        status = Q_FULL
//    }
//    else
//    {
//        Q[in] = data;
//        in++;
//        status = Q_DONE;
//    }
//    if(in == Q_SIZE)
//    {
//        in = 0;
//        c_flag = 1;
//    }
//    return status;
//}
//
//queue_status dequeue(int *pdata)
//{
//    if(out == Q_SIZE)
//    {
//        out = 0;
//        c_flag = 0;
//    }
//    if(in == out && c_flag == 0)
//    {
//        return Q_EMPTY;
//    }
//    else
//    {
//        *pdata = Q[out] ;
//        out++;
//        return Q_DONE;
//    }
//}
//
