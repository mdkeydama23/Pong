// Calculates the minimum amount of coins from which an inputed change can be made.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int change;
    do
    {
        change = (int)((get_float("Change: "))* 100);
    } 
    while(change < 0);
    
    int counter = 0;
   
    // finds no of coins.
    counter += (int) (change / 25);
    counter += (int) ((change % 25) / 10);
    counter += (int) (((change % 25) % 10) / 5);
    counter += (int) ((((change % 25) % 10) % 5) / 1);
    
    printf("%i\n",counter);
}    
