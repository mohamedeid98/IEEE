#include<stdio.h>
#include<stdlib.h>

/* struct contain information of books */
typedef struct info
{
	char book_name[20];
	char publisher_name[20];
	int price;
	struct info* next;
}node;
/* functions prototypes */
void AddBook();
void DisplayBooks();
void DisplayHighPrice();
void DisplayPublishers();

int flag=0;
node* Head=NULL;

void main()
{
	int number;
	
	printf("1.Add Book Information\n");
	printf("2.Display All Books Available\n");
	printf("3.Display Highest Price book\n");
	printf("4.Display List Of Publishers\n");
	printf("5.Exit\n");
	
	while(1)
	{
	printf("Enter one of the above:");
	scanf("%d",&number);
	printf("\n");
	
	switch(number)
	{
		case 1:
		{
			AddBook();
			printf("\n");
			break;
		}
		case 2:
		{
			printf("My books..\n");
			DisplayBooks();
			printf("\n");
			break;
		}
		case 3:
		{
			DisplayHighPrice();
			printf("\n");
			break;
		}
		case 4:
		{
			DisplayPublishers();
			printf("\n");
			break;
		}
		case 5:
		{
			break;
		}
		default:break;
	}
	if(number==5)
		break;   //to Exit from program
	}
}

/* function to add book */
void AddBook()
{
	if(flag==0)
	{
		node* new = (node*)malloc(sizeof(node));
		Head=new;
		new->next=NULL;
		
		printf("Enter book name:");
		scanf("%s",&new->book_name);
		printf("Enter publisher name:");
		scanf("%s",&new->publisher_name);
		printf("Enter price:");
		scanf("%d",&new->price);
		flag=1;
	}
	else
	{
		node* ptr=Head;
		node* new = (node*)malloc(sizeof(node));
		while(ptr->next!=NULL)
			ptr=ptr->next;
		
		ptr->next=new;
		new->next=NULL;
		
		printf("Enter book name:");
		scanf("%s",&new->book_name);
		printf("Enter publisher name:");
		scanf("%s",&new->publisher_name);
		printf("Enter price:");
		scanf("%d",&new->price);
	}
}
/* function to  Display all books available */
void DisplayBooks()
{
	int i=1;
	node* ptr=Head;
	while(ptr!=NULL)
	{
		printf("%d.book name:%s\t",i,ptr->book_name);
		printf("publisher name:%s\t",ptr->publisher_name);
		printf("price:%d\n",ptr->price);
		ptr=ptr->next;
		i++;
	}
	
	
}
/* function to display the highest price book */
void DisplayHighPrice()
{
	node* ptr=Head;
	int max=0;
	while(ptr!=NULL)
	{
		if(ptr->price >= max)
			max=ptr->price;
		ptr=ptr->next;
	}
	printf("Highest price book is:%d\n",max);
}
/* function to Display list of publishers */
void DisplayPublishers()
{
	node* ptr=Head;
	int i=1;
	
	while(ptr!=NULL)
	{
		printf("%d.%s\n",i,ptr->publisher_name);
		ptr=ptr->next;
		i++;
	}
}