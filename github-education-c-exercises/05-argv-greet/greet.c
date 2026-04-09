#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check if the user provided exactly one argument (their name)
    if (argc == 2)
    {
        // argv[0] is the program name, argv[1] is the first word provided
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        // Default message if no name is provided
        printf("hello, world\n");
    }
    
    return 0;
}
