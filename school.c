#include "school.h"


//void student_initialize(student_t* school)
//{
//    int option;
//    printf("\n.. Select your option among numbers ..\n");
//
//    printf("\n============== Options ==============\n");
//
//    printf("\n0 for adding student.\n");
//    printf("1 for searching for a student.\n");
//    printf("2 for sorting by name.\n");
//    printf("3 for printing all students info.\n");
//    printf("4 for deleting student.\n");
//    printf("5 for inserting a student after sorting.\n");
//    printf("6 for printing the student by ID.\n");
//    printf("7 for editing student's info.\n");
//    printf("8 for calling the student.\n");
//
//    printf("\nYour option is: ");
//
//    scanf("%d", &option);
//
//    switch (option)
//    {
//    case adding:
//        student_add(school, STUDENTS);
//        break;
//
//    case searching:
//        student_search(school, STUDENTS);
//        break;
//
//    case sorting:
//
//        break;
//
//    case printing:
//        student_printAll(school, STUDENTS);
//        break;
//
//    case deleting:
//
//        break;
//
//    case inserting:
//
//        break;
//    case printByID:
//
//        break;
//
//    case editing:
//        break;
//    case calling:
//
//        break;
//
//    default: {/*Do Nothing*/}
//    }
//}

student_t* student_add(int id, char grade, char* name)
{
    student_t* new_student = malloc(sizeof(student_t));
    if(NULLPTR == new_student)
    {
        return 0;
    }

    new_student->id = id;
    new_student->name = name;
    new_student->grade = grade;
    new_student->next = NULLPTR;

    return new_student;


}

void student_addToTheStart(student_t** head_ptr, int id, char grade, char* name)
{
    student_t* new_student = student_add(id, grade, name);
    new_student->next = *head_ptr;
    *head_ptr = new_student;
}

/*adding students to the end of the list*/
void student_addToTheEnd(student_t** head_ptr, int id, char grade, char* name)
{
    student_t* new_student = student_add(id, grade, name);
    student_t* current = *head_ptr;

    if(* head_ptr == 0) // if the list is empty
    {
        *head_ptr = new_student;
        return;
    }
    while(NULL != current->next)
    {
        current = current->next;
    }
    current->next = new_student;
}

/*printing students*/
void student_print(student_t* head)
{
    student_t* current = head;
    while(current != 0)
    {
        printf("Student ID: %d\n", current->id);
        printf("Student Name: ");
        string_print(current->name);
        printf("Student grade: %c\n", current->grade);
        current = current->next;
        printf("\n==========================\n");
    }
    printf("\n---------- That's all ----------\n");
}

status_t student_editName(student_t* head, char* oldName, char* newName)
{
    int flag = dataNotFound;
    student_t* current = head;
    if(head == 0)
    {
        return LIST_EMPTY;
    }
    while(current != 0)
    {
        if( string_compare(current->name, oldName) )
        {
            current->name = newName;
            flag = dataFound;
        }
        current = current->next;
    }
    return flag;
}



void student_remove(student_t** head_ptr, int oldId)
{
    if(head_ptr == 0)
    {
        return LIST_EMPTY;
    }
    student_t* current = *head_ptr;
    student_t* temp ;

    if(current->id == oldId)
    {
        temp = current;
        *head_ptr = current->next;
        free(temp);
        return;
    }
    while(current->next != 0)
    {
        if(current->next->id == oldId)
        {
            temp = current->next;
            current->next = current->next->next;
            free(temp);
            return;
        }
        current = current->next;
    }
}

void student_insertAfter(student_t** head_ptr, int pervID, int id, char grade, char* name)
{
    student_t* new_student = student_add(id, grade, name);
    if(head_ptr == 0) // if the list is empty
    {
        return ;
    }

    student_t* current = *head_ptr;
    student_t* temp ;

    if( ((*head_ptr)->id) == pervID) // if the id is the first
    {
        temp = (*head_ptr)->next;
        (*head_ptr)->next = new_student->next;
        new_student->next = temp;
        free(temp);
        return ;
    }

    while(current->next != 0) // if it's not the first, and not the last
    {
        if(current->next->id == pervID)
        {
            temp = current->next;
            current->next = new_student;
            new_student->next = temp;
            free(temp);
            return ;
        }
        current = current->next;
    }
    if(current->next == 0)
    {
        new_student->next = 0;
        current->next = new_student;
        return;
    }
}

