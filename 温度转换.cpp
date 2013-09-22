#include <iostream>
using namespace std;
int main()
{
	double c,f;  int a;
	cout<<"华氏温度转换为摄氏温度输入1，摄氏温度转换为华氏温度输入2。"<<endl;
	cin>>a；

		if (a==1)
		{
			cout<<"请输入华氏温度:"<<endl;
			cin>>f;
			c = (5/9.0)*(f-32);
			cout<<"对应的摄氏温度为:"<<c<<endl;

		}
		else if (a==2)
		{
			cout<<"请输入摄氏温度:"<<endl;
			cin>>c;
		f = (9/5.00)*c + 32;
			cout<<"对应的华氏温度为:"<<HS<<endl;

		}
		else
		{
			cout<<"输入数据错误，请输入1或2"<<endl;
		}
		 system("pause");
   return 0;
   }
