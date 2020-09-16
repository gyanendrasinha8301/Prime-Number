#include<stdio.h>

//The code for checking for prime number

int prime (int a)
    {   int s=0;
        for (int i=2; i<=(a/2); i++)
        {if (a%i == 0)
            {s=1;}
         else
            {s=0;}
        }
     return s;
    }

int main()
{   int n;
    int s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = prime(n);
    if (s==0)
        {printf("%d is a Prime Number.",n);}
    else
        {printf("%d is not a Prime Number.",n);}
    return 0;
}
