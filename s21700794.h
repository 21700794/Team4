#include <stdio.h>
#include <string.h>


typedef struct todolist{
    int user;
    char name[100];
    char list[100];
    int time;
    int priority;
} Todolist;

void readTodo(Todolist t){
    printf("%4d %4s %4s %4d %4d", t.user, t.name, t.list, t.time, t.priority);
}

int createTodo(Todolist *t){
    printf("사용자(PIN) : ");
    scanf(" %d", &t->user);
    printf("사용자(username) : ");
    scanf(" %d", t->name);
    printf("할 일은? : ");
    scanf(" %d", t->list);
    printf("시간은? : ");
    scanf(" %d", &t->time);
    printf("우선순위는? : ");
    scanf(" %d", &t->priority);
    printf("=> 저장되었습니다.\n");
    return 1; 
}

int updateTodo(Todolist *t){
    printf("사용자(PIN) : ");
    scanf(" %d", &t->user);
    printf("사용자(username) : ");
    scanf(" %d", t->name);
    printf("할 일은? : ");
    scanf(" %d", t->list);
    printf("시간은? : ");
    scanf(" %d", &t->time);
    printf("우선순위는? : ");
    scanf(" %d", &t->priority);
    printf("=> 저장되었습니다.\n");
    return 1; 
}

int deleteTodo(Todolist *t){
    t->user = -1;
//    t->name = -1;
//    t->list = -1;
    t->time = -1;
    t->priority = -1;
    return 1;
}
