#include "s21801070.h"
#include "s21700794.h"

int menu(){
        int num;
        printf("\n*** Todolist ***\n");
        printf("1. ��ȸ\n");
        printf("2. �߰�\n");
        printf("3. ����\n");
        printf("4. ����\n");
        //printf("5. ���� ����\n");
        //printf("6. �̸����� �˻�\n");
        //printf("7. �������� �˻�\n");
        //printf("8. �������� �˻�\n");
        printf("0. ����\n\n");
        printf("=> ���ϴ� �޴���? ");
        scanf("%d", &num);

        return num;
}
