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
	cout<<"�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`";
	cout<<"EXPORT:";
	cout<<a<<endl;
	return 1;
}
int ad()
{
 cout<<"��";
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
	cout << "����ʱ�䣺" << dt << endl;

	while (a<10)
	{
	a=0;
	suba();
	cout<<"	���͡������ɡ��Ρ�"<<endl;ad();
	cout<<"�˳�10"<<endl;ad();
	cout<<"����˵��1"<<endl;ad();
	cout<<"����2"<<endl;ad();
	cout<<"������3"<<endl;ad();
	cout<<"�����־�ļ�4"<<endl;ad();
	cout<<"�汾 aqua (class10)"<<endl;ad();
	Enter();
	cin>>a;
	switch(a)
	{
	case 1:
		suba();ad();
		cout<<"			����˵������	"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25"<<endl;ad();
		cout<<"��Ŀ������ʹ��C++��д"<<endl;ad();
		cout<<"aqua2 2024.6.10 12:00"<<endl;ad();
		cout<<"��Ӽ�����������ʱ�䣬�������"<<endl;ad();
		cout<<"aqua3 2024.6.23 23:26"<<endl;ad();
		cout<<"��Ҫ�����˼��������ܣ������־�ļ�"<<endl;ad();
		cout<<"aqua4 2024.6.24 20:46"<<endl;ad();
		cout<<"��������־�ļ�"<<endl;ad();
		cout<<"aqua5 2024.6.25 9:46"<<endl;ad();
		cout<<"�޸�BUG#1,�Ż�����"<<endl;ad();
		cout<<"aqua6 2024.6.25 19:10"<<endl;ad();
		cout<<"�����Ŀͼ������ҳ��"<<endl;ad();
		cout<<"		�£գ�		"<<endl;ad();
		cout<<"BUG#1�������벻������ʱ���᲻��ϵ��ظ�MAINҳ��."<<endl;ad();
		cout<<endl;
		file<<"TYPE:1	START OF TIME:";
		jikan();
		file<<dt<<endl;
		continue;
	case 2:
		suba();ad();
		cout<<"			����		"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua ֻ���ҵ�һ���뷨��"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua Ŀǰδ֪��;��"<<endl;ad();
		cout<<"By��AWEknl and..."<<endl<<endl;
		cout<<"���w���������w���������w���w���w�����������������������w�����w�w�w���������w����";
		cout<<"���w�����w���w�w�w�����w���w���w���w���w�����w���w���������w�w�w�w�����w���w�w��";
		cout<<"�������������w�w�����w�w�������w���w���w�����w���w�������w�w�w�������������w�w��";
		cout<<"�w�w���w�w���w�����w�w�w�w�w���w���w���w�����w���w���������w�w���w�������w�w�w��";
		cout<<"�������������w���������w�������w���w���w�����w���w�����w�����w���������w���w����";
		cout<<"							���ѣգ����У������"<<endl;
		file<<"TYPE:2	START OF TIME:";
		jikan();
		file<<dt<<endl;
		continue;
	case 3:
		file<<"TYPE:3	START OF TIME:";
		jikan();
		file<<dt<<endl;
		suba();ad();
		cout<<"			������			"<<endl;ad();
		cout<<"�������һ����:";
		cin>> b;ad();
		cout<<"������ڶ�����:";
		cin>> c;ad();
		cout<<"+(��1) -(��2) *(��3) /(��4) **(�˷�5)[�˷�ʹ�õ�һ����] :";
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
		cout<<"�������"<<endl;ad();
		out.open("reply.txt", ios::trunc);
		cout<<"���"<<endl;
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