#include "s21801070.h"
#include<stdio.h>

#define SIZE 30

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


int searchuserid(Todolist * list)
{
        Allreadtodo(list);

        int uid;
        printf("찾으실 userid를 입력해주세요");
        scanf("%d", &uid);
        
        for(int i =0; i<SIZE; i++)
                if(list[i].user == uid)
                        readTodo(list[i]);
}

