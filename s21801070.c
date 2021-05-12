#include<stdio.h>
#include "s21801070.h"
#define SIZE 30


FILE* subfile(char * filename)
{
        printf("%s", filename);
        FILE * fp = fopen(filename, "rt");
        if(fp == NULL)
                printf("�ش� ���� �����ϴ�");
                
        return fp;
}

int fileopen(int BOOL){
        
        char ch[100] = "whole.txt";
        int sid;
        if(BOOL != 0)
        {
                printf("���Ͻô� ���� ��ȣ�� �Է����ּ���!");
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
        printf("1. ��ȸ\n");
        printf("2. �߰�\n");
        printf("3. ����\n");
        printf("4. ����\n");
        //printf("5. ���� ����\n");
        printf("7. uid�� �˻�\n");
        printf("8. �켱������ �˻�\n");
        printf("0. ����\n\n");
        printf("=> ���ϴ� �޴���? ");
        scanf("%d", &num);

        return num;
}


int searchuserid(Todolist * list)
{
        Allreadtodo(list);

        int uid;
        int undo;
        printf("ã���� userid�� �Է����ּ���");
        scanf("%d", &uid);
        printf("����Ͻð� ������ 0�� �����ּ���!");
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

        printf("ã���� �켱������ �Է����ּ���");
        scanf("%d", &prior);
        printf("����Ͻð� ������ 0�� �����ּ���!");
        scanf("%d", &undo);
        if(undo == 0)
                return 0;
        for(int i =0; i<SIZE; i++)
                if(list[i].priority == prior)
                        readTodo(list[i]);
        
        return 1;
}