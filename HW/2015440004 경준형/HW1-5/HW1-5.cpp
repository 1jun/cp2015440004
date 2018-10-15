#include <stdio.h>

int main(void)
{
	char* str[10];
	printf("Choose one of the following.\n");
	printf("apple\norange\nbanana\npeach\n");

	printf("enter your choice here : ");
	scanf_s("%s",str,10);
	printf("Your choice is %s.\n",str);

	return 0;
}