//사용자 정의 함수

/* 두 가지 함수 설계 원칙
1. UI와 기능은 반드시 분리한다
2. 재사용 가능한 단위 코드는 함수로 구현(DRY 원칙) -> 유지보수성 굿
*/
#include <stdio.h>
int GetFactoriala(int n){
    //1번을 안지킨 예시
    int nR = 1;
    if( n < 1 || n>10){
        puts("ERROR");  // 이 부분은 UI
        return 0;
    }
    for(int i=1; i<=n; i++){  // 이 부분은 기능
        nR *= i;
    }
    return nR;
}

int GetFactorialb(int n){
    //1번을 지킨 예시 (기능만) -> UI는 보통 메인함수에
    int nR = 1;
    if( n < 1 || n>10){
        return 0;
    }
    for(int i=1; i<=n; i++){  // 이 부분은 기능
        nR *= i;
    }
    return nR;
}

int main(void){
    printf("Max: %d/n", GetFactoriala(1));
    return 0;
}