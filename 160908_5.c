//한 줄에 한 단어씩 출력
#include <stdio.h>
#define IN  1 //!띄어쓰기
#define OUT 0 //띄어쓰기

int main() {
    int state,c;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){ //단어 분류
            if(state==IN){
                printf("\n");
            }
            state = OUT;
        }
        else if (state == OUT) { //띄어쓰기,\n,\t아닌데 이전 것은 띄어쓰기
            state = IN;
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}