#include<stdio.h>
int main()
{
   int num1,num2;


   printf("Enter two numbers : ");
   scanf("%d%d",&num1,&num2);

     /* //for maximum n1
   if(num1>num2)
   {
       printf("number 1 is greater than number 2");
   }
    if(num2>num1)
   {
       printf("number 2 is greater than number 1");
   }
   if(num1==num2)
   {
       printf("number 1 and number 2 is equal");
   }


*/
if (num1>num2)
{
    printf("num1 greater");
}
else
{
    printf("num2 is greater");
}
  return 0;
}
