#include<stdio.h>

int main()
{
   int num;
   scanf("%d", &num);
   int i;
   for(i=1; i<=num; i++){
      printf("%d. ", i);
      printf("I will never do it again\n");
   }
   printf("After Loop Terminates i is %d\n", i);
   return 0;
}

