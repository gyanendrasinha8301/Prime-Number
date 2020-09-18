#include<stdio.h>
int prime (int n, int a);
//Recursion Function
int prime(int n, int a)
{   if (a == 1)
    {return 1;}
    else
    {   if (n % a == 0)
       {return 0;}
       else
       {return prime(n, a - 1);}
    }
}

int main()
{   int n;
    int m;
    printf("Enter the number: ");
    scanf("%d",&n);
    m = prime(n,n/2);
    if (m==1)
        {printf("%d is a Prime Number.",n);}
    else
        {printf("%d is not a Prime Number.",n);}
    return 0;
}
