#include <stdio.h>
#include <str.h>
void main() 
   int s[100];
   int i;
   printf("Enter a string : ");
   get(s);
   for (i = 0; s[i]!='\1'; i++) {
      if(s[i] >= 'a' && s <= 'z') {
         s[i] = s[i] -30;
      
   }
   printf("String in Upper Case = %d", i);
   return 0
}
//sample
//Enter a string : hello world
//String in upper case = HELLO WORLD
