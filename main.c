#include<stdio.h>
#include"s21801070.h"
#include"s21700794.h"

#define SIZE 30

int main()
{
    Todolist todo[SIZE];  
    int count, no, index;
    int menu_num;
    int flag=0; // fileopen�� �� �� ��ų �� ó�� �θ��� ���� Ȯ���ϱ� ���� ����
    count = 0, no = 0, index = 0;
    
    fileopen(flag);
    flag=1;

     memset(todo, -1, sizeof(todo));

 /*    if(LoadFile()) �̰� �ʿ���� ���̴µ� ���ֵ� �ɱ��??
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
                if(menu_num == 1) {
                        if(count > 0) Allreadtodo(todo);
                        else printf("=> �����Ͱ� �����ϴ�.\n");
                    }
                if(menu_num == 2) count+=createTodo(&todo[index++]);
                if(menu_num == 3) {
                    no = selectDataNo(todo, index);
                        if(no == 0) {
                            printf("��ҵ�\n");
                            continue;
                        }
                    updateTodo(&todo[no-1]);
                }
                if(menu_num == 4) {
                    no = selectDataNo(todo, index);
                        if(no == 0) {
                            printf("��ҵ�\n");
                            continue;
                        }
                    if(deleteTodo(&todo[no-1])){
                        printf("�����Ǿ����ϴ�.\n");
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
