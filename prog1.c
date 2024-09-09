#include<stdio.h>
#include<stdlib.h>
struct Day
{
char* dayname;
int date;
char* activity;
};
struct Day* createday()
{
	struct Day*newday=(struct Day*)malloc(sizeof(struct Day));
	newday->dayname = (char*)malloc(sizeof(char));
	newday->activity = (char*)malloc(sizeof(char));
	printf("Enter day name:");
	scanf("%s",newday->dayname);
	printf("Enter date:");
	scanf("%d",&(newday->date));
	printf("Enter activity :");
	scanf(" %[^\n]",newday->activity);
	return newday;
}
void read(struct Day*calender[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter details for day %d:\n",i+1);
		calender[i]=createday();
	}
}
void display(struct Day*calender[],int size)
{
	printf("\nWeek's Activity Details:\n");
	for(int i=0;i<size;i++)
	{
		printf("Day %d:\n",i+1);
		printf("Day Name: %s\n",calender[i]->dayname);
		printf("Date:%d\n",calender[i]->date);
		printf("Activity :%s\n",calender[i]->activity);
		printf("\n");
	}
}
void freememory(struct Day* calender[],int size)
{
	for(int i=0;i<size;i++)
	{
		free(calender[i]->dayname);
		free(calender[i]->activity);
		free(calender[i]);
	}
}
int main()
{
	struct Day*week[7];
	read(week,7);
	display(week,7);
	freememory(week,7);
	return 0;
}
