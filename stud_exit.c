#include<stdio.h>
#include"header.h"
void stud_exit(sll *ptr)
{
char op;
FILE *fp;
fp=fopen("data.txt","a+");
while(1)
{
printf("s/S: save\n e/E:exit\n");
printf("Enter your option: ");
scanf(" %c",&op);
switch(op)
{
case 'E':
case 'e':
 exit(0); break;
case 'S':
case 's':
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
printf("DATA SUCCESFULLY SAVED\n");
fclose(fp);
exit(0);
break;
}
}
}
