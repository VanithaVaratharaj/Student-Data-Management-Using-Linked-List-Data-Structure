#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct stud
{
int rollno;
char name[20];
float marks;
struct stud *next;
}sll;
void stud_add(sll**);
void stud_del(sll**);
void stud_show(sll*);
void stud_modify(sll**);
void stud_save(sll*);
void stud_exit(sll*);
void stud_sort(sll*);
void stud_del_all(sll**);
void stud_reverse(sll**);

