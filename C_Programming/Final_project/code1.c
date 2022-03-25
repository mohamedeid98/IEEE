#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print()
{
	printf("###### Welcome to the Election/Voting 2020\n\n");
	printf("1- Cast the vote\n2- Find vote count\n3- Find leading candidate\n4- Exit\n\n");
	printf("Please enter your choice: ");
	fflush(stdout);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


int main()
{
	char temp[15];
	int i=0, x, choice, j, min_idx;
	char nominees[][15] = {"Ahmed", "Omar", "Hassan", "Zaki", "Spoiled Votes"};
	int vote_count[5] = {0};

	print();
	scanf("%d", &x);

	while(x)
	{
		switch(x)
		{
			case 1:
				printf("### Please choose your candidate ###\n\n");
				for(i=0 ; i < 4 ; i++)
					printf("%d- %s\n",i+1, nominees[i]);
				printf("5- None of these\n\n");
				printf("Input your choice (1 - 5): ");
				fflush(stdout);
				scanf("%d", &choice);

				if(choice == 5)
				{
					vote_count[choice-1]++;
					print();
					scanf("%d", &x);
					break;
				}
				else
				{
					vote_count[choice-1]++;
					printf("Thanks for voting !!\n\n");
				}
				print();
				scanf("%d", &x);
				break;
			case 2:
				printf("##### Voting Statistics #####\n\n");
				for(i = 0 ; i < 5 ; i++)
					printf("%s - %d\n", nominees[i], vote_count[i]);
				printf("\n");

				print();
				scanf("%d", &x);
				break;

			case 3:
				for (i = 0; i < 4; i++)
				{
					min_idx = i;
					for (j = i+1; j < 5; j++)
						if (vote_count[j] < vote_count[min_idx])
							min_idx = j;

					swap(&vote_count[min_idx], &vote_count[i]);
					strcpy(temp , nominees[min_idx]);
					strcpy(nominees[min_idx], nominees[i]);
					strcpy(nominees[i], temp);
				}
				printf("##### Leading Candidate #####\n\n");
				if(!strcmp(nominees[4], "Spoiled Votes"))
					printf("%s\n\n", nominees[3]);
				else
					printf("%s\n\n", nominees[4]);
				print();
				scanf("%d", &x);
				break;
			case 4:
			break;
		}
		if(x==4)
			break;


	}

	return 0;
}
