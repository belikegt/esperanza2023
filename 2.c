#include<stdio.h>

#include<math.h>

int rev(int n)

{
    
	int sum=0,rem;
    
	while(n!=0);
	{
        
		rem=n%10;
        
		sum=sum+10*rem; 
       
		n=n/10;
    
	}
    
	return sum;

int main()

{
    
int num,sqr,m,n,k;

printf("enter any number");
    
scan("%d",&num);
sqr=num*num;
    
m=rev(num);
 
n=rev(sqr);

k=n*n;
    
if(m==k)
        
	printf("its an adam number");
    
else
        
	printf("its not an adam number");


}

