#include <stdio.h>
int main(){
    int x=2, y=3, z=3, k=1;
    int b = 3*x/y-z+k; //priority given according to operators precedence
    printf("The value of b is %d", b);
return 0;
}