#include"header.h"
void stud_add(sll**ptr)
{
sll *new,*last=*ptr,v;
int *a,k=0,i,j,t,m=1,c=0;
new=malloc(sizeof(sll));
new->next=0;
printf("Enter the Name and Marks: \n");
scanf("%s %f", new->name,&new->marks);
while(last)
{
c++;
last=last->next;
}
a=malloc(sizeof(int)*c);
last=*ptr;
while(last)
{
a[k++]=last->rollno;
last=last->next;
}
for(i=0;i<c-1;i++)
{
for(j=0;j<c-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
last=*ptr;
k=0;
while(last)
{
if(a[k]==m)
{
m=m+1;
k++;
}
else
break;
last=last->next;
}
new->rollno=k+1;
last=*ptr;
if(*ptr==0)
{
*ptr=new;
printf("DATA ADDED SUCCESSFULLY\n");
}
else
{
while(last->next)
last=last->next;
last->next=new;
printf("DATA ADDED SUCCESSFULLY\n");
}
}

