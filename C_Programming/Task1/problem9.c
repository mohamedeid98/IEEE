

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct DOB
{
	char month[MAX];
	int day;
	int year;
};

struct data
{
	char name[MAX];
	struct DOB dob;
	char num[MAX];

};


int main()
{
	struct data obj = {"mohamed", {"jan", 1, 2000}, "01142600910"};
	printf("Name	: %s\n", obj.name);
	printf("DOB	: %s, %d, %d\n", obj.dob.month, obj.dob.day, obj.dob.year);
	printf("Mobile  : %s", obj.num);





	return 0;

}
