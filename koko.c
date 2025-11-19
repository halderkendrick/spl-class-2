#include<stdio.h>

int main()
{
   int num;
   scanf("%d", &num);
   for(int i=1; i<=num; i++){
      printf("%d. ", i);
      printf("I will never do it again\n");
   }
   return 0;
}
