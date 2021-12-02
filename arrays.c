#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/


void array_print(int *arr, int arr_size)
{
    int iter;
    printf("Array indexes are: ");
    for(iter = 0; iter < arr_size; iter++)
    {
        printf("%d ", arr[iter]);
    }
    printf("\n");
}
/*-------------------------------------------------------------*/


int array_search_index(int *arr, int arr_size, int number)
{
    int iter;
    for(iter = 0; iter < arr_size; iter++)
    {
        if(arr[iter] == number)
        {
            return iter;
        }
    }
    return -1;
}

/*-------------------------------------------------------------*/

int array_remove_prime(int *arr, int arr_size)
{
    int iter, counter = 0;
    for(iter = 0; iter < arr_size; iter++)
    {
        if(isPrime(arr[iter])) // if it's prime
        {
            arr[iter] = 0;
            counter++;
        }
    }
    return counter;
}

/*-------------------------------------------------------------*/

int array_check_longest_seq(int *arr, int arr_size)
{
    int iter, counter = 1, maximum = 0;
    for(iter = 0; iter < arr_size; iter++)
    {
        if((arr[iter+1]) - arr[iter] == 1)
        {
            counter++;
            if(counter > maximum)
            {
                maximum = counter;
            }
        }
        else
        {
            counter = 0;
        }
        return maximum;
    }
}

/*-------------------------------------------------------------*/

int array_most_repeated(int* arr, int arr_size, int* element_ptr)
{
    int iter, maximum = 0, counter;
    for(iter = 0; iter < arr_size; iter++)
    {
        counter = 0;
        for(int iter2 = iter+1; iter2 < arr_size; iter2++)
        {
            if(arr[iter] == arr[iter2])
            {
                counter++;
            }
            if(counter > maximum)
            {
                maximum = counter;
                *element_ptr = arr[iter];
            }
        }
    }
    return maximum;
}

/*-------------------------------------------------------------*/
int array_scan_append(int* arr)
{
    int iter, arr_size;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    for(iter = 0; iter < arr_size; iter++)
    {
        printf("Enter element %d: ", iter);
        scanf("%d", (arr + iter)); // &arr[iter]
    }
    return arr_size;
}

/*-------------------------------------------------------------*/
int array_return_max_min(int* arr, int arr_size, int* maximum_ptr, int* minimum_ptr) // returns max, min, and their addresses
{
    int iter;
    *minimum_ptr = arr[0];
    for(iter = 0; iter < arr_size; iter++)
    {

        if(arr[iter] > *maximum_ptr)
        {
            *maximum_ptr = arr[iter];
        }
        if(arr[iter] < *minimum_ptr)
        {
            *minimum_ptr = arr[iter];
        }
    }
    return *maximum_ptr;

    /* TO BE WRITTEN IN MAIN
    int arr[6] = {12,9,3,4,6,7};

    int maximum = 0, minimum = 0;
    int result;
    result = array_return_max_min(arr, 6, &maximum, &minimum);
    printf("The maximum number = %d\n", maximum);
    printf("The minimum number = %d\n", minimum);
    printf("The address of maximum number = %#p\n", &maximum);
    printf("The address of maximum number = %#p", &minimum);
    */
}

/*-------------------------------------------------------------*/
int array_return_blocked_nums(int* arr, int firstNumber, int secondNumber)
{
    int max, min;
    if(firstNumber > secondNumber)
    {
        max = firstNumber;
        min = secondNumber;
    }
    else if(secondNumber > firstNumber)
    {
        max = secondNumber;
        min = firstNumber;
    }
    int iter, indexIterator;
    for(iter = (min+1), indexIterator = 0; iter < (max-1) ; iter++, indexIterator++)
    {
        arr[indexIterator] = iter;
    }
    return arr;
}

/*-------------------------------------------------------------*/
int array_find_most_repeated_number(int* arr, int arr_size)
{
    int iter, iter2, maximum = 0;
    for(iter = 0; iter < arr_size; iter++)
    {
        int counter = 0;
        for(iter2 = iter; iter2<arr_size; iter2++)
        {
            if(arr[iter] == arr[iter2])
            {
                counter++;
            }
        }
        if(counter > maximum)
        {
            maximum = counter;
        }
        if(iter == arr_size-1) // If u reached the last element
        {
            return arr[iter];
        }
    }
}

