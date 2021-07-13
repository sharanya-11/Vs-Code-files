#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {
        
        case 10:
        case 9:
         printf("the grade is A");
         break;
         case 8:
         printf("the grade is B");
         break;
         case 7:
         printf("the grade is C");
         break;
         case 6:
         printf("the grade is D");
         break;
         default:
         printf("grade is \"failed\"");
         break;

    }

}