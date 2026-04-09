#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get string from user
    string s = get_string("Before: ");
    printf("After: ");
   // Loop through the string, one character at a time
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Convert current character to uppercase and print it
        printf("%c", toupper(s[i]));
    }
    
    printf("\n");
}