/*-------------------------------------------------------------*/
void array_reverse_numbers(int* arr, int* arr_reversed, int arr_size)
{
    int iter, counter;
    for(iter = arr_size-1, counter = 0; iter >= 0; iter--, counter++)
    {
        arr_reversed[counter] = arr[iter];
    }
}

/*-------------------------------------------------------------*/
void array_swap(int* arr1, int*arr2, int* tempArr, int arr1_size,int arr2_size)
{
    for(int iter =0; iter <arr1_size; iter++)
    {
        tempArr[iter] = arr1[iter];
        arr1[iter] = arr2[iter];
        arr2[iter] = tempArr[iter];
    }
}

/*-------------------------------------------------------------*/
int array_count_longest_consecutive(int* arr, int arr_size, int number)
{
    int iter, counter = 0, maximum = 0;
    for(iter = 0; iter < arr_size; iter++)
    {
        if(arr[iter] == number)
        {
            counter++;
        }
        if(counter > maximum)
        {
            maximum = counter;
        }
        if(arr[iter+1] != number)
        {
            counter = 0;
        }
    }
    return maximum;
}

/*-------------------------------------------------------------*/
int array_find_longest_consecutive(int* arr, int arr_size)
{
    int iter, longest_con, number;
    for(iter = 0; iter < arr_size; iter++)
    {
        longest_con = array_count_longest_consecutive(arr, 5, arr[iter]);
    }
    number = array_find_most_repeated_number(arr, 5);
    printf("The count of the longest consecutive number is: %d\n", longest_con);
    return number;
}


/*-------------------------------------------------------------*/
void array_merge(int* arr1, int*arr2, int* merged_arr, int arr1_size,int arr2_size, int merged_size)
{
    int iter, evenIter = 0, oddIter = 1;
    for(iter = 0; iter < merged_size; iter++)
    {
        merged_arr[evenIter] = arr1[iter];
        merged_arr[oddIter] = arr2[iter];
        evenIter += 2;
        oddIter += 2;
    }
}
/*-------------------------------------------------------------*/
int array_remove_repeated_indexes(int* arr, int arr_size, int* new_arr)
{
    int iter, iter2, newArrIter = 0, flag ;
    for(iter = 0; iter < arr_size; iter++)
    {
        flag = 0;
        for(iter2 = 0; iter2 < iter; iter2++)
        {
            if(arr[iter] == arr[iter2])
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            new_arr[newArrIter] = arr[iter];
            newArrIter++;
        }
    }
    return newArrIter;
}

/*-------------------------------------------------------------*/
void array_swap_after_2zeros(int* arr)
{
    int iter, firsZero, secondZero, flag = 0;
    for(iter = 0; flag < 2 ; iter++)
    {
        if((arr[iter] == 0) && (flag == 0))
        {
            firsZero = iter; // Hold the position of he first zero
            flag = 1;
        }
        else if((arr[iter] == 0) && (flag == 1))
        {
            secondZero = iter; // Hold the position of he second zero
            flag = 2;
        }
    }
    swap_two_nums(&arr[firsZero+1], &arr[secondZero+1]);
    swap_two_nums(arr+firsZero+2, arr+secondZero+2);
    swap_two_nums(&arr[firsZero+3], &arr[secondZero+3]);
}

