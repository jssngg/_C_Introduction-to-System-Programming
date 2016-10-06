// \n,\t를 화면에 출력하시오 

#include <stdio.h>
#include <string.h>

void escape(char s[], char t[]) {
    int i,len;

    for (i = len = 0; t[i] != '\0'; i++){
        switch (t[i]) {
            case '\n':
                s[len++] = '\\';
                s[len++] = 'n';
                break;
            case '\t':
                s[len++] = '\\';
                s[len++] = 't';
                break;
            default:
                s[len++] = t[i];
            }
        }
    s[strlen(s)] = '\0';    
}

int main() {
    char u[10] = "ERI\tCA\nHY";
    char v[20];
    printf("Before:\n%s\n", u);
    escape(v, u);
    printf("After:\n%s\n", v);
}