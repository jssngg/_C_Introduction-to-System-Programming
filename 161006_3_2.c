// - : 0123456789
// -6 : 0123456
// 5- : 56789

#include <stdio.h>
#include <string.h>

void expand(char s[], char t[]) {
    int i,zero,nine;
    int checker=0;
    i = 0;
    zero = '0';
    nine = '9';
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='-'){ //checker = 1 : '-'를 만났습니다.
            checker = 1;
        }
        else if(checker==0){ //checker = 0 : '-'를 아직 안 만났어요.
            zero = s[i];
        }
        else{ // '-'를 만났어요 = -abc 상태에요!
            nine = s[i];
        }
    }
    if(checker==0){ //'-'가 없어요 = only 숫자 한개
        nine = zero;
    }
    for(i=0;zero<=nine;zero++){
        t[i++] = zero;
    }
    t[j] = '\0';
}

int main() {
    char u0[10] = "-";
    char u1[10] = "-3";
    char u2[10] = "4-";
    char u3[10] = "5";
    char v[100];

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