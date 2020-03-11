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
    for(int l = 0; l <= i; l++){
            printf("#");
}
    printf("  ");
    for(int k = 0; k <= i; k++){
            printf("#");
}
    printf("\n");
}   
}
