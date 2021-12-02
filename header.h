#ifndef HEADER_H
#define HEADER_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "student.h"
#include "stack.h"
#include "school.h"
/*
 * @Author: Ahmed Sedeek
 *
*/

#define TRUE   1
#define FALSE  0

#define SERIAL_LEN  5
#define MAX_RECORD  2

#define NULLPTR   ((void*)0)


/*-------------- DataType Definitions --------------*/


/*-------------- Functions Prototypes --------------*/

/*-------------- ( arrays ) --------------*/
void array_print(int *arr, int arr_size);
int array_search_index(int *arr, int arr_size, int number);
int array_check_longest_seq(int *arr, int arr_size);
int array_binary_search(int* arr, int size, int num);
int array_most_repeated(int* arr, int arr_size, int* element);
int array_remove_prime(int *arr, int arr_size);
int array_scan_append(int* arr);
int array_return_max_min(int* arr, int arr_size, int* maximum_ptr, int* minimum_ptr); // returns max, min, and their addresses
int array_return_blocked_nums(int* arr, int firstNumber, int secondNumber);
int array_find_most_repeated_number(int* arr, int arr_size);
void array_reverse_numbers(int* arr, int* arr_reversed, int arr_size);
int array_count_longest_consecutive(int* arr, int arr_size, int number);
void array_swap(int* arr1, int*arr2, int* tempArr, int arr1_size,int arr2_size);
int array_find_longest_consecutive(int* arr, int arr_size);
void array_merge(int* arr1, int*arr2, int* merged_arr, int arr1_size,int arr2_size, int merged_size);
int array_remove_repeated_indexes(int* arr, int arr_size, int* new_arr);
void array_swap_after_2zeros(int* arr);
int array_find_biggest_diff_between_2nums(int* arr, int arr_size);
char array_find_most_repeated_char_number(char* arr, char arr_size);
int array_zigzag(int* arr1, int* arr2, int arr1_size, int arr2_size, int* new_arr);
void array_swap_pointers(int** ptr1, int** ptr2);
int fibonacci(int index);
int array_most_repeated_mono_nums(int* arr, int size, int* element_ptr);
int* array_dynamic_scan(int* size_ptr);
char array_first_repeated_char(char* str);
int array_most_repeated_num_freq(int* arr, int size, int* element_ptr);
int array_find_missed_number(int* arr, int size);
int array_find_repeated_number(int* arr, int size);
int array_find_non_repeated_number(int* arr, int size);
int array_compare(unsigned char* arr1, unsigned char* arr2);
int linear_search(unsigned char [][SERIAL_LEN], int size, unsigned char* s);


/*sudoku*/
void print_puzzle(int** puzzle);
int** create_puzzle();



/*sorting*/
void array_bubble_sort(int* arr, int size);
void array_selectionSort(int* arr, int size);
void array_counting_sort(int* arr, int size);



/*-------------- math --------------*/
int isPrime(int number);
int isPowerOf(int base, int number);
void swap_two_nums(int* num1_ptr, int* num2_ptr);

/*-------------- string --------------*/
void string_print(char *str);
int string_len(char *str);
void string_reverse(char *str);
int string_match(char* str1, char* str2);
int string_longest_word(char* str, char* word);
void string_scan(char* str);
int int_to_string(int number, char* str);
int string_to_int(char* str);
int string_compare(char* str1, char* str2);
void string_swap(char* str1, char* str2);
int string_mirror_check(char* str);
void string_reverse_words_in_sentence(char* str);
void string_swap_letters(char* c1, char* c2);
int string_count_spaces(char* str);
void string_convert_float_to_string(float number, char* convertedStr);
void string_reverse_by_size(char *str, int size);
char* string_tryangle_type(char *str);
int string_match_ignore_case_usingSize(char* str1, char* str2, int size);
char* string_edit_name(char *main_str, char *find, char *replace);
int string_to_int_using_size(char* str, int size);
void string_multiple_word_print(char **str, int size);
void string_array_of_string_print(char **str, int size);
int array_of_string_search(char **str, char* word, int size);
int string_compare_arrange_letters(char* str1, char* str2);
void arrayOfString_bubble_sort(int** arr, int size);
void string_array_of_array_print(char (*str) [10], int size);
void page_search(char str [][10], int line, char letter, int *i_ptr, int *j_ptr);
void matrix_zigzag_print(int arr[][20], int row, int col);
void matrix_diagonal_sum(int arr[][20], int row, int col);
void star_set(char arr[][30],int row,int col,int star_i,int star_j);
void star_find(char arr[][30],int row,int col,int* pstar_i,int* pstar_j);
void star_print(char arr[][30],int row,int col);
void star_find_binary_search(char arr[][30], int row, int col, int* pstar_i, int* pstar_j); // binary search

/*-------------- ( sudoku ) --------------*/



#endif // HEADER_H


