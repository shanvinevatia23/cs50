#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt for pyramid's height
    int height;
    do
    {
        height = get_int("Enter height of pyramid: ");
    }
    //promt the user again if invalid integer is entered
    while (height < 1 || height > 8);
    
    // Create n rows
    for (int i = 0; i < height; i++)
    {
        // Print " " 
        for (int d = height - 1; d > i; d--)
        {
            printf(" ");
        } 

        // Print '#' (i + 1) times
        for (int hash = -1; hash < i; hash++)
        {
            printf("#");
        } 
        printf("\n");
    }
}