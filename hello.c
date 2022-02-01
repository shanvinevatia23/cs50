#include <stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompts user for name
    string name = get_string("What is your name?\n");
    // Says hello to that user
    printf("Hello, %s\n", name);
}