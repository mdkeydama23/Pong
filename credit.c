#include<stdio.h>
#include<cs50.h>

bool checksum(long creditCard);

int main(void)
{
    long creditNumber;
    creditNumber = get_long("Enter credit card number: ");
    
    // Checks whether creditNumber is a viable candidate for an American Express card. Then checks the validity of the number.
    if ((creditNumber > 339999999999999 && creditNumber < 350000000000000) || (creditNumber >369999999999999 && creditNumber < 380000000000000))
    {
        if (checksum(creditNumber))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
   
   // Checks whether creditNumber is a viable candidate for a MasterCard card. Then checks the validity of the number.
   else if (creditNumber < 55999999999999999 && creditNumber > 5099999999999999)
    {
        if (checksum(creditNumber))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    
    // Checks whether creditNumber is a viable candidate for a Visa card. Then checks the validity of the number.
    else if ((creditNumber > 3999999999999 && creditNumber < 5000000000000) || (creditNumber >3999999999999999 && creditNumber < 5000000000000000))
    {
        if (checksum(creditNumber))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    
    else 
      {
          printf("INVALID\n");
      }
}


// Function that implements Luhn's algorithm.
bool checksum(long creditCard)
{
    int throwAway;
    int sum1 = 0;
    int sum2 = 0;
    int sumTotal = 0;
    
    while (creditCard)
    {
        throwAway = ((creditCard % 100) / 10) * 2;
        sum2 += creditCard % 10;
        while (throwAway)
        {
            sum1 += throwAway % 10;
            throwAway /= 10;
        }
        creditCard /= 100;
    }
    sumTotal = sum1 +sum2;
    if (sumTotal % 10 == 0)
    {
        return true;
    }
    return false;
}
