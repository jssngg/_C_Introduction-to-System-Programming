// - : 0123456789
// -6 : 0123456
// 5- : 56789

#include <stdio.h>
#include <string.h>

void expand(char s[], char t[]) {
    int j=0;
    if(strlen(s)==1){ //-
        for(int i='0';i<='9';i++){
            t[j++] = i;
        }
    }
    else if(s[0]=='-'){ //-3
        for(int i='0';i<s[1];i++){
            t[j++] = i;
        }
    }
    else{ //4-
        for(int i=s[0];i<='9';i++){
            t[j++] = i;
        }
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