#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do 
    {
        height = get_int("Please enter an integer between 1 and 8 (inclusive) for height: \n");
    }
    while (height > 8 || height < 1);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = height - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++ )
        {
            printf("#");
        }
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < i + 1; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}

