//5171 12 5 27 -> 6963
#include <stdio.h>
#include <math.h>

void setbits(unsigned *x, int p, int n, unsigned y){
    //삭제해야할 부분을 기준으로 '전 삭제 후' 로 분리
    unsigned front = *x / (int)(pow(2.0,(double)p+1));
    unsigned back = *x % (int)(pow(2.0,(double)(p-n+1)));

    unsigned y_copy = ~0;
    y_copy <<= n;
    y_copy = ~y_copy;
    y &= y_copy;  

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
    unsigned x,y;
    int p,n;
    scanf("%u %u %d %d",&x,&p,&n,&y);

    setbits(&x,p,n,y);
    printf("%u\n",x);
}

/*
//5171 12 5 27 -> 6963
#include <stdio.h>
//x = 0 0 0 1 0 1 0 0 0 0 1 1 0 0 1 1 = 5171
//y = 0 0 0 0 0 0 0 0 0 0 0 1 1 0 1 1 = 27
//p = 12, n = 5
void setbits(unsigned *x, int p, int n, unsigned y){

    1. delete 생성 : x에서 삭제해야할 위치 부분 제외하고 다 1, 삭제하는 위치는 0
    2. x&&delete =  delete부분만 0인 x
    3. y의 끝에 n개를 x의 삭제된 부분까지 밀어주기
    4. x|y = 답!


    //1.
    unsigned delete = ~0; 
        // x : 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    delete = ~(delete << n); 
        // x : 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 
        // x : 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1
    int shift = p-n+1;
    delete <<= shift;
        // x : 0 0 0 1 1 1 1 1 0 0 0 0 0 0 0 0
    delete = ~delete;
        // x : 1 1 1 0 0 0 0 0 1 1 1 1 1 1 1 1

    //2.
    *x &= delete;
        // x : 0 0 0 0 0 0 0 0 0 0 1 1 0 0 1 1 

    //3.
    y <<= shift;
        // y : 0 0 0 1 1 0 1 1 0 0 0 0 0 0 0 0
    
    //4.
    *x = *x|y;
}

int main(){
    unsigned x,y;
    int p,n;
    scanf("%u %d %d %u",&x,&p,&n,&y);
    setbits(&x,p,n,y);
    printf("%u\n",x);
}
*/