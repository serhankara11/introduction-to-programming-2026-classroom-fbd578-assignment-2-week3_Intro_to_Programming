
#include <cs50.h>
#include <stdio.h>

// Function prototype to calculate string length
int string_length(string s);

int main(void)
{
    // Get a name from the user
    string name = get_string("Name: ");
    
    // Calculate the length using our custom function
    int len = string_length(name);
    
    // Print the result
    printf("%i\n", len);
}

// Custom function to count characters until the NUL terminator '\0'
int string_length(string s)
{
    int n = 0;
    
    // Keep counting as long as the current character is not '\0'
    while (s[n] != '\0')
    {
        n++;
    }
    
    return n;
}
