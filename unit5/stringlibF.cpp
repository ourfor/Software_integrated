/*
 * author: ourfor
 * date: 2018-10-20
 * description: 练习字符串的操作函数
 * copyright: gnu
 */

#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
	printf("Practice the library function of string\n");
	char hello[6],world[14];
    //the size of char array 'hello' is 6, but it can save the string is 5 
	strcpy(hello,"hello");
	strcpy(world,"world");
	printf("length:\t content:\tvalue:\n");
	printf("%d\t%s\thello\n",strlen(hello),hello);
	printf("%d\t%s\tworld\n",strlen(world),world);
	printf("strcpy到底干了什么？\n");
	printf("我们来看看调用这个函数前后，我们变量的左值和右值发生了什么变化:\n");
	printf("hello\t%s\t%d\n",hello,hello);
	printf("world\t%s\t%d\n",world,world);
	
	printf("******************\n");
	strcpy(world,"hello world");
	strcpy(hello,world);
	printf("length:\t content:\tvalue\n");
	printf("%d\t%s\thello\n",strlen(hello),hello);
	printf("%d\t%s\tworld\n",strlen(world),world);
	printf("*******************\n");
	printf("hello\t%s\t%d\n",hello,hello);
	printf("world\t%s\t%d\n",world,world);
	strcpy(hello,world);
	printf("可见在调用这个函数之后，变量的右值并没有发生变化，这一点是显而易见的，毕竟在变量声明的时候变量的右值就已经确定了，所以strcpy是将从这个地址开始的一段连续的存储空间里面存储值，而不考虑这个变量所能容纳的大小，那么我们的问题来了，如果我们把strcpy的第二个参数赋值为一个超过第一个变量所能存储的字符串长度的一个字符常量，例如strcpy(hello,\"hello world\"),然而并不能通过编译\n");
		
	return 0;
	
	
}
