#include "stdafx.h"
#include "targetver.h"
#include <iostream>
#include <ctime> 
#include <fstream>
#include <cstdio>
#pragma warning(disable: 4996)
using namespace std;
int a;
float b ,c;
char* dt;
time_t now;
int suba()
{
	cout<<"ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー";
	cout<<"EXPORT:";
	cout<<a<<endl;
	return 1;
}
int ad()
{
 cout<<"｜";
	 return 1;
}
int Enter()
{
		cout<<"ENTER:";
		return 1;
}
int jikan()
{		
	now = time(0);
	dt = ctime(&now);
	return 1;
}
int main()
{
	cout<<"ygzymmkdrj,aqua6"<<endl;

	int d;
	ofstream out;
	ofstream file;
	string file_name="reply.txt";
	
	jikan();
	file.open("reply.txt" , ios::app | ios::in);
	file<<"START OF TIME by Execute Documents:";
	file<<dt<<endl;
	cout << "启动时间：" << dt << endl;

	while (a<10)
	{
	a=0;
	suba();
	cout<<"	「Ｍ　Ａ　Ｉ　Ｎ」"<<endl;ad();
	cout<<"退出10"<<endl;ad();
	cout<<"更新说明1"<<endl;ad();
	cout<<"关于2"<<endl;ad();
	cout<<"计算器3"<<endl;ad();
	cout<<"清空日志文件4"<<endl;ad();
	cout<<"版本 aqua (class10)"<<endl;ad();
	Enter();
	cin>>a;
	switch(a)
	{
	case 1:
		suba();ad();
		cout<<"			更新说明　　	"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25"<<endl;ad();
		cout<<"项目重启，使用C++编写"<<endl;ad();
		cout<<"aqua2 2024.6.10 12:00"<<endl;ad();
		cout<<"添加计算器，启动时间，输入输出"<<endl;ad();
		cout<<"aqua3 2024.6.23 23:26"<<endl;ad();
		cout<<"简要完善了计算器功能，添加日志文件"<<endl;ad();
		cout<<"aqua4 2024.6.24 20:46"<<endl;ad();
		cout<<"添加清空日志文件"<<endl;ad();
		cout<<"aqua5 2024.6.25 9:46"<<endl;ad();
		cout<<"修复BUG#1,优化代码"<<endl;ad();
		cout<<"aqua6 2024.6.25 19:10"<<endl;ad();
		cout<<"添加项目图，完善页面"<<endl;ad();
		cout<<"		ＢＵＧ		"<<endl;ad();
		cout<<"BUG#1：当输入不是数字时，会不间断地重复MAIN页面."<<endl;ad();
		cout<<endl;
		file<<"TYPE:1	START OF TIME:";
		jikan();
		file<<dt<<endl;
		continue;
	case 2:
		suba();ad();
		cout<<"			关于		"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 只是我的一个想法。"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 目前未知用途。"<<endl;ad();
		cout<<"By；AWEknl and..."<<endl<<endl;
		cout<<"█╳████╳████╳█╳█╳███████████╳██╳╳╳████╳██";
		cout<<"█╳██╳█╳╳╳██╳█╳█╳█╳█╳██╳█╳████╳╳╳╳██╳█╳╳█";
		cout<<"██████╳╳██╳╳███╳█╳█╳██╳█╳███╳╳╳██████╳╳█";
		cout<<"╳╳█╳╳█╳██╳╳╳╳╳█╳█╳█╳██╳█╳████╳╳█╳███╳╳╳█";
		cout<<"██████╳████╳███╳█╳█╳██╳█╳██╳██╳████╳█╳██";
		cout<<"							ＡＱＵＡ　Ｐｒｏｊｅｃｔ"<<endl;
		file<<"TYPE:2	START OF TIME:";
		jikan();
		file<<dt<<endl;
		continue;
	case 3:
		file<<"TYPE:3	START OF TIME:";
		jikan();
		file<<dt<<endl;
		suba();ad();
		cout<<"			计算器			"<<endl;ad();
		cout<<"请输入第一个数:";
		cin>> b;ad();
		cout<<"请输入第二个数:";
		cin>> c;ad();
		cout<<"+(加1) -(减2) *(乘3) /(除4) **(乘方5)[乘方使用第一个数] :";
		cin>> d;ad();
		switch (d)
		{
			case 1:		
				cout<<"result:";
				cout<<c+b<<endl;
				continue;
			case 2:		
				cout<<"result:";
				cout<<c-b<<endl;
				continue;
			case 3:		
				cout<<"result:";
				cout<<c*b<<endl;
				continue;
			case 4:		
				cout<<"result:";
				cout<<c/b<<endl;
				continue;
			case 5:		
				cout<<"result:";
				cout<<b*b<<endl;
				continue;
			default:
				cout<<"No result"<<endl;
		}
		continue;
	case 4:		
		suba();ad();
		cout<<"正在清空"<<endl;ad();
		out.open("reply.txt", ios::trunc);
		cout<<"完成"<<endl;
		continue;
	case 5:		continue;
	case 6:		continue;
	case 7:		continue;
	case 8:		continue;
	case 9:		continue;
	default :
	cout<<"exit";
	file<<"EXIT:	";ad();
	jikan();
	file<<dt<<endl;
	file.close();
	break;
	}
	break;
	}
	file.close();
	return 0;
}
//AWEknl ygzymmkdrj,class10 last-aqua line 166