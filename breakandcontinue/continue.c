#include <stdio.h>
int main()
{

   int i, num, sum=0;
   for(i=1;i<=5;++i)
   {
   printf("Enter", i);
   scanf("%d", &num);

   if(num<0)
   {
   continue;
   }
   sum+=num;
   }
   printf("sub: %d", sum);

return 0;
}
