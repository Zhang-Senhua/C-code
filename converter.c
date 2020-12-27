
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>
#include<set>
#include<list>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<sstream>
#include<iostream>
using namespace std;
#define Max 100
//进制权值
int power(int R,int turn)
{
	int ans = 1;
	while (turn--)
	{
		ans = ans*R;
	}
	return ans;
}
//**************************************基本操作函数**********************************//
//任意进制转十进制(All Radix to Int) 参数：任意进制字符串 进制R 作用：利用按权展开加和，返回十进制
long int Atoi(string &S, int R)
{
	long int ans = 0;
	for (int i=0;i < S.size();i++)//按权展开
	{
		ans += (S[i] - '0') * power(R, S.size() - i - 1);
	}
	/* 网上代码 不理解（已了解，举例，十六进制时t可能为f，那么f-'a'=5,再加10就是15了）	
	int ans=0;
	for (int i = 0;i<s.size();i++)
	{
		char t = s[i];
		if (t >= '0'&&t <= '9') ans = ans*radix + t - '0';
		else ans = ans*radix + t - 'a' + 10;
	}*/
	return ans;
}
//十进制转任意进制（Int to All Radix）参数：十进制数Num,进制R 作用：利用除留余数法，返回逆序的余数，即返回所要转换的进制数
string Itoa(int Num,int R)
{
  string remain="";
  int temp;
  do {
   temp = Num%R;//取余
   Num /= R;
   if (temp >= 10)
	   remain += temp - 10 + 'A';//任意进制为大于基数大于10的进制 例如，十六进制
   else remain += temp + '0';
  } while (Num);
  reverse(remain.begin(),remain.end());//逆序
  return remain;
}
//**************************************功能实现函数**********************************//
//菜单
void menu()
{
	cout << "************1.十进制转任意进制（除留余数）       2.任意进制转为十进制（按权展开）****" << endl;
	cout << "************3.十进制指定格式输出（二、八、十六)  4.利用流****************************" << endl;
	cout << "************5.退出" << endl;
}
void menu1()
{
	cout << "************1.十进制转二进制         2.十进制转八进制****" << endl;
	cout << "************3.十进制转十六进制       4.退出**************" << endl;
}
void menu2()
{
	cout << "************1.十进制转八进制         2.十进制转十六进制**************" << endl;
	cout << "************3.八进制转十进制         4.十六进制转十进制**************" << endl;
	cout << "************5.退出" << endl;
}
//十进制转任意进制 调用函数Itoa,自带的itoa
void ToAll()
{
	int num, R;char str[Max];
	cout << "请输入数和进制:" << endl;
	cin >> num >> R;
	cout << num << "转换为"<<R<<"进制为：" << Itoa(num,R) << endl;
	cout << "利用itoa函数:" <<itoa(num,str,R)<<endl;
}
//任意进制转十进制函数 调用Atoi函数，strtol函数
void ToDecimal(string &S)
{
	int R;
	cout << "请输入数和进制:" << endl;
	cin >>S>>R;
	cout <<S<<"转换为十进制为："<<Atoi(S, R)<<endl;
	//利用strtol函数 long int strtol(const char *nptr,char **endptr,int base)
	//参数，字符串,非法字符指针，字符串中的进制
	char nptr[Max],*stop;
	strcpy(nptr,S.c_str());//string类型转换为char
	cout<<S << "转换为十进制为（利用strtol函数）：" << strtol(nptr,&stop,R) << endl;
}
//作用：利用std的hex dec 以及 bitset，c语言的%o,%x
void ZhiDing()
{
	int num;int choice = 0;
	 cout << "请输入十进制数:" << endl;
	 cin >> num;
	while (1)
	{
		menu1();
		printf("请输入菜单序号：\n");
		scanf("%d", &choice);
		if (4 == choice) break;
		switch (choice)
		{
		case 1:cout << num <<"转为二进制（利用bitset）:"<<bitset<8>(num)<<endl;break;
		case 2: {
			      cout << num << "转为八进制（利用oct）:" << oct << num << endl;
				  printf("转为八进制（利用o）:%o\n",num);//8位，高位补0
		         }break;
		case 3: {
			       cout << num << "转为十六进制:" << hex << num << endl;
				   printf("转为十六进制（利用x）:%x\n", num);
		        }break;
		default:printf("输入错误！！！\n");break;
		}
	}
}
//作用：利用sstream头文件将数按某进制读入流，输出流
void Stream()
{
	string s;int choice = 0;
	stringstream ss;int num;
	while (1)
	{
		menu2();
		printf("请输入菜单序号：\n");
		scanf("%d", &choice);
		if (5 == choice) break;
		switch (choice)
		{
		case 1: {
			cout << "请输入一个数：" << endl;
			cin >> num;
			ss.clear();//清空一下，防止出错
			ss << oct << num;//十进制转为八进制读入流中
			ss >> s;//转换的八进制数放入字符串s中
			cout << num << "转为八进制（利用流）:" << s << endl;
		}break;
		case 2: {
			cout << "请输入一个数：" << endl;
			cin >> num;
			ss.clear();//清空一下，防止出错
			ss << hex << num;//十进制转为十六进制读入流中
			ss >> s;//转换的十六进制数放入字符串s中
			cout << num << "转为十六进制（利用流）:" << s << endl;
		}break;
		case 3: {
			cout << "请输入一个数：" << endl;
			cin >> s;
			ss.clear();//清空一下，防止出错
			ss << oct << s;//将s以八进制形式读入流中
			ss >> num;//以十进制输入到num中
			cout << s << "转为十进制（利用流）:" << num << endl;
		}break;
		case 4: {
			cout << "请输入一个数：" << endl;
			cin >> s;
			ss.clear();//清空一下，防止出错
			ss << hex << s;//将s以八进制形式读入流中
			ss >> num;//以十进制输入到num中
			cout << s << "转为十进制（利用流）:" << num << endl;
		}break;
		default:printf("输入错误！！！\n");break;
		}
	}
}
//主函数
int main()
{
	int choice = 0;
	string S;
	while (1)
	{
		menu();
		printf("请输入菜单序号：\n");
		scanf("%d", &choice);
		if (5 == choice) break;
		switch (choice)
		{
		case 1:ToAll();break;
		case 2:ToDecimal(S);break;
		case 3:ZhiDing();break;
		case 4:Stream();break;
		default:printf("输入错误！！！\n");break;
		}
	}
	return 0;}

