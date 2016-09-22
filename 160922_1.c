//입력받은대로 출력하기, 단 띄어쓰기 뭉텅이는 띄어쓰기 1개로 처리
#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int c,state;
	state = IN;
	while ((c = getchar()) != EOF) //입력받은 값이 입력종료가 아닐 때
		if(c==' '){
            if(state==IN){state=OUT;} //띄어쓰기의 시작점을 체크
        }
        else{
            if(state==OUT){ //입력값이 스페이스가 아닌데 이전까지는 띄어쓰기였음
                printf(" "); //따라서 띄어쓰기 뭉텅이가 종료됨 -> 띄어쓰기 1개 출력
                state=IN;
            }
            putchar(c);
        }
}