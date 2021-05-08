#include<stdio.h>
#include"s21801070.h"
#include "s21700794.h"

#define SIZE 30

int main()
{
    Todolist todo[SIZE];  
    int count, no, index;
    int menu_num;
    count = 0, no = 0, index = 0;
    


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

                printf("데이터 불러오기 완료\n");
                readAll(fruit);
        }
        else{
                #ifdef DEBUG
                        printf("실행??");
                #endif
        }

*/
        do{
                menu_num = menu();
                if(menu_num == 0) break;
                if(menu_num == 1) Allreadtodo(todo);
                if(count == 0) printf("데이터를 먼저 추가해주세요! \n");
                if(menu_num == 2) count+=createTodo(&todo[index++]);
                if(menu_num == 3) {
                    no = selectDataNo(todo, index);
                        if(no == 0) {
                            printf("취소됨\n");
                            continue;
                        }
                    updateTodo(&todo[no-1]);
                }
                if(menu_num == 4) {
                    no = selectDataNo(todo, index);
                        if(no == 0) {
                            printf("취소됨\n");
                            continue;
                        }
                    if(deleteTodo(&todo[no-1])){
                        printf("삭제되었습니다.\n");
                        count--;
                    }
                }
        }while(1);

        return 0;
}
