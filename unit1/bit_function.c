#include <stdio.h>

int main(){
    int x=12;
    //12=1100(2)
    int y=10;
    //10=1010(2);
    printf("1100&1010=1000 %d\n",x&y);
    printf("1100|1010=1110 %d\n",x|y);
    printf("1100^1010=110 %d\n",x^y);
    printf("~1010=0101 %d\n",~y);
}
