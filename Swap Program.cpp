#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Value is %d \n Value is %d",a,b);
	
	int t; 
	t=a;
	a=b;
	b=t;
	
	printf("after swapping b = %d",b);
	printf("after swapping a = %d",a);
	return 0;
	
}
