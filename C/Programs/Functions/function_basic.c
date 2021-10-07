#include <stdio.h>
#include <stdlib.h>

void display(); // function prototype

int main()
{
    int a;
    printf("Initialising display Funcyion\n");
    display(); // Function Call
    printf("Display Function finished it's work");
    return 0;
}

// Function Definition
void display()
{
    printf("This is display\n");
}