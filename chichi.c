#include<stdio.h>

int main()
{
   int num;
   scanf("%d", &num);
   for(int i=1; i<=num; i++){
      if(i%2==0){
         printf("0");
      }else{
         printf("1");
      }if(i<num){
         printf(",");
      }
   }
   return 0;
}
