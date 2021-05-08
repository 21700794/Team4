#include <stdio.h>
#include <string.h>


typedef struct todolist{
    int user;
    char name[100];
    char list[100];
    int time;
    int priority;
} Todolist;

void readTodo(Todolist t);

void Allreadtodo(Todolist * t);

int createTodo(Todolist *t);

int updateTodo(Todolist *t);

int deleteTodo(Todolist *t);

int selectDataNo(Todolist *t, int index);
