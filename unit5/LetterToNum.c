/*
 *author: ourfor
 *date: 2018-10-19
 *version: v1.0
 *description: https://bailian.openjudge.cn/practice/1002
 *copyright: zip
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//散列表
int list['Y'-'A'+1]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9};


int main(int argc,char* argv[]){

	printf("输入要测试的数据个数:\n");
	char input[16]="";
	printf("please input the words:\n");
	scanf("%s",input);
	
	//去掉"-",将字母和数字保存到aim当中
	char* p[7];
	for(int i=0;i<=6;i++){
		if(i==0) {
			p[0]=strtok(input,"-");
		}
		else {
			p[i]=strtok(NULL,"-");
		}
	}
	char aim[8]="";
	for(int j=0;j<7;j++){
		if(p[j]!=NULL) 
		{
			
			strcat(aim,p[j]);
		}
	}

	//printf("%s\n",aim);
	//将字母转换为数字
	for(int k=0;k<7;k++){
		if(aim[k]-'0'>9) aim[k]='0'+list[aim[k]-'A'];
	}
	char aim_num[9]="";
	for(k=0;k<=2;k++) aim_num[k]=aim[k]; 
	aim_num[3]='-';
	for(k=3;k<7;k++) aim_num[k+1]=aim[k];

	printf("%s\n",aim_num);




	return 0;
}
