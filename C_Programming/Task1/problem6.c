

#include <stdio.h>
#include <stdlib.h>


char num_words[][9] = {"one", "two", "three", "four", "five", "six" , "seven", "eight", "nine"};

void num2word(int N)
{
	int dig;


	    if (N == 0) {
	        return;
	    }

	    dig = N % 10;


	    num2word(N / 10);

	    printf("%s ", num_words[dig-1]);
}

int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);
	num2word(num);
	return 0;
}
