#include<stdio.h>
#include"s21801070.h"
#include"s21700794.h"

#define SIZE 30

int main()
{
    Todolist todo[SIZE];  
    int count, no, index;
    int menu_num;
    count = 0, no = 0, index = 0;
    


     memset(todo, -1, sizeof(todo));

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
                if(menu_num == 1) {
                        if(count > 0) Allreadtodo(todo);
                        else printf("=> 데이터가 없습니다.\n");
                    }
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
//                 if(menu_num == 5) writefile(todo, index);
//                 if(menu_num == 6) searchname(todo);
                if(menu_num == 7)
                    searchuserid(todo);
                if(menu_num == 8)
                    searchprior(todo);               
        }while(1);

        return 0;
}
