#include<stdio.h>
main()
{
	int a,b;
	printf("enter two numbers\n");
  scanf("%d %d",&a ,&b);
	printf("before swapping numbers a=%d and b=%d\n",a,b);
	b=b-a;
	a=a+b;
	b=a-b;
	printf("after swapping numbers a=%d and b=%d",a,b);
}
