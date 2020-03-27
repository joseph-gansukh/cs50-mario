#include <cs50.h>
#include <stdio.h>

void render_hashes(int n);
void render_spaces(int n);

int main(void)
{
    int height;

    // Promps user for the height of the pyramid
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Renders the pyramid
    for (int i = 0; i < height; i++)
    {
        render_spaces(height - i - 1);
        render_hashes(i + 1);
        printf("  ");
        render_hashes(i + 1);
        printf("\n");
    }

}

// Renders n number of hashes 
void render_hashes(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

// Renders n number of spaces
void render_spaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
