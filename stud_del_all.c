#include<stdio.h>
#include"header.h"
void stud_del_all(sll ** ptr)
{
	sll *del=*ptr;
	if(*ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("ALL DATA DELETED SUCCESSFULLY\n");
}
