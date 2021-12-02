#ifndef STACK_H
#define STACK_H

#include "header.h"

#define STACK_SIZE  10
#define Q_SIZE  10
#define NULL_PTR  ((void*) 0)

typedef enum
{
    STACK_EMPTY = 0,
    STACK_FULL = 0,
    DONE = 1
}stack_status;

typedef enum
{
    Q_EMPTY = 0,
    Q_FULL = 0,
    Q_DONE = 1
}queue_status;

typedef struct
{
    int dataArray;
    int sp;
    int stackSize;
}stack_t;

/*functions prototypes*/
stack_status stack_push(stack_t st_ptr, int data);
stack_status stack_pop(int* data);
stack_t stack_create(int size);
void stack_delete(stack_t* st_ptr);

queue_status inqueue(int data);
queue_status dequeue(int *pdata);

#endif // HEADER_H
