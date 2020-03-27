#include <cs50.h>
#include <stdio.h>

void print_spaces(int n);
void print_hashes(int n);

int main(void)
{
    int height;

    // Prompts user for desired height of the pyramid
    
    do
    {
        height = get_int("Height: ");
    }
    while (1 > height || height > 8);

    // Renders the pyramid

    for (int i = 1; i < height + 1; i++)
    {
        print_spaces(height - i);
        print_hashes(i);
        printf("\n");
    }

}

// Function that renders hashes (#)

void print_hashes(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

// Function that renders spaces (" ")

void print_spaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
