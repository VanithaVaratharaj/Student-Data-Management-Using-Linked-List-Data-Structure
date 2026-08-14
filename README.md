# Student Record Management System

A simple **Student Record Management System written in C** using a **singly linked list**. The project provides a menu-driven command-line interface for adding, deleting, displaying, modifying, sorting, reversing, saving, and deleting student records.

## Features

- Add a new student record
- Automatically assign a roll number
- Display all student records
- Delete a student by roll number or name
- Modify student name or marks
- Sort records by:
  - Name
  - Marks
- Reverse the linked list
- Delete all student records
- Save records to `data.txt`
- Exit the application
- Modular implementation using separate `.c` source files

## Data Structure

The project uses a **singly linked list** to store student records.

Each student contains:

```c
typedef struct stud
{
    int rollno;
    char name[20];
    float marks;
    struct stud *next;
} sll;
```

## Project Structure

```text
.
├── header.h
├── main.c
├── makefile
├── stud_add.c
├── stud_del.c
├── stud_del_all.c
├── stud_exit.c
├── stud_modify.c
├── stud_reverse.c
├── stud_save.c
├── stud_show.c
└── stud_sort.c
```

`data.txt` is created automatically when records are saved.

## Menu Options

When the program starts, it displays the following menu:

```text
*****STUDENT RECORD MENU*****
------------------------------
a/A : add new record
d/D : delete a record
s/S : show the list
m/M : modify a record
e/E : save
v/V : exit
t/T : sort the list
l/L : delete all records
r/R : reverse the list
```

Both uppercase and lowercase options are supported.

## Requirements

- GCC compiler
- GNU Make
- Linux, macOS, or another Unix-like environment
- Standard C libraries

## How to Compile

Clone the repository:

```bash
git clone <your-repository-url>
cd <your-repository-folder>
```

Build the project using the included Makefile:

```bash
make
```

This creates an executable named:

```text
exe
```

## How to Run

Run the compiled program:

```bash
./exe
```

## How to Clean Build Files

The Makefile includes a `clear` target:

```bash
make clear
```

This removes the generated object files and executable.

## Saving Data

The program saves student information in:

```text
data.txt
```

The saved format is:

```text
RollNumber Name Marks
```

For example:

```text
1 Rahul 85.500000
2 Priya 91.000000
```

> **Note:** The current implementation appends records to `data.txt` when saving. It does not load previously saved records back into the linked list when the program starts.

## Example Workflow

```text
1. Start the program
2. Select A to add a student
3. Enter the student's name and marks
4. Select S to display records
5. Select T to sort records
6. Select R to reverse the list
7. Select M to modify a record
8. Select D to delete a record
9. Select E to save the records
10. Select V to exit
```

## Concepts Demonstrated

This project is useful for learning and practicing:

- C programming
- Structures
- Pointers
- Dynamic memory allocation
- Singly linked lists
- Linked-list traversal
- Insertion and deletion
- Searching
- Sorting
- Reversing a linked list
- File handling
- Modular programming
- Makefiles
- Command-line applications

## Source Files

| File | Purpose |
|---|---|
| `main.c` | Main menu and program control |
| `header.h` | Structure definition and function declarations |
| `stud_add.c` | Adds a student record |
| `stud_del.c` | Deletes a student record |
| `stud_del_all.c` | Deletes all records |
| `stud_modify.c` | Modifies student information |
| `stud_reverse.c` | Reverses the linked list |
| `stud_save.c` | Saves records to `data.txt` |
| `stud_show.c` | Displays all records |
| `stud_sort.c` | Sorts records by name or marks |
| `stud_exit.c` | Handles save/exit operations |
| `makefile` | Automates compilation and cleanup |


