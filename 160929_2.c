#include <stdio.h>
#include <string.h>
#define MAXLINE 10

void squeeze(char s1[], char s2[]) {
	int i,j,k;
    int len = strlen(s1)+1;
	for(k=0;k<strlen(s2);k++){
		for(i=0;i<len;i++){
            if(s1[i]==s2[k]){
                for(j = i ; j < strlen(s1) ; j++){
                    s1[j] = s1[j+1];
                }
            }
        }
	}
}

int main(){
    char s1[MAXLINE] = "hanyang";
    char s2[MAXLINE] = "ng";
    squeeze(s1,s2);
    printf("%s\n", s1);
}


/* 전역변수 사용 버전
#include <stdio.h>
#include <string.h>
char word[1000];
char removed[1000];
int len=0;

void squeeze(char s1[], char s2[]) {
	int i,j,k;
    len = strlen(s1)+1;
	for(k=0;k<strlen(s2);k++){
		for(i=0;i<len;i++){
            if(s1[i]==s2[k]){
                s1[i] = 0;
            }
        }
	}
}

int main(){
    scanf("%s %s",word,removed);
    squeeze(word,removed);
    for(int i=0;i<len;i++){
        printf("%c",word[i]);
    }
    printf("\n");
}
*/