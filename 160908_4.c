#include <stdio.h>
//한 번에 문자 하나씩 입력에서 출력으로 카피하되,
//연속 이어지는 빈칸은 모두 빈칸 하나로 줄이는 프로그램
int main() {
    int c,check=0;
    while ((c=getchar())!= EOF){ //EOF : 입력종료
        if(c==32){ //스페이스의 아스키코드
            check=1; //띄어쓰기 시작
        }
        else{ // !띄어쓰기
            if(check==1){ //그 전까지 띄어쓰기
                printf(" ");
                check=0;
            }
            putchar(c);
        }
    }
}