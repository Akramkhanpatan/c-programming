#include<stdio.h>
int main()
{
	int num,i;
	printf("enter any number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",num,i,num*i);
	}
	return 0;
}
