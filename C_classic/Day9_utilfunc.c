#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//atoi(), time() , localtime(), ctime(), srand(), rand() 사용법 숙지


int main(){
int i = 0;
srand((unsigned)time(NULL));

for(int i=0; i<3; i++){
    printf("%6d\n", rand());
}
}

// system() exit()함수 (윈도우 환경에서만 가능)