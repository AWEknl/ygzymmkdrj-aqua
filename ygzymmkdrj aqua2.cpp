#include "stdafx.h"
#include "targetver.h"
#include <iostream>
#include <ctime> 
using namespace std;
int a;
float b ,c;

int suba(){
	cout<<"�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`�`"<<endl;
	cout<<"EXPORT:";
	cout<<a<<endl;
	return 1;
}
int ad(){
 cout<<"��";
	 return 1;
}
int Enter(){
		cout<<"ENTER:";
		return 1;
}

int main(){
	int d;
	cout<<"ygzymmkdrj,aqua2 "<<endl;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout << "����ʱ�䣺" << dt << endl;
	do 
	{
	suba();ad();
	cout<<"�˳�10"<<endl;ad();
	cout<<"����˵��1"<<endl;ad();
	cout<<"����2"<<endl;ad();
	cout<<"������3"<<endl;ad();
	cout<<"�汾 aqua (class10)"<<endl;ad();
	Enter();
	cin>>a;
	switch(a)
	{

	case 1:
		suba();ad();
		cout<<"			����˵������"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25"<<endl;ad();
		cout<<"��Ŀ������ʹ��C++��д"<<endl;ad();
		cout<<"aqua2 2024.6.10 12:00"<<endl;ad();
		cout<<"��Ӽ�����������ʱ�䣬�������"<<endl;ad();
		cout<<endl;ad();
		continue;
	case 2:
		suba();ad();
		cout<<"			����		"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua ֻ���ҵ�һ���뷨��"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua Ŀǰδ֪��;��"<<endl;ad();
		cout<<endl<<endl<<"AWEknl";ad();
		continue;
	case 3:		
		suba();ad();
		cout<<"			����������			"<<endl;ad();
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
		}
		continue;
	case 4:		continue;
	case 5:		continue;
	case 6:		continue;
	case 7:		continue;
	case 8:		continue;
	case 9:		continue;
	default :
	cout<<"exit";
	break;
;}
	}
	while (a<10);
	return 0;
}
//AWEknl ygzymmkdrj,class10 last-aqua line 106