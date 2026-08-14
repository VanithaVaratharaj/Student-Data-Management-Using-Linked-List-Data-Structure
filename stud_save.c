#include<stdio.h>
#include"header.h"
void stud_save(sll * ptr)
{
FILE *fp;
fp=fopen("data.txt","a+");
if(ptr==0)
{
printf("No Records Found\n");
return;
}
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
ptr=ptr->next;
}
printf("DATA SAVED SUCCESSFULLY\n");
fclose(fp);
}
