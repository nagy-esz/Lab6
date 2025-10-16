/*
Write a program, that reads two strings from the user, each contains max. 30 valid characters.

    Declare two character arrays of 31 call them str1 and str2
    Use scanf() with %s to read into the string
    Use the following snippet to write out all characters and codes in the array:

extend the program with the following:

    Determine and print out the length of str1 (strlen)
    Compare str1 and str2, print out the result! (strcmp)
    Copy the content of str1 to str 2 (strcpy), compare them again!
    Concatenate str1 and str2 (strcat). Modify the sizes to avoid overindexing!
    Print the concatenated string!
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[31], str2[31];
    scanf("%s", str1);
    scanf("%s", str2);
    // read from user here
    for (int i = 0; i < strlen(str1); i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str1[i], str1[i]);
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str2[i], str2[i]);
    }
    printf("The legnth of str1: %d\n", (int)strlen(str1));

    printf("comparing the two strings: %d\n", strcmp(str1, str2));

    strcpy(str1, str2);
    printf("comparing the two strings: %d\n", strcmp(str1, str2));

    char str3[62];
    strcat(str3, str1);
    strcat (str3, str2);
    
    return 0;
}
