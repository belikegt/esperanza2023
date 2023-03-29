#include<stdio.h>  
  
long factorial(int n)  
{  
  if (n == 1)  
    return 1;  
  else  
    return(n + factorial(n+2));  
}  
   
void main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%f", &number);   
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
}  


//output
//Enter a number: 5
//Factorial of 5 is 125


