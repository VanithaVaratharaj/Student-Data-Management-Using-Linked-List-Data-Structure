#include<stdio.h>
#include"header.h"
void main()
{
	sll *headptr=0;
	char op;
	while(1)
	{        
		printf( "\033[33m_______________________________\n");
		printf("| *****STUDENT RECORD MENU*****|\n");
		printf("|------------------------------|\n");
		printf("|a/A : add new record          |\n");
		printf("|d/D : delete a record         |\n");
		printf("|s/S : show the list           |\n");
		printf("|m/M : modify a record         |\n");
		printf("|e/E : save                    |\n");
		printf("|v/V : exit                    |\n");
		printf("|t/T : sort the list           |\n");
		printf("|l/L : delete all records      |\n");
		printf("|r/R : reverse the list        |\n");
		printf("|______________________________|\033[0m\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'A':
			case 'a':stud_add(&headptr);
				 break;

			case 'D': 
			case 'd':stud_del(&headptr);
				 break; 

			case 'S': 
			case 's':stud_show(headptr);
				 break; 

			case 'M':
			case 'm':stud_modify(&headptr);
				 break;

			case 'E':
			case 'e':stud_save(headptr);
				 break;

			case 'V':
			case 'v':stud_exit(headptr);
				 break;

			case 'T':
			case 't':stud_sort(headptr);
				 break;

			case 'L':
			case 'l':stud_del_all(&headptr);
				 break;

			case 'R':
			case 'r':stud_reverse(&headptr);
				 break;

			default : printf("Invalid Choice\n");
		}
	}
}
