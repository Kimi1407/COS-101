#include <stdio.h>

int main()
{
	/*This is a nested if loop that will greet a user based on the tribe selected*/
	
	char tribe;
     char Yoruba = Y;
	 char Igbo = I;
	 char Hausa = H;
	
	printf("Hello Nigga\n");
	printf("Which tribe are you?\n");
	printf("Type Y for Yoruba, I for Igbo or H for Hausa\n");
	scanf("%c", &tribe);
	
	if(tribe == Y)
	{
		printf("You pepper sniffing child");
	}
	
	else if(tribe == I)
	{
		printf("Monday morning talking about me whlile I'm making money");
	}
	
	else if(tribe == H)
	{
		printf("Alhakbaur 'BOOM'");
	}
	
	
}