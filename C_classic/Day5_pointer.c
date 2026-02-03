#include <stdio.h>
#include <stdlib.h>

// 다음 코드의 결함은??? (deep copy와 shallow copy 구분 가능한가?)
int main(void)
{
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;
    pszData = (char*)malloc(sizeof(char) * 12);
    pszData = szBuffer;
    /* 
    동적할당된 부분이 pszData = szBuffer; 이 부분에서 유실되게 됨
    심지여 free도 안함
    */
    puts(pszData);
    return 0;
}
