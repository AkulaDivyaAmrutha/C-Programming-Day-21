/* C program to print table*/
#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		printf("%d x %d = %d\n",n,i,n*i);
}
