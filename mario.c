#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: "); // displays the prompt asking for height
    }

    while (height < 1 || height > 8); // This should accept only 1-8 forn the height
    // this loop is for the rows
    for (int row = 0; row < height; row++)
    {
        // prints the spaces
        for (int space = 0; space < (height - row - 1); space++)
        {
            printf(" ");
        }
        // prints the hashes
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }
        // new line after each row
        printf("\n");
    }

    return 0;
}
