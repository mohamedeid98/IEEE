
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')  ? printf("It is an alphabet"):printf("It is not alphabet");



	return 0;
}