/*-------------------------------------------------------------*/
int array_find_biggest_diff_between_2nums(int* arr, int arr_size)
{
    int minimum = 0, maximum = 0, difference;
    int max = array_return_max_min(arr, arr_size, &maximum, &minimum);
    difference = maximum - minimum;

    return difference;
}
/*-------------------------------------------------------------*/
char array_find_most_repeated_char_number(char* arr, char arr_size)
{
    int mostRep;
    mostRep = array_find_most_repeated_number(arr, arr_size);
    return (char) mostRep;
}
/*-------------------------------------------------------------*/
int array_zigzag(int* arr1, int* arr2, int arr1_size, int arr2_size, int* new_arr)
{
    int size = arr1_size+arr2_size;
    int iter, iter2 = 0;
    for(iter = 0; iter<size; iter += 2)
    {
        new_arr[iter] = arr1[iter2];
        new_arr[iter+1] = arr2[iter2];
        iter2++;
    }
    return size;
}
/*-------------------------------------------------------------*/
void array_swap_pointers(int** ptr1, int** ptr2)
{
    int* temp_ptr;
    temp_ptr = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp_ptr;
}

/*-------------------------------------------------------------*/
int fibonacci(int index)
{
    if(index <= 1)
        return index;
    return (fibonacci(index - 1) + fibonacci(index - 2));
}

/*-------------------------------------------------------------*/
int array_most_repeated_mono_nums(int* arr, int size, int* element_ptr)
{
    int count[10] = {0};
    int iter, element, max = 0;
    for(iter = 0; iter<size; iter++)
    {
        count[arr[iter]]++;
    }
    for(iter = 0; iter<size; iter++)
    {
        if(count[iter] > max)
        {
            max = count[iter];
            element = iter;
        }
    }
    *element_ptr = element;
    return max;
}
/*-------------------------------------------------------------*/
int* array_dynamic_scan(int* size_ptr)
{
    int iter, size;
    printf("enter the number of elements: ");
    scanf("%d", &size);
    int* arr = (void*) malloc(size*(sizeof(int)));
    if(arr == 0)
    {
        printf("No space in heap");
        return;
    }
    else
    {
        for(iter = 0; iter < size; iter++)
        {
            printf("Enter element %d: ", iter);
            scanf("%d", (arr + iter)); // &arr[iter]
        }
    }
    *size_ptr = size;
    return arr;
}

/*-------------------------------------------------------------*/
char array_first_repeated_char(char* str)
{
    char freq_arr[256] = {0};
    for(int iter = 0; str[iter]; iter++)
    {
        freq_arr[str[iter]]++; // increase the position of the str[iter]
        if(freq_arr[str[iter]] == 2)
        {
            return str[iter];
        }
    }
    return -1;
    /* main
    char arr[] = "ahmedmyswema";
    char res = array_first_repeated_char(arr);
    printf("The most repeated char is: %c \n", res);
    */
}

/*-------------------------------------------------------------*/
int array_most_repeated_num_freq(int* arr, int size, int* element_ptr)
{
    int freqSize, maxIndex = arr[0], minIndex = arr[0];

    for(int iter = 0; iter < size; iter++)
    {
        if(arr[iter] > maxIndex)
        {
            maxIndex = arr[iter];
        }
        if(arr[iter] < minIndex)
        {
            minIndex = arr[iter];
        }
    }
    freqSize = maxIndex - minIndex + 1;
    int* freq_counter = (int*)calloc(freqSize, sizeof(int));
    if(freq_counter == 0)
    {
        printf("There's no space in the Heap!!.. Exit!");
        return 0;
    }
    else
    {
        for(int iter = 0; iter < size; iter++)
        {
            freq_counter[arr[iter] - minIndex]++;
        }
        int mostRepeated = 0;
        for(int iter = 0; iter < freqSize; iter++)
        {
            if(freq_counter[iter] > mostRepeated)
            {
                mostRepeated = freq_counter[iter];
                *element_ptr = iter + minIndex;
            }
        }
        free(freq_counter);
        return mostRepeated;
    }
    /*
    int arr[5] = {5,2,5,5,6,4};
    int num, res;
    res = array_most_repeated_num_freq(arr, 5, &num);
    printf("The most repeated number is %d, repeated %d times\n", num, res);
    */
}
/*-------------------------------------------------------------*/
int array_binary_search(int* arr, int size, int num)
{
    int first = 0, last = size - 1, middle;
    while(first <= last)
    {
        middle = (first + last) / 2;
        if(arr[middle] == num)
        {
            return middle;
        }
        else if(arr[middle] > num) // it's on the left
        {
            last = middle - 1;
        }
        else // it's on the right
        {
            first = middle + 1;
        }
    }
    return -1;
}

