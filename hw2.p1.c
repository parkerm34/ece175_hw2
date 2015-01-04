/*Parker Mathewson
	January 23, 2012
	This program is homework 1, and is meant to show the skills 
learned in class about doing basic arithmetic within a C program.*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	int x;
	float y;
	float sum;
	float product;
	float quotient;
	float remainder;
	float expression;
	
	printf("What is the x value?\n");
	scanf("%d",&x);


	fflush(stdout);
	printf("What is your y value?\n");
	scanf("%f.2",&y);		


	sum=x+y;
	product=x*y;
	quotient=x/y;
	remainder=x % 3;
	expression=((3*x)+(9*(y/5)));	/*these are all the equations 
asked for*/

	printf("The sum of your values is %.2f.\n",sum);
	printf("The product between your values is %.2f.\n",product);
	printf("The quotient of x and y is %2.f.\n",quotient);
	printf("The remainder of the quotient of x/3 is %.2f.\n",remainder);
	printf("The equation (3*x)+(9*(y/5)) equals %.2f.\n",expression);

	return(0);
}
