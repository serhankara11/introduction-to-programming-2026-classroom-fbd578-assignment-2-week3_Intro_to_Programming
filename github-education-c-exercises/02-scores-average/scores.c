#include <cs50.h>
#include <stdio.h>

// Number of scores to be averaged
const int N = 3;

// Function prototype to calculate average
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // Get scores from the user
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print the calculated average
    printf("Average: %.2f\n", average(N, scores));
}

// Function to compute average
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    
    // Convert sum to float for precise division
    return (float) sum / length;
}
