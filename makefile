exe : main.o stud_add.o stud_del_all.o stud_del.o stud_exit.o stud_modify.o stud_reverse.o stud_save.o stud_show.o stud_sort.o
	gcc  main.o stud_add.o stud_del_all.o stud_del.o stud_exit.o stud_modify.o stud_reverse.o stud_save.o stud_show.o stud_sort.o -o exe
main.o :main.c
	gcc -c main.c
stud_add.o :stud_add.c
	gcc -c stud_add.c
stud_del_all.o :stud_del_all.c
	gcc -c stud_del_all.c
stud_del.o :stud_del.c
	gcc -c stud_del.c
stud_exit.o :stud_exit.c
	gcc -c stud_exit.c
stud_modify.o :stud_modify.c
	gcc -c stud_modify.c
stud_reverse.o :stud_reverse.c
	gcc -c stud_reverse.c
stud_save.o :stud_save.c
	gcc -c stud_save.c
stud_show.o:stud_show.c
	gcc -c stud_show.c
stud_sort.o:stud_sort.c
	gcc -c stud_sort.c
clear :
	@rm -r *.o exe
