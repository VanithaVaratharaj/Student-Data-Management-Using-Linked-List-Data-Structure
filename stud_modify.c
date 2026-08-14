#include "header.h"
void stud_modify(sll **ptr)
{
if(*ptr==0)
{
printf("No Records Found\n");
return;
}
sll *last=*ptr;
int c=0,r,rn;
char g,op;
        float f,fn;
char s[20],new[20];
printf("r/R :RollNo\nn/N :Name\nf/F :Float\n");
printf("Enter the Option:\n");
scanf(" %c",&op);
switch(op)
{
case 'R':
case 'r':
{
printf("Enter the Rollno\n");
scanf("%d",&rn);
printf("Choose\n n/N for Name Modify\nm/M for Marks Modify\nb/B for both modify\n");
scanf(" %c",&g);
if(g=='n')
{
printf("Enter the Name\n");
scanf(" %s",new);
while(last)
{
if(last->rollno==rn)
{
strcpy(last->name,new);
printf("DATA IS MODIFIED SUCCESSFULLY\n");
}
last=last->next;
}
}
else if(g=='n')
{
printf("Enter the Marks\n");
scanf(" %f",&fn);
while(last)
{
if(last->rollno==rn)
{
last->marks=fn;
printf("\033[31mDATA IS MODIFIED SUCCESSFULLY\033[0m\n");
}
last=last->next;
}
}
else
{
printf("Enter the Name and Marks\n");
scanf("%s %f",new,&fn);
while(last)
{
if(last->rollno=rn)
{
strcpy(last->name,new);
last->marks=fn;
printf("\033[31mDATA IS MODIFIED SUCCESSFULLY\033[0m\n");
}
last=last->next;
}
}

}
break;

case 'N':
case 'n':
printf("Enter the Name\n");
scanf("%s",s);
while(last)
{
if(strcmp(last->name,s)==0)
{
c++;
printf("%d %s %.2f\n",last->rollno,last->name,last->marks);
}
last=last->next;
}

if(c==1)
{
printf("Enter the New Name\n");
scanf("%s",new);
last=*ptr;
while(last)
{
if(strcmp(s,last->name)==0)
{
strcpy(last->name,new);
printf("\033[31mDATA IS MODIFIED SUCCESSFULLY\033[0m\n");
}
last=last->next;
}
}
if(c>1)
{
printf("\033[36mTHIS MARKS COME MULTIPLE TIME PLEASE ENTER THE ROLLNO\033[0m\n");
printf("Enter the Rollno:\n");
scanf("%d",&r);
printf("Enter the New Name:\n");
scanf("%s",new);
last=*ptr;
while(last)
{
if(r==last->rollno)
{
strcpy(last->name,new);
printf("\033[31mDATA IS MODIFIED SUCCESSFULLY\033[0m\n");
}
last=last->next;
}
}
break;

case 'F':
case 'f':
printf("Enter the Percentage\n");
scanf("%f",&f);
last=*ptr;
while(last)
{
if(last->marks==f)
{
c++;
printf("%d %s %.2f\n",last->rollno,last->name,last->marks);
}
last=last->next;
}
if(c==1)
{
printf("Enter the New Percentage\n");
scanf("%f",&fn);
last=*ptr;
while(last)
{
if(last->marks==f)
{
last->marks=fn;
printf("\033[31m*****DATA IS MODIFIED SUCCESSFULLY*****\033[0m\n");
}
last=last->next;
}
}
if(c>1)
{
printf("\033[36m*****THIS MARKS COME MULTIPLE TIME PLEASE ENTER THE ROLLNO*****\033[0m\n");
printf("Enter the Rollno:\n");
scanf("%d",&r);
printf("Enter the New Percentage:\n");
scanf("%f",&fn);
last=*ptr;
while(last)
{
if(r==last->rollno)
{
last->marks=fn;
printf("\033[31m*****DATA IS MODIFIED SUCCESSFULLY*****\033[0m\n");
}
last=last->next;
}
}
break;
}

}
