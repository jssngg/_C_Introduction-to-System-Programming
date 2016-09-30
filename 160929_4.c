//5171 12 5 27 -> 2867
#include <stdio.h>
#include <math.h>

void invert(unsigned *x, int p, int n){
    //삭제해야할 부분을 기준으로 '전 삭제 후' 로 분리
    unsigned front = *x / (int)(pow(2.0,(double)p+1));
    unsigned back = *x % (int)(pow(2.0,(double)(p-n+1)));

    unsigned y = ((~*x)%(int)(pow(2.0,(double)(p+1))))/(int)(pow(2.0,(double)(p-n+1)));
    //y : 삭제한요소를 뒤집은 후 삭제된 자리에 합쳐줄 요소
    int shift = n;
    front = front << shift;
    // front y back 만들기 위해 우선 front y 의 공간 마련

    unsigned new1 = front|y;


    shift = p-n+1;
    new1 = new1 << shift;
    // front y back 만들기 위해 new1(front y) 뒤에 back의 공간 마련

    unsigned new2 = new1|back;

    *x = *x & 0; //return값 없기 때문에 *x를 초기화하고 거기에 답 넣어주기
    *x = *x|new2;
}


int main(){
    unsigned x;
    int p,n;
    scanf("%u %d %d",&x,&p,&n);

    invert(&x,p,n);
    printf("%u\n",x);
}