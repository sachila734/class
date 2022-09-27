#include <stdio.h>
int main()
{
	int A;
	int num, sub=0;
	for(A=1; A<=5; ++A)
	{
		printf("Enter: ", A);
		scanf("%d", &num);
		if(num<0)
		{
			break;
		}
		sub-=num;
	}
	printf("ans:%d", sub);
return 0;
}
