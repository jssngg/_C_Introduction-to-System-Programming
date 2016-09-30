#include <stdio.h>
#include <string.h>

int htoi(char s[]){
    int k=1,i,sum=0;

    for(i=strlen(s)-1;i>=2;i--){
        if('0'<=s[i]&&s[i]<='9'){ //10이하
            sum += k*(s[i]-48);
        }
        else if(s[i]=='f'||s[i]=='F'){ //F
            sum+= k*15;
        }
        else if('a'<=s[i]&&s[i]<'f'){ //소문자
            sum += k*(s[i]-97);
        }
        else if('A'<=s[i]&&s[i]<'F'){ //대문자
            sum += k*(s[i]-65);
        }
        k*=16;
    }
    return sum;
}

int main(){
    char sixteen[1000]={0};
    scanf("%s",sixteen);

    int ans = htoi(sixteen);
    printf("%d\n",ans);
}
