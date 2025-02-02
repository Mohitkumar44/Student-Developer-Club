#include <stdio.h>
int main()
{
   int number, i = 2,prime = 1;
   printf("Enter a number : ");
   scanf("%d", &number);
   while (i < number)
   {
      if(number%i==0){
         prime = 0;
      }
      i++;
   }
   if(prime==0){
      printf("This is not a prime number");
   }
   else{
      printf("this is a prime number");
   }
   
   return 0;
}