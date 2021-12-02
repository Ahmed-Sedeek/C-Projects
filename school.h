/*
 * @Author: Ahmed Sedeek
 *
*/
#ifndef SCHOOL_H
#define SCHOOL_H


#include "header.h"

/*-------------- Macro Definitions --------------*/
#define STUDENTS    1
#define MATCHED     1
#define NOT_MATCHED 0
#define NULL        0

#define LIST_EMPTY        -1

/*-------------- DataType Definitions --------------*/
 typedef struct student
{
    int id;
    char grade;
    char *name;
    struct student* next;
}student_t;

 typedef enum
{
    dataNotFound,
    dataFound
}status_t;

typedef enum
{
    adding ,
    searching,
    sorting,
    printing,
    deleting,
    inserting,
    printByID,
    editing,
    calling
}option_t;



/*-------------- Functions Prototypes --------------*/
student_t* student_add(int id, char grade, char* name);
void student_addToTheStart(student_t** head_ptr, int id, char grade, char* name);
void student_addToTheEnd(student_t** head_ptr, int id, char grade, char* name);
void student_print(student_t* head);
status_t student_editName(student_t* head, char* oldName, char* newName);
void student_remove(student_t** head_ptr, int oldId);
void student_insertAfter(student_t** head_ptr, int pervID, int id, char grade, char* name);



#endif // SCHOOL_H
