#include <stdio.h>
#include <math.h>
unsigned short circular_shift(unsigned x, int n){
    unsigned copy = (x/(int)(pow(2.0,(double)(16-n))));
    printf("%u\n",copy);
    x = copy | (x<<n);
    return x;
}

int main(){
    int n;
    unsigned x;
    scanf("%u %d",&x,&n);
    printf("%hu\n",circular_shift(x,n));
}

/*
5171
: 0 0 0 1 0 1 0 0 0 0 1 1 0 0 1 1
n = 5
: 1 0 0 0 0 1 1 0 0 1 1 0 0 0 1  : 34402
*/