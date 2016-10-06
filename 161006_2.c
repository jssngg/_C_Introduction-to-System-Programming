// A-E = ABCDE 이렇게 출력하기 (숫자만 입력받음)

#include <stdio.h>
#include <string.h>

void expand(char s[], char t[]) {
    char head = s[0]; // 한자리수 - 한자리수 의 형태라서 가능
    char tail = s[2];
    int i,len=0;

    for(i=head;i<=tail;i++){
        t[len] = i;
        len++;
    }
    t[len] = '\0'; //null값 없으면 무한대로 출력하다가 세그먼트 오류뜸
}

int main() {
    char u0[10] = "2-7";
    char u1[10] = "3-3";
    char u2[10] = "4-2";
    char v[10];
    
    printf("Before: %s\n", u0);
    expand(u0, v);
    printf("After: %s\n", v);

    printf("Before: %s\n", u1);
    expand(u1, v);
    printf("After: %s\n", v);
    
    printf("Before: %s\n", u2);
    expand(u2, v);
    printf("After: %s\n", v);

}