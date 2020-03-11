#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do{
        height = get_int("Height: ");
    }while(height > 8 || height < 1);
     
    for (int i = 0; i < height; i++){
        for(int j = 0; j < height - 1 - i; j++){
            printf(" ");
        }
        for(int k = -1; k < i; k++){
            printf("#");
        }
        printf("\n");
    }
    
}
