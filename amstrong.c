/*Program to find whether a number is amstrong or not
Author:Jiya Mathai
Date:13/02/2019
*/

#include<stdio.h>
void main()
{
	int am,reverse=0,remainder,a;
	printf("enter the number:");
	scanf("%d",&am);
	a= number;
	while(number>0)
		{
		remainder=number%10;
		reverse=reverse+remainder*remainder*remainder;
		number=number/10;
		}
	if(reverse==a)
		printf("%d is amstrong number",a);
	else
		printf("%d is not amstrong number",a);
}

		
