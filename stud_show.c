#include<stdio.h>
#include"header.h"
void stud_show(sll *ptr)
{
if(ptr==0)
{
printf("No Records Found\n");
return;
}
printf("**********LIST OF DATA***********\n");
printf("------------------------------------\n");
printf("Rollno\tName\tMarks\n");
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
ptr=ptr->next;
}
printf("------------------------------------\n");
}
