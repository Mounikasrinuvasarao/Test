#include<stdio.h>
int main()
{
 double first, second, temp;
 printf("enter first number: ");
 scanf("%lf", &first);
 printf("enter second number: ");
 scanf("%lf", &second);
 temp=first;
 first=second;
 second=temp;
 printf("\nafter swapping, first number=%.2lf", first);
 printf("\nafter swapping, second number=%.2lf", second);
 return 0;
}
