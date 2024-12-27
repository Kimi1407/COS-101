/*This program will ask thr user for an input which will be used to carry out an arithmetic equation*/
#include <stdio.h>
int main()
{
	/*declare all the variables you'll use in the program*/
	int a;
	int p;
	/*This will be displayed on the screen*/
	printf("Input a number: ");
	/*scanf is what allows the user to input the number*/ 
	scanf("%d" , &a);
	p = 2*a;
	printf("The result is  %d", p);
}