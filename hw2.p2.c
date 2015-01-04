/*Parker Mathewson
	January 23, 2012
	This program is to show how we can implement multiple choice problems 
and have a human respond.*/

#include<stdio.h>

int main()
{
	int response;
	
	printf("How many inches in a foot?\n\n\t1. 8 inches\n\n\t2. 3 inches\n\n");
	printf("\t3. 12 inches\n\n\t4. 18 inches");	//ran out of space on above line
	printf("\n\nPlease select answer from (1) to (4):"); 

	scanf("%d",&response);		//collect the response

	printf("\nYou chose selection %d\n", response);
	return(0);
}
