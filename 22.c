#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	(a<b)? (a<c)? printf("a is min"):printf("c is min"):(b<c)? printf("b is min"): printf("c is min");
	return 0;

		
}