/*-------------------------------------------------------------*/
/*the advantage is: is the best if the data is too large*/
void array_selectionSort(int* arr, int size)
{
    int max, lastIndex = size-1;
    for(int iter = 0; iter < size; iter++)
    {
        max = 0;
        for(int innerIter = 0; innerIter < size-iter; innerIter++)
        {
            if(arr[max] < arr[innerIter])
            {
                max = innerIter;
            }
        }
        swap_two_nums(&arr[max], &arr[lastIndex]);
        lastIndex--;
    }
}
/*-------------------------------------------------------------*/
int array_find_missed_number(int* arr, int size)
{
    int freqArr[100] = {0};
    for(int iter = 0; iter<=size; iter++)
    {
        freqArr[arr[iter]]++;
    }
    for(int iter = 0; iter<=size; iter++)
    {
        if(freqArr[iter] == 0)
        {
            return iter;
        }
    }
}

/*-------------------------------------------------------------*/
int array_find_repeated_number(int* arr, int size)
{
    int freqArr[101] = {0};
    for(int iter = 0; iter<=size; iter++)
    {
        freqArr[arr[iter]]++;
    }
    for(int iter = 0; iter<=size; iter++)
    {
        if(freqArr[iter] == 2)
        {
            return arr[iter];
        }
    }
}

/*-------------------------------------------------------------*/
// in an array of numbers repeated 2 times
int array_find_non_repeated_number(int* arr, int size)
{
    int iter, innerIter;
    for(iter = 0; iter<size; iter++)
    {
        for(innerIter = iter; innerIter<size - iter; innerIter++)
        {
            if(arr[iter] ^ arr[innerIter])
            {
                return arr[iter];
            }
        }
    }
}


/*-------------------------------------------------------------*/
void array_bubble_sort(int* arr, int size)
{
    int sortFlag;
    for(int iter = 0; iter < size; iter++)
    {
        sortFlag = 1;
        for(int compIter = 0; compIter < size-1-iter; compIter++)
        {
            if(arr[compIter] > arr[compIter+1])
            {
                swap_two_nums(&arr[compIter], &arr[compIter+1]);
                sortFlag = 0;
            }
        }
        if(1 == sortFlag)
        {
            return FALSE;
        }
    }
}

/*-------------------------------------------------------------*/
void array_counting_sort(int* arr, int size)
{
    int max = arr[0], min = arr[0], freqCountSize ;
    for(int iter = 0; iter < size; iter++)
    {
        if(arr[iter] > max)
        {
            max = arr[iter];
        }
        if(arr[iter] < min)
        {
            min = arr[iter];
        }
        freqCountSize = max - min + 1;
    }
    int* freqCount = (int*) calloc(freqCountSize, sizeof(int));
    if(freqCount == 0)
    {
        return;
    }
    for(int iter = 0; iter < freqCountSize; iter++)
    {
        freqCount[arr[iter] - min]++;
    }
    int iterJ = 0;
    for(int iter = 0; iter < freqCountSize; iter++)
    {
        while(freqCount[iterJ])
        {
            arr[iterJ] = iterJ + min;
            freqCount[iterJ]--;
            iterJ++;
        }
    }
}

/*-------------------------------------------------------------*/
void array_matrix_print(int arr[][5], int line, int col)
{
    printf("Here's the matrix buddy : \n");
    for(int iter_1 = 0; iter_1 < line; iter_1++)
    {
        for(int iter_2 = 0; iter_2 < col; iter_2++)
        {
            printf("%9d", arr[iter_1][iter_2]);
        }
        printf("\n");
    }
    /*
    IN MAIN
    int arr[5][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {9,8,7,6,5},
        {4,2,1,3,5},
        {8,7,9,2,5},
    };

    array_matrix_print(arr, 5, 5);
    */
}

