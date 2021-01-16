
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>

//#define num2 2;
//int a;
////int d;
////double  c;
//int main() {
	//int a=0;

	/*printf("----------这是一个十进制转化为二进制的转换器------------");
	printf("请输入您需要转化的数");
	scanf("%d", &a);
	if (a % 2 == 0) {
		c =(int ) ((a / 2)-0.5);
		printf("%d", &c);


	}*/
	/*else {

		a = a + 1;
	}
	printf("%d的余数为%d", a, c);

	while  (d > 0) {

	}
		*/
		/*int num;
		int a[16];
		int i = 1, j;
		scanf("% d", &num);
		for (j = 0; j < 16; j++) {
			i = num % num2;
			num = num / num2;
			a[j] = i;
			printf("该数的二进制为：");
		}
			for (j = 15; j >= 0;j--) {
				printf("%d", a[j]);
				if (j % 4 == 0)
					printf(" ");
				}

			return 0;*/
	
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	int  i = pow(2,a) + 1;//行列数
//	char d = '+';
//	
//
//
//	for (int b = 1; b <= i;  b++) {//行数开始循环 
//		for (int k = 1; k <= (i + 1) / 2; k++) {
//			printf(" ");
//
//		}
//		printf("%c\n", d);
//
//	}
//	return 0;
//}
	/*
	打印菱形
	
	*/
//
//int main() {
//	char a[] = "abc";//其实该字符窜已经包含\0在里面。
//	char b[] = { 'a','b','c','\0' };//加入0表示，终止字符串
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0;
//
//}

// int MAX(int a, int b) {
//	if (a > b) {
//		
//		return a;
//		/*printf("较大值为：%d\n", a);*/
//	}
//	else
//	{
//		return b;
//		/*printf("较大值是：%d\n", b);*/
//	}
//	
//}
//
//int main() {
//	int num1=0;
//	int num2=0;
//
//	printf("請輸入兩個數！");//////有问题
//	scanf("%d%d\n", &num1, &num2);
//	int max = 0;
//	printf("%d%d\n", num1, num2);
//	max=MAX(num1,num2);
//	printf("max為：%d\n", max);
//	return 0;


	/*int num1 = 10;
	int  num2 = 20;
	if (num1 > num2) {
		printf("较大值为：%d\n", num1);

	}
	else
	{
		printf("较大值是：%d\n", num2);

	}
*/

