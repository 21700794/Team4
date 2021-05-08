#include "s21700794.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"s21801070.h"

#define SIZE 30


void readTodo(Todolist t)
{
    printf("%4d %4s %4s %4d %4d\n", t.user, t.name, t.list, t.time, t.priority);
}

void Allreadtodo(Todolist *t)
{
    for(int i =0; i<SIZE; i++)
    {
        if(t[i].user == -1) continue;
        printf("%d ", i+1);
        readTodo(t[i]);
    }
}


int createTodo(Todolist *t){
    printf("사용자(PIN) : ");
    scanf(" %d", &t->user);
    printf("사용자(username) : ");
    scanf(" %[^\n]s", t->name);
    printf("할 일은? : ");
    scanf(" %[^\n]s", t->list);
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
    scanf(" %[^\n]s", t->name);
    printf("할 일은? : ");
    scanf(" %[^\n]s", t->list);
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

int selectDataNo(Todolist *t, int index)
{
	int no;
	Allreadtodo(t);
	printf("\n번호는 (취소: 0)?");
	scanf(" %d", &no);
	return no;
}

int menu(){
        int num;
        printf("\n*** Todolist ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        //printf("5. 파일 저장\n");
        //printf("6. 이름으로 검색\n");
        //printf("7. 별점으로 검색\n");
        //printf("8. 가격으로 검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &num);

        return num;
}
