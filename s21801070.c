#include<stdio.h>
#include "s21801070.h"
#define SIZE 30


FILE* subfile(char * filename)
{
        printf("%s", filename);
        FILE * fp = fopen(filename, "rt");
        if(fp == NULL)
                printf("해당 파일 없습니다");
                
        return fp;
}

int fileopen(int BOOL){
        
        char ch[100] = "whole.txt";
        int sid;
        if(BOOL != 0)
        {
                printf("원하시는 문서 번호를 입력해주세요!");
                scanf("%d", &sid);
                sprintf(ch, "%d", sid);
        }

        FILE * fp = subfile(ch);
        if(fp == NULL) return 0;
        else return 1;
}


int menu(){
        int num;
        printf("\n*** Todolist ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        //printf("5. 파일 저장\n");
        //printf("내 데이터 저장")
        printf("7. uid로 검색\n");
        printf("8. 우선순위로 검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &num);

        return num;
}


int searchuserid(Todolist * list)
{
        Allreadtodo(list);

        int uid;
        int undo;
        printf("찾으실 userid를 입력해주세요");
        scanf("%d", &uid);
        printf("취소하시고 싶으면 0을 눌러주세요!");
        scanf("%d", &undo);
        if(undo == 0)
                return 0;
        for(int i =0; i<SIZE; i++)
                if(list[i].user == uid)
                        readTodo(list[i]);
        
        return 1;
}

int searchprior(Todolist * list)
{
        Allreadtodo(list);

        int prior;
        int undo;

        printf("찾으실 우선순위를 입력해주세요");
        scanf("%d", &prior);
        printf("취소하시고 싶으면 0을 눌러주세요!");
        scanf("%d", &undo);
        if(undo == 0)
                return 0;
        for(int i =0; i<SIZE; i++)
                if(list[i].priority == prior)
                        readTodo(list[i]);
        
        return 1;
}