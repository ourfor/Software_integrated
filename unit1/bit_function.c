#include <stdio.h>

union a{
	int x;
	short y;
	char z;
	double c;
}a;

int main(){
    int x=12;
    //12=1100(2)
    int y=10;
    //10=1010(2);
    printf("1100&1010=1000 %d\n",x&y);
    printf("1100|1010=1110 %d\n",x|y);
    printf("1100^1010=110 %d\n",x^y);
    printf("~1010=0101 %d\n",~y);
	
    printf("~1010>>2 %d\n",y>>2);
    printf("~1010<<2 %d\n",y<<2);

	int n1=15;
	short n2=15;
	unsigned short n3=15;
	unsigned char c=15;
	n1<<=15;
	n2<<=15;
	n3<<=15;
	c<<=6;
	printf("n1=%x,n2=%d,n3=%d,c=%x,c<<4=%d\n",n1,n2,n3,c,c<<4);
	a.c=188;
	printf("%08lf\n",a.c);


	return 0;
}
