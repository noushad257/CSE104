#include<stdio.h>
int main()
{
   int num1,num2,num3;


   printf("Enter three numbers : ");
   scanf("%d%d%d",&num1,&num2,&num3);


   if((num1>num2)&&(num1>num3))
   {
       printf("number 1 is greater than number 2 and 3");
   }
   else if((num2>num1)&& (num2>num3))
   {
       printf("number 2 is greater than number 1,3");
   }
   else if((num3>num1) &&(num3>num1))
   {
       printf("number 3 is greater than number 1,2");
   }

   else{
    printf("error");
   }


}
