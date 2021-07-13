
//  main.c
//  prime
//
//  Created by sharanya shetty on 31/03/21.
//

#include<stdio.h>
int main()
{
    int n,i=2,prime;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n==2)
    {
        printf("%d is a prime number",n);
    }
    
    do{
        if(n%i==0)
        {
            prime=0;
            break;
        }
       i++; 
    }while(i<n);
        if(prime==0)
        {
            printf("%d is  not a prime number",n);
        }
        
        else{
            printf("%d is  a prime number",n);
        }
        
    
}
