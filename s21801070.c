#include "s21801070.h"
#include "s21700794.h"

int menu(){
        int num;
        printf("\n*** 점수계산기 ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("5. 파일 저장\n");
        printf("6. 이름으로 검색\n");
        printf("7. 별점으로 검색\n");
        printf("8. 가격으로 검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &num);

        return num;
}
