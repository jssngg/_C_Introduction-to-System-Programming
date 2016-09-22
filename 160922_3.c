#include <stdio.h>
#define MAXLINE 10

int readline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char line[], int len);

int main() {
    int len;                 
	char line[MAXLINE];
	while ((len = readline(line, MAXLINE)) > 0){ //입력값이 존재할 때
		reverse(line, len);
        printf("\n");
	}
	return 0;
}

int readline(char s[], int lim) { //
	int c,i;
	for (i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i){
		//0~9 ; 입력 종료가 아니고, 줄 바꿈이 아닐 때
		s[i]=c;
	}
	if(c=='\n'){ //줄바꿈일때 (길이 맥시멈 10인거 초과 안하려고 분리한 조건)
		s[i]= c;
		++i;
	}
	s[i] = '\0'; //\0 == null
	return i;
}

void reverse(char line[], int len){
    int i;
    for(i=len-1;i>=0;i--){
        printf("%c",line[i]);
    }
}