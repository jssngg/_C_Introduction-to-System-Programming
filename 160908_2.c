//화씨 섭씨 출력 _while
#include <stdio.h>
int main(){
    //F = C * 9 / 5 + 32
    int C=-30,step=10,limit=50;
    double F;
    printf("  C     F\n"); 
    while(C<=limit){
        F = C * 9 / 5 + 32;
        printf("%3.0d %6.1lf\n",C,F); //%nd : n칸만큼 공간확보 후 오른쪽정렬
        C+=step;
    }
}