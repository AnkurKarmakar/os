#include<stdio.h>
int fib(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return(fib(n-1)+fib(n-2));
}
int main()
{
	printf("The fibonacci series \n");
	int n[] = {0,1,0,0,0,0,0,0,0,0,0,0};
	int len = sizeof(n)/sizeof(n[0]);
	for(int i=2;i<len;i++)
		n[i] = fib(i);
	for(int j=0;j<len;j++)
		printf("%d ",n[j]);
	printf("\n");
}
