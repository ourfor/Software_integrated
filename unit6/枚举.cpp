/*
 * author: ourfor
 * date: 2018-10-24
 * description: grep 
 * version: 1.0
 * copyright: sagit
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
int f(int);

int main(int argc,char * argv[]){
    if(argc==2&&(argv[1]=="-h"||argv[1]=="--help")) printf("Usage:\n\t-h, --help : print this information whice provide some help information.\n");
    printf("%s\n",argv[1]);
    if(*argv[1]=="-h") printf("Usage:\n\t");
    printf("%d\n",f(12));
    return 0;
}

int f(int n){
        if(n==1||n==2) return 1;
        else return f(n-1) + f(n-2);
}
*/

/* 
 * date: 2018-10-24
 * version: 1.0
 * description:
 * # 枚举的思想：
 *
 * eg:质数、斐波那契数列.
 * 动态规划：自底向上，减少重复计算
 * 1.建立解空间 2.确定搜索(顺序) 3.尽可能发现不是解的情况
 * - 根据知识给出一个猜测的答案
 * - 验证猜测
 * - 进行新的猜测
 * 1.建立简洁的数学模型
 * 2.减少搜索空间
 * 3.采用合适的搜索顺序(避免遗漏)
 *
 * 完美立方
 */

int main(){

    int a=3,b=0,c=0,d=0;
    int N=0;
    int l,cube[101];
    for(l=0;l<=100,l++) cube[l]=l*l*l;
    printf("输入正整数N:");
    scanf("%d",&N);
    for(;a<=N;a++){
        for(;b<=a-1;b++){
            for(c=b;c>=b&&c<a-1;c++){
                for(d=c;d>=c&&d<a-1;d++){
                    if(cube[a]==cube[b]+cube[c]+cube[d]) printf("%d^3=%d^3+%d^3+%d^3\n",&a,&b,&c,&d);
                }
            }
        }
    }

    return 0;
}

/*
 * 讨厌的青蛙
 * poj1054
 */

int main(){

}

/*
 * 画家问题
 * poj1681
 */
void enumate()
{
	int c;
	bool success;
	for ( c=1; c<7; c++)
		press[1][c] = 0;
	while(guess()==false){		
		press[1][1]++;
		c = 1;
		while ( press[1][c] > 1 ) {
			press[1][c] = 0;
			c++;
			press[1][c]++;
		}
	}
	return;
}

int puzzle[6][8], press[6][8];
bool guess(){
	int c, r;
	for ( r=1; r<5; r++ )
		for ( c=1; c<7; c++ )
			press[r+1][c] = (puzzle[r][c]+press[r][c]+
			press[r-1][c]+ press[r][c-1]+press[r][c+1])%2;
	for(c=1; c<7; c++)
		if ( (press[5][c-1] + press[5][c] + press[5][c+1] +    
		    press[4][c]) % 2!= puzzle[5][c] )
			return(false);
	return(true);
}

void main()
{
	int cases, i, r, c;
	scanf("%d", &cases);
	for ( r=0; r<6; r++ )
		press[r][0] = press[r][7] = 0;
	for ( c=1; c<7; c++ )
		press[0][c] = 0;
	for (i=0; i<cases; i++){
		for(r=1; r<6; r++) 
			for(c=1; c<7; c++)
				scanf("%d", &puzzle[r][c]);
		
		enumate();
 
		printf("PUZZLE #%d\n", i+1);
		for(r=1;r<6;r++){
			for(c=1;c<7;c++)
				printf("%d ",press[r][c]);
			printf("\n");
		}			
	}
}


