#include <stdio.h>
// c 언어 시작을 위해 설정들 맞추는 중
int main() {
    int num1, num2;
    int sum;

    printf("==== C언어 입력 테스트 ====\n");

    // 첫 번째 숫자 입력
    printf("첫 번째 정수를 입력하고 Enter를 누르세요: ");
    scanf("%d", &num1);  // 자바와 달리 변수 앞에 &를 붙여야 함!

    // 두 번째 숫자 입력
    printf("두 번째 정수를 입력하고 Enter를 누르세요: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n결과: %d + %d = %d\n", num1, num2, sum);
    printf("==========================\n");

    return 0;
}