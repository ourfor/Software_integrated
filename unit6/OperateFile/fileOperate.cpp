#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc,char * argv[]){
	FILE *fh;
	printf("输入你想打开的文件的绝对路径:");
	char filepath[100];
	scanf("%s",filepath);
	if((fh=fopen(filepath,"w"))==NULL) {
		printf("File not exist or file type is not supported\n");
		exit(0);
	}
	char * writeFile;
	for(int i=0;i<=10;i++){
		if(i==0){
			printf("输入你先写进文件的内容:");
			cin.get();
		}
		else printf("%d:",i);
		cin.getline(writeFile,99,'\n');
		strcat(writeFile,"\n");
		fputs(writeFile,fh);
	}

	fclose(fh);

	return 0;
}
