#include <stdio.h>
int main()
{
   int x;
   printf("Enter your marks scored :");
   scanf("%d",&x);
   if(x>=85)
    {
        printf("Grade A");
    }
    else
    {
        if(x>=70)
    {
        printf("Grade B");
    }
    else
    {
        if(x>=55)
    {
        printf("Grade C");
    }
    else
    {
        if(x>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    }
    }
    }
}

