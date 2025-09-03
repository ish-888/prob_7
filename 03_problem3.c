#include <stdio.h>
int main(){
    int x=2, y=3, z=3, k=1;
    int b = 3*x/y-z+k; //priority given according to operator precedence
    printf("The value of b is %d", b);
return 0;
}
//output
// 3*2/y-z+k
//6/3-z+k
//2-3+k
//-1+1
//0
