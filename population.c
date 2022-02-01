#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // TODO: Prompt for start size
    int start_population;
    // to prompt user again if invalid integet is provided
    do
    {
        start_population =  get_int("Start size: ");
    }
    while (start_population < 9);
    
    // TODO: Prompt for end size
    int end_population;
    // to prompt user again if invalid integet is provided
    do
    {
        end_population = get_int("End size: ");
    }
    while (end_population < start_population);
    // TODO: Calculate number of years until we reach threshold
    // if end and start population are equal
    if (start_population == end_population)
    {
        printf("Years: 0\n");
    }
    // if end and start population aren't equal
    else
    {
        int years_passed = 0;
    
        do
        {
            start_population = start_population + (start_population / 3) - (start_population / 4);
            years_passed++;
        }
        while (start_population < end_population);
        // to print number of years to reach the end population
        printf("Years: %i\n", years_passed);
    }

}