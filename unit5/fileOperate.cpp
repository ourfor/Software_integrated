#include <cstdio> 
#include <cstdlib> 
#include <cstring>
#include <iostream>



int main(int argc,char * argv[]){ 
	printf("输入正确的文件路径:"); 
	FILE * fp;
	char filepath[100]="";
	scanf("%s",filepath);
	if((fp=fopen(filepath,"w"))==NULL) {
		printf("文件不存在,或者文件类型不收支持\n");
		exit(0);
	}
	
	char writeToFile[100];
	for(int i=0;i<=10;i++){
		if(i==0) printf("输入标题(回车确认后输入文件内容):");
		else{
			printf("%d:",i);
		} 
		std::cin.getline(writeToFile,99,'\n');
		strcat(writeToFile,"\n");
		std::cout << writeToFile;
		fputs(writeToFile,fp);
	}

	fclose(fp);
	
}
