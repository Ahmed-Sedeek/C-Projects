//
//#include "student.h"
//
///*
// * @Author: Ahmed Sedeek
// *
//*/
//
//
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
//
//void student_add(student_t *arr, int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        printf("Enter student %d ID: ", i+1);
//        scanf("%d", &arr[i].id);    // ID
//        printf("Enter student %d grade: ", i+1);
//        fflush(stdin);
//        scanf("%c", &arr[i].grade); // Grade
//        printf("Enter student %d name: ", i+1);
//        string_scan(arr[i].name); // Name
//        printf("\n");
//    }
//    printf("Adding operation is complete..\n");
//}
//
//int student_search(student_t *arr,int size)
//{
//    char nameSearch[16];
//    printf("Enter the name u wanna search: ");
//    string_scan(nameSearch);
//    int i;
//    for(i = 0; i < size; i++)
//    {
//        if(MATCHED == string_match(nameSearch, arr[i].name))
//        {
//            printf("Name is found, and it's ID is %d", arr[i].id);
//        }
//        else
//        {
//            printf("Name is not found");
//        }
//    }
//    return arr[i].id;
//}
//
//void student_sortByName(student_t *arr,int size)
//{
//
//}
//
//void student_printAll(student_t *arr,int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        printf("\n__ Student %d info __\n", i+1);
//        printf("ID: %d\n", arr[i].id);
//        printf("name: %s\n", arr[i].name);
//        printf("grade: %c\n", arr[i].grade);
//        printf("======================\n");
//    }
//}
//
//void student_delete(student_t *arr,int size)
//{
//
//}
//
//void student_insertAfterSort(student_t *arr,int size)
//{
//
//}
//
//void student_printByID(student_t *arr,int size)
//{
//
//}
//
//void student_edit(student_t *arr,int size)
//{
//
//}
//
//void student_call(student_t *arr,int size)
//{
//
//}
//
//
//
//
//void student_print(student_t  s)
//{
//
//    //printf("name: %s\nage: %d\ngrade: %c\n",s.name,s.age,s.grade);
//
//}
//
//void student_printByRef(student_t  *ps)
//{
//
//    //printf("name: %s\nage: %d\ngrade: %c\n",ps->name,ps->age,(*ps).grade);
//
//}
//
//void student_ArrPrint(student_t *arr,int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        printf("name :%s\n", arr[i].name);
//        // printf("age :%d\n", arr[i].age);
//        printf("grade :%c\n", arr[i].grade);
//    }
//
//}
//
//
//
//
//
