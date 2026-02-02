#include <stdio.h>

int main(void){
    // 메모리 깊숙히 들어가보기
    int nData = 10;
    int a =1;
    int b = 2;

    printf("%s\n", "nData");
    printf("%d\n", nData);
    printf("%p\n", &nData);
    return 0;
}