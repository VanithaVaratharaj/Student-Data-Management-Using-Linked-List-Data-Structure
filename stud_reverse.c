#include<stdio.h>
#include"header.h"
void stud_reverse(sll **ptr)
{
int i=0,c=0;
sll **a=malloc(sizeof(sll*)*c);
sll *t=*ptr;
if(*ptr==0)
{
printf("No Records Found\n");
return;
}
while(t)
{
a[i++]=t;
c++;
t=t->next;
}
for(i=c-1;i>0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*ptr=a[c-1];
printf("DATA REVERSED SUCCESSFULLY\n");
}
