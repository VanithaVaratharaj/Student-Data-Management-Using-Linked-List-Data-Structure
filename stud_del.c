#include"header.h"
void stud_del(sll **ptr)
{
	int c=0;
	int rollno;
	char name[20];
	if(*ptr==0)
	{
		printf("No Records Found\n");
		return;
	}
	char op;
	printf("R/r :delete the rollno\n n/N :delete the name\n");
	printf("Enter the choice: ");
	scanf(" %c", &op);
	switch(op)
	{
		case 'R':
		case 'r':
			printf("Enter the rollno: ");
			scanf(" %d",&rollno);
			sll*del=*ptr, *prev;
			while(del)
			{
				if(rollno==del->rollno)
				{
					if(del==*ptr)
						*ptr=del->next;
					else
						prev->next=del->next;
					free(del);
					printf("DELETED SUCCESSFULLY\n");
					return;
				}
				prev=del;
				del=del->next;
			}
			break;

		case 'N':
		case 'n':
			printf("Enter the name\n");
			scanf("%s", name);
			del=*ptr;
			while(del)
			{
				if(strcmp(name,del->name)==0)
				c++;
				del=del->next;
			}
			if(c<=1)
			{
				del=*ptr;
				while(del)
				{
					if(strcmp(name,del->name)==0)
					{
						if(del==*ptr)
							*ptr=del->next;
						else
							prev->next=del->next;
						free(del);
						printf("DELETED SUCCESSFULLY\n");
						del=*ptr;
					}
					prev=del;
					del=del->next;
				}
			}
			else if(c>1)
			{
				del=*ptr;
				while(del)
				{
					if(strcmp(name,del->name)==0)
						printf("%d %s %f\n",del->rollno,del->name,del->marks);
					del=del->next;
				}
				printf("Enter the rollno: \n");
				scanf("%d",&rollno);
				del=*ptr;
				while(del)
				{
					if(rollno==del->rollno)
					{
						if(del==*ptr)
							*ptr=del->next;
						else
							prev->next=del->next;
						free(del);
						printf("DELETED SUCCESSFULLY");
						del=*ptr;
					}
					prev=del;
					del=del->next;
				}
			}
			break;
	}
}
