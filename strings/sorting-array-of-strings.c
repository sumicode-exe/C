//To sort a given array of strings into lexicographically increasing order or into an order in which
//the string with the lowest length appears first, a sorting function with a flag indicating the type
//of comparison strategy can be written. The disadvantage with doing so is having to rewrite the
//function for every new comparison strategy.

//A better implementation would be to write a sorting function that accepts a pointer to the
//function that compares each pair of strings. Doing this will mean only passing a pointer to the
//sorting function with every new comparison strategy.

//Given an array of strings, you need to implement a string_sort function which sorts the
//strings according to a comparison function, i.e, you need to implement the function :



//The arguments passed to this function are:
//1. an array of strings : arr
//2. length of string array:  count
//3. pointer to the string comparison function: cmp_func


//You also need to implement the following four string string comparision functions:

//1. int lexicograhic_sort(char *, char*) - to sort the stringd lexicographically
//in a non decreasing order

//2. int lexicographic_sort_reverse(char*, char*) - to sort the strings in the lexicographhicalyy 
//non increasing orded

//3. int sort_by_number_of_distinct_characters(char*, char*) - to sort the strings in 
//non-decreasing order of the  number of distinct characters present in them.
//of two strings have the same number of distinct characters present in them, then the
//lexicographically smaller string should appear first.

//4. int sort_by_length(char*, char*) - to sort the strings in non-decreasing
//rder of their lengths. If two strings have the same
//length, then the lexicographically smaller string should appear first.


//CONSTRAINTS:
//1. 1<= No of strings <= 50;
//2. 1<= Total length of all the strings <= 2500
//3. You have to write your own sorting function and you cannot 
//use the inbuilt qsort function 
//4. The strings consists of lower case english alohabets only. 

//OUTPUT
//The locked code-stub will check the logic of your code. The output consists 
//of the strings sorted according to the four comparsion functions in the order 
//mentioned in the problem statement.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}
int lexicographic_sort_reverse(const char* a, const char* b) {
    return -strcmp(a, b);
}

int uniqe_characters(const char *arr){
    int uniqeCharacters = 0;      
    int characters[26] = {0};
    int i = -1;
    while(++i < strlen(arr))
        characters[arr[i]-'a']++;
    for(i = 0 ; i < 26 ; i++)
        if(characters[i])   uniqeCharacters++;
    return uniqeCharacters;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    int cmp = uniqe_characters(a) - uniqe_characters(b);
    if(cmp == 0)      
        cmp = lexicographic_sort(a,b);         
    return cmp;
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a)==strlen(b))
    {
        return strcmp(a,b)>0;
    }
    else {
        return strlen(a) < strlen(b )? -1 : 1;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = i+1; j < len; j++) {
            if (cmp_func(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
