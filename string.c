#include "header.h"
/*
 * @Author: Ahmed Sedeek
 *
*/

void string_print(char *str)
{
    int iter;
    //printf("The string is: ");
    for(iter = 0; str[iter] != 0; iter++)
    {
        printf("%c", str[iter]);
    }
    printf("\n");
}
/*-------------------------------------------------------------*/
int string_len(char *str)
{
    int iter;
    for(iter = 0; str[iter]; iter++);
    return iter;
}
/*-------------------------------------------------------------*/
void string_reverse(char *str)
{
    int len = string_len(str);
    int iter, lastIndex = len-1 ;
    char temp;
    for(iter = 0; iter<len/2; iter++)
    {
        temp = str[iter];
        str[iter] = str[lastIndex];
        str[lastIndex] = temp;
        lastIndex--;
    }
}

/*-------------------------------------------------------------*/
int string_match(char* str1, char* str2)
{
    int iter;
    for(iter = 0; str1[iter] || str2[iter]; iter++)
    {
        if(str1[iter] !=  str2[iter])
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*-------------------------------------------------------------*/
int string_match_ignore_case(char* str1, char* str2)
{
    int iter;
    for(iter = 0; str1[iter] || str2[iter]; iter++)
    {
        if(str1[iter] !=  str2[iter])
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*-------------------------------------------------------------*/
int string_match_ignore_case_usingSize(char* str1, char* str2, int size)
{
    int iter;
    for(iter = 0; iter < size; iter++)
    {
        if(str1[iter] !=  str2[iter])
        {
            return FALSE;
        }
    }
    return TRUE;
}

/*-------------------------------------------------------------*/

int string_longest_word(char* str, char* word)
{
    char iter, wordIter;
    int index, counter = 0, longest = 0;
    for(iter = 0; str[iter] ; iter++)
    {
        counter += 1;
        if(str[iter] == ' ')
        {
            counter = 0;
        }
        if(counter > longest)
        {
            longest = counter;
            index = iter;
        }
    }
    index = index - longest+1;
    for(wordIter = 0; wordIter<longest; wordIter++)
    {
        word[wordIter] = str[index];
        index++;
    }
    word[wordIter] = 0;
}
/*-------------------------------------------------------------*/
void string_scan(char* str)
{
    //printf("Enter your phrase: ");
    int iter = 0;
    scanf("%c", &str[iter]);
    do
    {
        iter++;
        scanf("%c", &str[iter]);
    }
    while(str[iter] != '\n');
    str[iter] = 0;
}

/*-------------------------------------------------------------*/
int int_to_string(int number, char* str)//2315
{
    int flag = 0;
    if(number == 0)
    {
        str[0] = '0';
        str[1] = 0;
        return;
    }
    if(number < 0)
    {
        flag = 1;
        number *= -1;
    }
    int iter, iter2;
    for(iter = 0; number > 0; iter++)
    {
        str[iter] = (number % 10) + '0';
        number /= 10;
    }
    if(flag == 1)
    {
        str[iter] = '-';
        iter++;
    }
    str[iter] = 0;

    string_reverse(str);
    return iter; // size of the string
}

/*-------------------------------------------------------------*/
int string_to_int(char* str) // 2135
{
    int iter, number = 0;
    for(iter = 0; str[iter]; iter++)
    {
        number = number * 10 + (str[iter] - '0');
    }
    return number;
}

/*-------------------------------------------------------------*/
int string_to_int_using_size(char* str, int size) // 2135
{
    int iter, number = 0;
    for(iter = 0; iter < size; iter++)
    {
        number = number * 10 + (str[iter] - '0');
    }
    return number;
}
/*-------------------------------------------------------------*/
int string_compare(char* str1, char* str2)
{
    int iter;
    for(iter = 0; str1[iter] || str2[iter]; iter++)
    {
        if(str1[iter] != str2[iter])
        {
            return FALSE;
        }
    }
    return TRUE;
}
/*-------------------------------------------------------------*/
void string_swap(char* str1, char* str2)
{
    int iter, temp;
    for(iter = 0; str1[iter] && str2[iter]; iter++)
    {
        temp = str1[iter];
        str1[iter] = str2[iter];
        str2[iter] = temp;
    }
}
/*-------------------------------------------------------------*/
int string_mirror_check(char* str)
{
    int len = string_len(str);
    int iter, lastIndex = len-1 ;
    for(iter = 0; iter<len/2; iter++)
    {
        if(str[iter] != str[lastIndex])
        {
            return FALSE;
        }
        lastIndex--;
    }
    return TRUE;
}

/*-------------------------------------------------------------*/
void string_reverse_words_in_sentence(char* str)
{
    int iter, wordLastIndex, counter = 0 ;
    string_reverse(str);
    for(iter = 0; str[iter]; iter++)
    {
        if(str[iter] == ' ')
        {
            string_reverse_by_size(&str[iter - counter], counter);
            counter = 0;
        }
        else // No space
        {
            counter++;
        }
    }
    string_reverse_by_size(&str[iter - counter], counter);
}

/*-------------------------------------------------------------*/
void string_swap_letters(char* c1, char* c2)
{
    char temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
/*-------------------------------------------------------------*/
int string_count_spaces(char* str)
{
    int iter, counter = 0;
    for(iter = 0; str[iter]; iter++)
    {
        if(str[iter] == ' ')
        {
            counter++;
        }
    }
    return counter;
}
/*-------------------------------------------------------------*/
void string_convert_float_to_string(float number, char* convertedStr)
{
    int realNum = number;
    int remNum = (number - realNum) * 1000;
    int str_size = int_to_string(number, convertedStr);
    convertedStr[str_size] = '.';
    convertedStr[str_size + 1] = (remNum % 1000) / 100 + '0';
    convertedStr[str_size + 2] = (remNum % 100) / 10 + '0';
    convertedStr[str_size + 3] = (remNum % 10) / 1 + '0';

}
/*-------------------------------------------------------------*/
void string_reverse_by_size(char *str, int size)
{
    int iter, lastIndex = size-1 ;
    char temp;
    for(iter = 0; iter<size/2; iter++)
    {
        temp = str[iter];
        str[iter] = str[lastIndex];
        str[lastIndex] = temp;
        lastIndex--;
    }
}

/*-------------------------------------------------------------*/
char* string_tryangle_type(char *str)
{
    int iter, flag = 0;
    char l1 = 0, l2 = 0, l3 = 0;
    for(iter = 0; str[iter]; iter++)
    {
        if(str[iter] == ' ')
        {
            flag++;
        }
        else // No space
        {
            if(flag == 0)
            {
                l1 = (l1 * 10) + (str[iter] - '0');
            }
            else if(flag == 1)
            {
                l2 = (l2 * 10) + (str[iter] - '0');
            }
            else if(flag == 2)
            {
                l3 = (l3 * 10) + (str[iter] - '0');
            }
        }
    }
    if(l1 + l2 > l3 && l1 + l3 > l2 && l3 + l2 > l1)
    {
        if(l1 == l2 && l1 == l3)
        {
            return "Equilateral triangle";
        }
        else if(l1 != l2 && l1 != l3)
        {
            return "Scalene triangle";
        }
        else
        {
            return "Isosceles triangle";
        }
    }
    else
    {
        return "Not triangle";
    }

}

/*-------------------------------------------------------------*/


char* string_edit_name(char *main_str, char *find, char *replace)
{
    int mainStrLen = string_len(main_str), findLen = string_len(main_str), replaceLen = string_len(replace);
    int index = -1;

    //Matching the find word with the word to be replaced in the main string
    int iter;
    for(iter = 0; main_str[iter]; iter++)
    {
        if(main_str[iter] == find[0]) // If u meat the first letter in the find word matched with the first letter of the main string
        {
            if(string_match_ignore_case_usingSize(&main_str[iter], find, findLen))
            {
                index = iter; // Hold the first letter of the found word
            }

        }
    }
    if(index == -1) // No matching found, return the main sting
    {
        return main_str;
    }
    else // Match found
    {
        char* new_str = (char*) malloc( (mainStrLen - findLen + replaceLen)*sizeof(char) );
        int firstIter = 0, lastIter = 0, replaceIter = 0;
        //store the first half of he new string, till the first letter of the found word
        for(lastIter = 0; lastIter < index; lastIter++)
        {
            new_str[lastIter] = main_str[firstIter];
            firstIter++; // the index of the first letter after the last letter of the replaced word in the new string
        }

        //Store the replace word in the new string
        for( ; replaceIter < replaceLen; replaceIter++)
        {
            new_str[lastIter] = replace[replaceIter];
            firstIter++; // the index of the first letter of the word after replaced str
        }

        firstIter = firstIter + findLen; // to skip the find word
        for( ; main_str[firstIter]; firstIter++)
        {
            new_str[lastIter] = main_str[firstIter];
            lastIter++;
        }
        new_str[lastIter] = 0;
        return new_str;
    }
}


/*-------------------------------------------------------------*/
/*
void string_multiple_word_print(char *str)
{
    char word[];
    int nums[];
    int numsCounter = 0, wordIter = 0;
    for(int iter = 0; str[iter]; iter++)
    {
        // Number found
        if(str[iter+1]>'0' && str[iter+1]<='9')
        {

        }
        // if it's a letter
        if((str[iter]<'0' || str[iter]>'9') && str[iter] != ',')
        {
            word[wordIter] = str[iter];
            wordIter++;
        }
    }

}
*/
/*-------------------------------------------------------------*/

void string_array_of_string_print(char **str, int size)
{
    int i;
    for(i = 0; i<size; i++)
    {
        string_print(str[i]);
    }
}

/*-------------------------------------------------------------*/

int array_of_string_search(char **str, char* word, int size)
{
    int iter;
    for(iter = 0; iter < size; iter++)
    {
        if(string_compare(str[iter], word));
        {
            return iter;
        }
    }
    return -1;
}

/*-------------------------------------------------------------*/

void arrayOfString_bubble_sort(int** arr, int size)
{
    int sortFlag;
    for(int iter = 0; iter < size; iter++)
    {
        sortFlag = 1;
        for(int compIter = 0; compIter < size-1-iter; compIter++)
        {
            if(1 == string_compare_arrange_letters(  &arr[compIter], &arr[compIter+1]))
            {
                array_swap_pointers(&arr[compIter], &arr[compIter+1]);
                sortFlag = 0;
            }
        }
        if(1 == sortFlag)
        {
            break;
        }
    }
}

/*-------------------------------------------------------------*/

int string_compare_arrange_letters(char* str1, char* str2)
{
    int iter;
    for(iter = 0; str1[iter] || str2[iter]; iter++)
    {
        if(str1[iter] > str2[iter])
        {
            return 1;
        }
        else if(str1[iter] < str2[iter])
        {
            return -1;
        }
    }
    return 0;
}
/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/

void string_array_of_array_print(char (*str) [10]/*char str [][10]*/, int size)
{
    int i;
    for(i = 0; i<size; i++)
    {
        string_print(str[i]);
    }
}

/*-------------------------------------------------------------*/

void page_search(char str [][10], int line, char letter, int *i_ptr, int *j_ptr)
{
    for(int iter_1 = 0; iter_1< line; iter_1++)
    {
        for(int iter_2 = 0; str[iter_1][iter_2]; iter_2++)
        {
            if(letter == str[iter_1][iter_2])
            {
                *i_ptr = iter_1;
                *j_ptr = iter_2;
                return;
            }
        }
    }
    /*
    IN MAIN
    char arr[][10] = {"ahmed", "mohamed", "geselegla", "mohqwrd"};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int line, col;
    char letter;

    printf("Enter the letter to search for: ");
    scanf("%c", &letter);
    page_search(arr, 4, letter, &line, &col);
    printf("The letter %c is in line %d col %d ", letter, line+1, col+1);

    */
}
/*-------------------------------------------------------------*/
void star_set(char arr[][30],int row,int col,int star_i,int star_j)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==star_i&&j==star_j)
            {
                arr[i][j]='*';
            }
            else if(j==star_j&&i<star_i)
            {
               arr[i][j]='V';
            }
            else if(j==star_j&&i>star_i)
            {
               arr[i][j]='^';
            }
            else if(j<star_j&&i==star_i)
            {
               arr[i][j]='>';
            }
            else if(j>star_j&&i==star_i)
            {
               arr[i][j]='<';
            }
            else if(j<star_j&&i<star_i)
            {
               arr[i][j]='A';
            }
            else if(j<star_j&&i>star_i)
            {
               arr[i][j]='B';
            }
            else if(j>star_j&&i<star_i)
            {
               arr[i][j]='C';
            }
            else if(j>star_j&&i>star_i)
            {
               arr[i][j]='D';
            }

        }
    }
}
/*-------------------------------------------------------------*/

void star_print(char arr[][30],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",arr[i][j]);

        }
        printf("\n");
    }
}
/*-------------------------------------------------------------*/
void star_find(char arr[][30],int row,int col,int* pstar_i,int* pstar_j) // linear search
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]=='*')
            {
                *pstar_i=i;
                *pstar_j=j;
                return;
            }
        }
    }
}
/*-------------------------------------------------------------*/
void star_find_binary_search(char arr[][30], int row, int col, int* pstar_i, int* pstar_j) // binary search
{
    int row_middle, row_first = 0, row_last = row - 1;
    int col_middle, col_first = 0, col_last = col - 1;
    while(row_first <= row_last && col_first <= col_last)
    {
        row_middle = (row_first + row_last) / 2;
        col_middle = (col_first + col_last) / 2;
        if(arr[row_middle][col_middle] == '*')
        {
            *pstar_i = row_middle;
            *pstar_j = col_middle;
            return;
        }
        else if(arr[row_middle][col_middle] == 'V')
        {
            row_first = row_middle + 1;
        }
        else if(arr[row_middle][col_middle] == '<')
        {
            col_last = col_middle - 1;
        }
        else if(arr[row_middle][col_middle] == '>')
        {
            col_first = col_middle + 1;
        }
        else if(arr[row_middle][col_middle] == '^')
        {
            row_last = row_middle - 1;
        }
        else if(arr[row_middle][col_middle] == 'A')
        {
            row_first = row_middle + 1;
            col_first = col_middle + 1;
        }
        else if(arr[row_middle][col_middle] == 'B')
        {
            row_last = row_middle - 1;
            col_first = col_middle + 1;
        }
        else if(arr[row_middle][col_middle] == 'C')
        {
            row_first = row_middle + 1;
            col_last = col_middle - 1;
        }
        else if(arr[row_middle][col_middle] == 'D')
        {
            row_last = col_middle - 1;
        }
    }
    /*
    IN MAIN

    char arr[30][30] ;
    int x, y;
    star_set(arr, 30,30, 10, 10);
    star_print(arr, 30, 30);

    star_find_binary_search(arr, 30, 30, &x, &y);

    printf("\n=====================================\n");
    printf("The star is in position %d in x-axis, and %d in y-axis", x, y);
    printf("\n=====================================\n");

    */
}










