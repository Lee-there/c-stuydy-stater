#include <stdio.h>
#include <stdlib.h> // malloc 사용하려면 필요
#include <string.h> // memset 사용에 필요

/*
개념1.
malloc -> 동적 할당
memset(변수 , 정수, sizeof(int)*3); -> 변수의 처음부터 3개 인덱스 정수 넣기
calloc -> 동적 할당 후 0으로 초기화

개념2(메모리 값 복사) *********매우 중요******
   1) memcpy 사용법 숙지  -> 배열1 = 배열2는 오류투성이인 코드임
 */



/* void main(){
    // 문자열 길이 구하기 (포인터 사용해서)
    char szBuffer[16] = {"Hello"};
    char* pszData = szBuffer;

    while(*pszData != '\0') pszData++;

    printf("Length : %ld\n", pszData - szBuffer);
    //strlen이 이 방식 사용
}
    

int main(void)
{
    int* pList = NULL; //초기값  clear 
    pList = (int*)malloc(sizeof(int)*3);

    pList[0] = 10;
    pList[1] = 20;
    pList[2] = 30;
    
    for(int i=0; i<4; i++){
        printf("%d/n", pList[i]);
    }
    free(pList);
    return 0;
}
    */