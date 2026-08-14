#include"header.h"
void stud_sort(sll * ptr)
{
	int c=0,i,j;
	char op;
	printf("n/N : sort using name\n m/M : sort using mark\n"); 
	printf("Enter your option: ");
	scanf(" %c",&op);
	sll * last=ptr, *p1=ptr,*p2,t;
	if(ptr==0)
	{
		printf("No Records Found\n");
		return;
	}
	while(last)
	{
		c++;
		last=last->next;
	}
	switch(op)
	{       case 'N':
		case 'n':
			for(i=0;i<c;i++)
			{
				p2=p1->next;
				for(j=0;j<c-i-1;j++)
				{
					if(strcmp(p1->name, p2->name)>0)
					{
						t.rollno=p1->rollno;
						p1->rollno=p2->rollno;
						p2->rollno=t.rollno;

						strcpy(t.name, p1->name);
						strcpy(p1->name,p2->name);
						strcpy(p2->name,t.name);

						t.marks=p1->marks;
						p1->marks=p2->marks;
						p2->marks=t.marks;
					}
					p2=p2->next;
				}
				printf(" SORTED SUCCESSFULLY \n");
				break;
                                
                                case 'M':
				case 'm' :
				for(i=0;i<c;i++)
				{
					p2=p1->next;
					for(j=0;j<c-1-i;j++)
					{
						if(p1->marks> p2->marks)
						{
							t.rollno=p1->rollno;
							p1->rollno=p2->rollno;
							p2->rollno=t.rollno;

							strcpy(t.name, p1->name);
							strcpy(p1->name,p2->name);
							strcpy(p2->name,t.name);

							t.marks=p1->marks;
							p1->marks=p2->marks;
							p2->marks=t.marks;
						}
						p2=p2->next;
					}
					p1=p1->next;
				}
				printf(" SORTED SUCCESSFULLY \n");
				break;
			}
	}
}
