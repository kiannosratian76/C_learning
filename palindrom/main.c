#include <stdio.h>

char string_1[] = "abcdcba";
char string_2[] = "abccba";
char string_3[] = "welcome to my world";
/*palindrome func*/
void palindrom(char arr[], int lenght){};

// next func

int numbers_1[] = {1, 2, 5, 4, 8, 6, 9, 8, 1};
int numbers_2[] = {100, 200};
int numbers_3[] = {10, -10, 2, 300};

int increas_number(int arr[], int length)
{
    int sum_value = 0;
    for (int i = 0; i < length; i++)
    {
        sum_value = sum_value + arr[i];
    };
    return sum_value;
}

int main()
{
    printf("numbers_1 increas = %d\n", increas_number(numbers_1, 9));
    printf("\n");
    printf("numbers_2 increas = %d\n", increas_number(numbers_2, 2));
    printf("\n");
    printf("numbers_3 increas = %d\n", increas_number(numbers_3, 4));
    printf("\n");
}