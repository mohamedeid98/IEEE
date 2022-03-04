
#include <stdio.h>
#include <stdlib.h>

int squar_root(int number)
{
	int start = 0 , end = number;
	int ans, mid;
	while (start <= end) {


		mid = (start + end) / 2;



		if (mid * mid == number) {
			ans = mid;
			break;
		}



		if (mid * mid < number) {

			ans=start;


			start = mid + 1;
		}



		else {
			end = mid - 1;
		}
	}
	return ans;
}


int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("result = %d", squar_root(num));

	return 0;
}