/*int function2(int a[], int b, int e)
{
	if (e - b <= 1) return abs(a[b] - a[e]) >= 3 ? a[b] : a[e];
	int l = 0, r = 0;
	l = function2(a, b, b + (e - b) / 2);
	if (l % 2 == 0)
		r = function2(a, b + (e - b) / 2 + 1, e);
	else
		return l;
	if (l | r)
		return l | r;
	else
		return r;
}

int main()
{
	int a[] = { 10,5,8,4,5,20,2,3 };
	cout << function2(a, 0, sizeof(a) / sizeof(1)) << endl;
	int b[] = { 3,5,8,4,8,30,2,3 };
	cout << function2(b, 0, sizeof(b) / sizeof(1)) << endl;
	return 0;
}*/
//给出一个整数数组，请在数组中找出两个加起来等于目标值的数，
//你给出的函数twoSum 需要返回这两个数字的下标（index1，index2），需要满足 index1 小于index2.。注意：下标是从1开始的
//假设给出的数组中只存在唯一解
//例如：
//给出的数组为{ 20, 70, 110, 150 }, 目标值为90
//输出 index1 = 1, index2 = 2
//输入
//复制
//[3, 2, 4], 6
//返回值
//复制
//[2, 3]
//int twoSum(int index1, int index2) {
//	return index1;
//	return index2;
//
//
//
//
//}
//
//int main() {
//	int* p;
//	int n, i = 0;
//	scanf("%d", &n);
//	printf("请输入%d个数：\n", n);
//	p = (int*)malloc(n * sizeof(int));
//	for (; i < n; i++) {
//		scanf("%d", p + i);
//	}
//	printf("输入的数字有：");
//	for (i =0 ; i < n; i++) 
//		printf("%d", *(p + i));
//		
//
//
//		
//	puts("");
//
//	return 0;
//	
//}
//题目描述
//输入一个字符，用它构造一个三角形金字塔。
//输入描述 :
//输入只有一行，一个字符。
//输出描述 :
//该字符构成的三角形金字塔。
//示例1
//输入
//复制
//1
//输出
//复制
/*   1
//  1 1
// 1 1 1
//1 1 1 1
/1 1 1 1 1*/
//#include <windows.h>
//int main() {
//
//	char c;
//	printf("请输入一个需要打印的字符：");
//	scanf("%c", &c);
//	int a = 5;//定义行数
//	int b = 9;//定义列数
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= 5 - i; j++) {
//
//			printf("0");
//			Sleep(1000);
//
//
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//打印菱形奇数行
//#include <stdio.h>
//#include<windows.h>
//int i;//定义行数
//int j;//列数
//int k;
//int main(){
//	printf("请输入需要打印的行数（奇数）");
//	scanf("%d", &k);//扫描行数
//	while (k % 2 == 0) {
//		printf("请输入正确的行数（奇数）");
//		scanf("%d", &k);//扫描行数
//		
//	}
//	i = k;
//	j = ((i + 1) / 2);
//	for (int a = 1; a <= (i + 1) / 2;a++) {//打印上半部分
//		for (int b = 1; b <= ((i + 1) / 2) + a - 1; b++) {
//			
//			if (b <j + 1 - a) {
//
//				printf(" ");
//			}
//			else {
//					printf("*");
//					Sleep(10);
//				}
// 
//
//			
//			
//		}
//		printf("\n");
//		
//	}
//	for (int d = j + 1; d <= k;d++) {//打印下半部分
//		for (int c = 1; c <= (k-(d - j)); c++) {
//			if (c <= d - j) {
//				printf(" ");
//
//			}
//			else
//			{
//				printf("*");
//				Sleep(10);
//			}
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//
//
//
//
//}

//函数打印
//#include <stdio.h>
//#define ABS(x) ((x) > 0 ? (x) : -(x))
//
//int main()
//{
//	double a = 8, b = 10; /*菱形宽度和高度的一半*/
//	int i, j;
//	for (i = -a; i <= a; ++i) {
//		for (j = -b; j <= b; ++j)
//			putchar((ABS(i) / a + ABS(j) / b > 1) ? ' ' : '*');
//		putchar('\n');
//	}
//	return 0;
//}
//冒泡排序
//#pragma warning(disable:4996)
//int arr[];
//int i;
//
//int main() {
//	printf("请输入需要排序的个数：");
//	scanf_s("%d", &i);
//	printf("请输入需要排序的数：");
//	
//	for (int a = 1; a <= i;a++) {
//
//		scanf_s("%d", &arr[i]);
//
//	}
//	int b = 2;
//	
//	return 0;
//}
//
//
//	
//
//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>

//#define num2 2;
//int a;
////int d;
////double  c;
//int main() {
	//int a=0;

	/*printf("----------这是一个十进制转化为二进制的转换器------------");
	printf("请输入您需要转化的数");
	scanf("%d", &a);
	if (a % 2 == 0) {
		c =(int ) ((a / 2)-0.5);
		printf("%d", &c);


	}*/
	/*else {

		a = a + 1;
	}
	printf("%d的余数为%d", a, c);

	while  (d > 0) {

	}
		*/
		/*int num;
		int a[16];
		int i = 1, j;
		scanf("% d", &num);
		for (j = 0; j < 16; j++) {
			i = num % num2;
			num = num / num2;
			a[j] = i;
			printf("该数的二进制为：");
		}
			for (j = 15; j >= 0;j--) {
				printf("%d", a[j]);
				if (j % 4 == 0)
					printf(" ");
				}

			return 0;*/
	
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	int  i = pow(2,a) + 1;//行列数
//	char d = '+';
//	
//
//
//	for (int b = 1; b <= i;  b++) {//行数开始循环 
//		for (int k = 1; k <= (i + 1) / 2; k++) {
//			printf(" ");
//
//		}
//		printf("%c\n", d);
//
//	}
//	return 0;
//}
	/*
	打印菱形
	
	*/
//
//int main() {
//	char a[] = "abc";//其实该字符窜已经包含\0在里面。
//	char b[] = { 'a','b','c','\0' };//加入0表示，终止字符串
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0;
//
//}

// int MAX(int a, int b) {
//	if (a > b) {
//		
//		return a;
//		/*printf("较大值为：%d\n", a);*/
//	}
//	else
//	{
//		return b;
//		/*printf("较大值是：%d\n", b);*/
//	}
//	
//}
//
//int main() {
//	int num1=0;
//	int num2=0;
//
//	printf("請輸入兩個數！");//////有问题
//	scanf("%d%d\n", &num1, &num2);
//	int max = 0;
//	printf("%d%d\n", num1, num2);
//	max=MAX(num1,num2);
//	printf("max為：%d\n", max);
//	return 0;


	/*int num1 = 10;
	int  num2 = 20;
	if (num1 > num2) {
		printf("较大值为：%d\n", num1);

	}
	else
	{
		printf("较大值是：%d\n", num2);

	}
*/

/*int function2(int a[], int b, int e)
{
	if (e - b <= 1) return abs(a[b] - a[e]) >= 3 ? a[b] : a[e];
	int l = 0, r = 0;
	l = function2(a, b, b + (e - b) / 2);
	if (l % 2 == 0)
		r = function2(a, b + (e - b) / 2 + 1, e);
	else
		return l;
	if (l | r)
		return l | r;
	else
		return r;
}

int main()
{
	int a[] = { 10,5,8,4,5,20,2,3 };
	cout << function2(a, 0, sizeof(a) / sizeof(1)) << endl;
	int b[] = { 3,5,8,4,8,30,2,3 };
	cout << function2(b, 0, sizeof(b) / sizeof(1)) << endl;
	return 0;
}*/
//给出一个整数数组，请在数组中找出两个加起来等于目标值的数，
//你给出的函数twoSum 需要返回这两个数字的下标（index1，index2），需要满足 index1 小于index2.。注意：下标是从1开始的
//假设给出的数组中只存在唯一解
//例如：
//给出的数组为{ 20, 70, 110, 150 }, 目标值为90
//输出 index1 = 1, index2 = 2
//输入
//复制
//[3, 2, 4], 6
//返回值
//复制
//[2, 3]
//int twoSum(int index1, int index2) {
//	return index1;
//	return index2;
//
//
//
//
//}
//
//int main() {
//	int* p;
//	int n, i = 0;
//	scanf("%d", &n);
//	printf("请输入%d个数：\n", n);
//	p = (int*)malloc(n * sizeof(int));
//	for (; i < n; i++) {
//		scanf("%d", p + i);
//	}
//	printf("输入的数字有：");
//	for (i =0 ; i < n; i++) 
//		printf("%d", *(p + i));
//		
//
//
//		
//	puts("");
//
//	return 0;
//	
//}
//题目描述
//输入一个字符，用它构造一个三角形金字塔。
//输入描述 :
//输入只有一行，一个字符。
//输出描述 :
//该字符构成的三角形金字塔。
//示例1
//输入
//复制
//1
//输出
//复制
/*   1
//  1 1
// 1 1 1
//1 1 1 1
/1 1 1 1 1*/
//int main() {
//
//	char c;
//	scanf("%c", &c);
//	int a = 5;//定义行数
//	int b = 9;//定义列数
//	for (int i = 1; i <= a; i++) {
//		if (i % 2 != 0) {
//			for (int j = 1; j <= b; j++) {
//
//			}
//		}
//		else {
//			for (int j = 1; j <= b; j++) {
//
//
//			}
//
//		}
//
//	}
//
//}
//打印菱形奇数行
//#include <stdio.h>
//#include<windows.h>
//int i;//定义行数
//int j;//列数
//int k;
//int main() {
//	printf("请输入需要打印的行数（奇数）");
//	scanf("%d", &k);//扫描行数
//	while (k % 2 == 0) {
//		printf("请输入正确的行数（奇数）");
//		scanf("%d", &k);//扫描行数
//
//	}
//	i = k;
//	j = ((i + 1) / 2);
//	for (int a = 1; a <= (i + 1) / 2; a++) {//打印上半部分
//		for (int b = 1; b <= ((i + 1) / 2) + a - 1; b++) {
//
//			if (b < j + 1 - a) {
//
//				printf(" ");
//			}
//			else {
//				printf("*");
//				Sleep(10);
//			}
//
//
//
//
//		}
//		printf("\n");
//
//	}
//	for (int d = j + 1; d <= k; d++) {//打印下半部分
//		for (int c = 1; c <= (k - (d - j)); c++) {
//			if (c <= d - j) {
//				printf(" ");
//
//			}
//			else
//			{
//				printf("*");
//				Sleep(10);
//			}
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//
//
//
//
//}
//函数打印
//#include <stdio.h>
//#define ABS(x) ((x) > 0 ? (x) : -(x))
//
//int main()
//{
//	double a = 8, b = 10; /*菱形宽度和高度的一半*/
//	int i, j;
//	for (i = -a; i <= a; ++i) {
//		for (j = -b; j <= b; ++j)
//			putchar((ABS(i) / a + ABS(j) / b > 1) ? ' ' : '*');
//		putchar('\n');
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main() {
//
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//
//
//}
int main()
{
	int ret = 0;

	char password[20] = { 0 };
	scanf("%s", password);
	printf("请确认密码Y/N");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("放弃确认\n");

	}

}





	



