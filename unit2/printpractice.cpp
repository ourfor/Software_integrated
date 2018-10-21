/*
 * author: ourfor
 * date: 2018-10-21
 * description: 练习C语言的格式化输入和输出
 * copyright: sagit
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	double d_x = 5.4;
	d_x = ceil(d_x);
	//printf("%0-lf",d_x);
	double score_math = 0, score_english = 0, score_chinese = 0;
	printf("请输入你的数学、英语和语文的分数（输入样例：76,85,69）：\n");
	scanf("%lf,%lf,%lf", &score_math,&score_english,&score_chinese);

	//计算平均分
	double average_score = 0;
	average_score = (score_math + score_english + score_chinese) / 3;
	printf("你的平均分为：%-0lf\n", average_score);

	printf("请输入你的电话号码，输入格式按照457-7570-0565的样例输入:\n");

	char phone_number[14]="";
	scanf("%s", phone_number);
	char *part1, *part2, *part3;

	part1 = strtok(phone_number, "-");
	part2 = strtok(NULL, "-");
	part3 = strtok(NULL, "-");

	printf("你的电话号码是:\n");
	strcpy(phone_number, part1);
	strcat(phone_number, part2);
	strcat(phone_number, part3);

	printf("%s\n", phone_number);



	return 0;
}
