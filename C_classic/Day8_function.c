#include <stdio.h>
#include <string.h>

// strtok_r은 보통 반복문이랑 같이 사용됨
int main() {
    // 쪼갤 원본 문자열 (배열 형태여야 수정 가능함)
    char str[] = "Apple,Banana,Orange,Grape";
    char *context = NULL;
    
    // 1. 첫 번째 토큰 추출
    // 윈도우(Visual Studio)라면 strtok_s, 리눅스(Codespaces)라면 strtok_r 사용
    char *token = strtok_r(str, ",", &context);

    printf("--- 문자열 쪼개기 시작 ---\n");

    // 2. 더 이상 토큰이 없을 때(NULL)까지 반복
    while (token != NULL) {
        printf("추출된 과일: %s\n", token);

        // 다음 토큰을 가져올 때는 첫 번째 인자에 NULL을 전달!
        token = strtok_r(NULL, ",", &context);
    }

    return 0;
}

//________________________________________________________________

int main() {
    // 1. 목적지 배열 (공간이 넉넉해야 함!)
    char dest[20] = "Java "; 
    char src[] = "to C Language";

    // 2. strcat_s(목적지, 목적지전체크기, 붙일것)
    // "dest에 src를 붙일 건데, dest의 전체 크기가 20인 걸 확인하고 붙여줘!"라는 뜻
    strcat_s(dest, sizeof(dest), src);

    printf("결과: %s\n", dest);
    // 출력: Java to C Language

    return 0;
}