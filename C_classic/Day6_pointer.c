#include <stdio.h>
/*
//정적 메모리와 기억부류 지정자
int main()
{
    char szBuffer[1024*1024] = {0}; //스텍의 크기는 보통 1MB이므로 이렇게 만들면 stack overflow남

}
*/

// 전역변수 (정적 메모리 영역 이해)
int TestFunc(void)
{
    int x = 5;
    static int nData = 10;
    ++nData;
    return nData;
}

int main(int argc, char* argv[]){
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());
    return 0;
}