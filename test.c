#include <stdio.h>
#include <math.h>

int limit (float input);

int main(void)
{
    int a;
    printf("start here\n");

    int array[3][3]= {{1,2,3},{4,5,6},{7,8,9}};



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i",array[i+1][j+1]);
        }
    }

    /*
    a = (int)floor(3/2.0);
    printf("a = %i\n",a);

    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    */

    //printf("return %i",limit(sqrt(pow(200,2) + pow(200,2))));

    printf("\nEnd here\n");

    return 0;
}

int limit (float input)
{
    if (input > 255)
    {
        return 255;
    }
    else return (int) input;
}