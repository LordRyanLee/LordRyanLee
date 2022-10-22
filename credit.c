#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_num;
    long num;
    int sum1, sum2;
    int digit;

    card_num = get_long("Number: ");

    num = card_num;
    while (num >= 10)
    {
      num = num / 10;
      if (((num % 10) * 2) > 9)
      {
         sum1 = sum1 + (((num % 10) * 2) / 10) + (((num % 10) * 2) % 10);
      }
      else
      {
         sum1 = sum1 + (((num % 10) * 2));
      }
      num = num / 10;
    }
    num = card_num;
    while (num >= 1)
    {
      sum2 = sum2 + (num % 10);
      // printf("sum2 =%i\n",sum2);
      num = num / 100;
    }
    num = card_num;
    digit = 2;
    while (num >= 100)
    {
      num = num / 10;
      digit++;
    }

    // printf("sum1 = %i",sum1);
    // printf("sum2 = %i",sum2);
    // printf("digit = %i",digit);

    if (((sum1 + sum2) % 10) != 0)
    {
    printf("INVALID\n");
    return 0;
    }
    if ((num == 34 || num == 37) && (digit == 15))
    {
      printf("AMEX\n");
    }
    else if ((num > 50 && num < 56) && (digit == 16))
    {
      printf("AMASTERCARD\n");
    }
    else if ((num > 39 && num < 50) && (digit == 13 || digit == 16))
    {
      printf("VISA\n");
    }
    else
    {
       printf("INVALID\n");
    }

}
