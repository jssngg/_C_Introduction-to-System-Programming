#include <stdio.h>
int main(){
    //F = C * 9 / 5 + 32
    //C = (5.0 / 9.0) * (F - 32)
    int F;
    double C;
    printf("  C     F\n"); 
    for(F=300;F>=0;F-=20){
        C = (5.0 / 9.0) * (F - 32);
        printf("%3d %6.1lf\n",F,C);
    }
}