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
int suba(){
	cout<<"ーーーーーーーーーーーーーーーーーーーーーーーーーーー"<<endl;
	cout<<"EXPORT:";
	cout<<a<<endl;
	return 1;
}
int ad(){
 cout<<"｜";
	 return 1;
}
int Enter(){
		cout<<"ENTER:";
		return 1;
}

int main()
{
	int d;
	cout<<"ygzymmkdrj,aqua3 "<<endl;
	time_t now = time(0);
	char* dt = ctime(&now);
	fstream file;
	file.open("reply.txt" , ios::app | ios::in);
	file<<"START OF TIME by Execute Documents:";ad();
	file<<dt<<endl;

	cout << "启动时间：" << dt << endl; 
	do 
	{
	suba();ad();
	cout<<"退出10"<<endl;ad();
	cout<<"更新说明1"<<endl;ad();
	cout<<"关于2"<<endl;ad();
	cout<<"计算器3"<<endl;ad();
	cout<<"版本 aqua (class10)"<<endl;ad();
	Enter();
	cin>>a;
	switch(a)
	{

	case 1:
		suba();ad();
		cout<<"			更新说明　　"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25"<<endl;ad();
		cout<<"项目重启，使用C++编写"<<endl;ad();
		cout<<"aqua2 2024.6.10 12:00"<<endl;ad();
		cout<<"添加计算器，启动时间，输入输出"<<endl;ad();
		cout<<"aqua3 2024.6.23 23:26"<<endl;ad();
		cout<<"简要完善了计算器功能，添加日志文件"<<endl;ad();
		cout<<endl;ad();
		file<<"TYPE:1	START OF TIME:";
		now = time(0);
		dt = ctime(&now);
		file<<dt<<endl;

		continue;
	case 2:
		suba();ad();
		cout<<"			关于		"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 只是我的一个想法。"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 目前未知用途。"<<endl;ad();
		cout<<endl<<endl<<"AWEknl";ad();
		file<<"TYPE:2	START OF TIME:";
		now = time(0);
		dt = ctime(&now);
		file<<dt<<endl;
		continue;
	case 3:
		file<<"TYPE:3	START OF TIME:";
		now = time(0);
		dt = ctime(&now);
		file<<dt<<endl;
		suba();ad();
		cout<<"			计算器功能			"<<endl;ad();
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
				break;
		}
		continue;
	case 4:		
		continue;
	case 5:		continue;
	case 6:		continue;
	case 7:		continue;
	case 8:		continue;
	case 9:		continue;
	default :
	cout<<"exit";
	file<<"EXIT"<<endl;ad();
	file.close();
	break;
;}
	}
	while (a<10);
	file.close();
	return 0;
}
//AWEknl ygzymmkdrj,class10 last-aqua line 137