/*-------------------------------------------------------------*/
void matrix_zigzag_print(int arr[][20], int row, int col)
{
    int iter_1, iter_2;
    for(iter_1 = 0; iter_1 < row; iter_1++)
    {
        if(!(iter_1 & 1))
        {
            for( iter_2 = 0; iter_2 < col; iter_2++)
            {
                printf("%2d ", arr[iter_1][iter_2]);
            }
            printf("\n");
        }
        else
        {
            for(iter_2 = col-1; iter_2 >= 0; iter_2--)
            {
                printf("%2d ", arr[iter_1][iter_2]);
            }
            printf("\n");
        }
    }
    /*
    IN MAIN
    int arr[][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {9,8,7,6,5},
        {4,2,1,3,5},
        {8,7,9,2,5},
    };

    matrix_zigzag_print(arr, 5, 5);
    */
}

/*-------------------------------------------------------------*/
void matrix_diagonal_sum(int arr[][20], int row, int col)
{
    if(row != col)
    {
        return 0;
    }
    int LeftDiagonalSum = 0, rightDiagonalSum = 0;
    for(int iter_1 = 0; iter_1 < row; iter_1++)
    {
        for(int iter_2 = 0; iter_2 < col; iter_2++)
        {
            if(iter_1 == iter_2)
            {
                LeftDiagonalSum += arr[iter_1][iter_2];
            }
            if(iter_2 == col - iter_1 - 1)
            {
                rightDiagonalSum += arr[iter_1][iter_2];
            }
        }
    }
    printf("Left diagonal sum = %d\n", LeftDiagonalSum);
    printf("right diagonal sum = %d\n", rightDiagonalSum);
    if(LeftDiagonalSum == rightDiagonalSum)
    {
        printf("All clear, OVER");
    }
    else
    {
        printf("Sorry buddy, they're not equal !");
    }
}

/*-------------------------------------------------------------*/
int array_compare(unsigned char* arr1, unsigned char* arr2)
{
    for(int iter = 0; iter < SERIAL_LEN; iter++)
    {
        if(arr1[iter] != arr2[iter])
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*-------------------------------------------------------------*/
int linear_search(unsigned char arr[][SERIAL_LEN], int size, unsigned char* s)
{
    for(int iter = 0; iter < size; iter++)
    {
        if(array_compare(&arr[iter], s))
        {
            return iter;
        }
    }
    return -1;
}


/*-------------------------------------------------------------*/
int** create_puzzle() // returns pointer to array of int
{
    int ** puzzle;
    int i, j;

    int arr[9][9] =
    {
        0, 1, 9,    0, 0, 2,    0, 0, 0,
        4, 7, 0,    6, 9, 0,    0, 0, 1,
        0, 0, 0,    4, 0, 2,    0, 9, 0,

        8, 9, 4,    5, 0, 7,    0, 0, 0,
        0, 0, 0,    0, 0, 0,    0, 0, 0,
        0, 0, 0,    2, 0, 1,    9, 5, 8,

        0, 5, 0,    0, 0, 6,    0, 0, 0,
        6, 0, 0,    0, 2, 8,    0, 7, 9,
        0, 0, 0,    1, 0, 0,    8, 6, 0
    };

    puzzle = (int**)malloc(sizeof(int* ) * 9); // 9 arrays (pointers to arrays)
    for(i = 0; i < 9; i++)
    {
        puzzle[i] = (int*)malloc(sizeof(int) * 9); // the inner arrays
        // copy the array
        for(j = 0; j < 9; j++)
        {
            puzzle[i][j] = arr[i][j];
        }
    }
    return puzzle;
}

/*-------------------------------------------------------------*/
void print_puzzle(int** puzzle)
{
    printf("-------------------------------\n");
    for(int iter_1 = 0; iter_1 < 9; iter_1++)
    {
        printf("|");
        for(int iter_2 = 0; iter_2 < 9; iter_2++)
        {
            printf("% d ", puzzle[iter_1][iter_2]);
            if(((iter_2 + 1) % 3 )== 0)
            {
                printf("|");
            }
        }
        printf("\n");
        if(((iter_1 + 1) % 3) == 0)
        {
            printf("-------------------------------\n");
        }
    }
}



