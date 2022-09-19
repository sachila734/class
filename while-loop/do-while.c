#include <stdio.h>
int main()
	//do-while loop
{
	int num,sum=0;
	do
    {
        printf("Enter numbers:");
    scanf("%d",&num);
	sum+=num;
    }
	while(num!=0);
	{
		printf("sum of all no is %d", sum);
	}
	return 0;
}
