#include<stdio.h>
#include"s21801070.h"
#include "s21700794.h"

#define SIZE 30

int main()
{
    Todolist todo[SIZE];  
    int count;
    int menu_num;
    count =0;


        memset(todo, -1, sizeof(todo));

     #ifdef DEBUG
                        printf("\n\n======================== DEBUGMODE => helloworld!!===================\n\n \n");
     #endif

 /*    if(LoadFile())
        {
                count = ReadFile(fruit);
                #ifdef DEBUG
                printf("count : %d \n", count);
                #endif

                printf("������ �ҷ����� �Ϸ�\n");
                readAll(fruit);
        }
        else{
                #ifdef DEBUG
                        printf("����??");
                #endif
        }

*/
        do{
                menu_num = menu();
                if(menu_num == 0) break;
                if(menu_num == 2) count+=createTodo(todo);
                if(count == 0){
                        printf("�����͸� ���� �߰����ּ���! \n");
                        continue;
                }
                if(menu_num == 1) Allreadtodo(todo);
                if(menu_num == 3) updateTodo(todo);
                if(menu_num == 4) count-= deleteTodo(todo);
        }while(1);

        return 0;
}
