//입력한 요소들의 개수를 세서, 그 개수 만큼 *을 출력
#include <stdio.h>
int main() {
    int c, i, j, space=0, simbol=0;
    //space : 띄어쓰기,\n,\t / simbol : 그 외 모든 기호
    int ndigit[10] = {0};
    //개수 세기위한 배열, 1이 전체에 3개 있다면 ndigit[1]==3
	
    while ((c = getchar()) != EOF) //입력받은 값이 입력종료가 아닐 때
        if (c >= '0' && c <= '9') //0~9의 수 일때
            ++ndigit[c-'0']; 
            //문자열로 받았기 때문에 정수로 전환위해 -'0' (아스키코드 참고)
        else if (c == ' ' || c== '\n' || c == '\t')
            ++space;
        else
            ++simbol;


    for (i = 0; i < 10; i++){
        printf("\n%d ", i);
        for(j=0 ; j<ndigit[i] ; j++){
            printf("*");
        }
    }
    printf("\nw ");
    for (i=0 ; i < space ; i++)
        printf("*");
    printf("\no ");
    for (i=0 ; i<simbol ; i++)
        printf("*");
    printf("\n");
}