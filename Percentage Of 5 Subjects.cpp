#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,S;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	S = (a+b+c+d+e)*100/500;
	printf("Percentage is %d%%",S);
	return 0; 
}
