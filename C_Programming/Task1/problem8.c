

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float a, b, c;
	float  root1_real, root1_complex, root2_real, root2_complex;
	int check;
	printf("Enter values of a, b, c of quadratic (aX^2 + bX + c): ");
	fflush(stdout);
	scanf("%f%f%f", &a, &b, &c);

	check = ((b*b) - (4 * a * c)) >= 0;

	switch(check)
	{
		case 1:
			root1_real = (-b + sqrt((b*b) - (4 * a * c))) / 2 * a;
			root2_real = (-b - sqrt((b*b) - (4 * a * c))) / 2 * a;
			printf("real roots are %.2f, %.2f", root1_real, root2_real);
			break;
		case 0:
			root1_real = -b  / (2 * a);
			root1_complex = (sqrt(abs((b*b) - (4 * a * c)))) / (2 * a);
			root2_real = -b  / (2 * a);
			root2_complex = (sqrt(abs((b*b) - (4 * a * c)))) / (2 * a);
			printf("complex roots are %.2f+%.2fi, %.2f-%.2fi", root1_real, root1_complex, root2_real, root2_complex);
			break;
	}



	return 0;
}




