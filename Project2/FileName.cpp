#include <iostream>
#include <fstream>

using namespace std;

//#define comparison a<b
//#define in cin>>a 
//#define in2 cin>>b
//void main()
//{
//	int a, b;
//	cout << "Enter a="; in;
//	cout << "Enter b="; in2;
//	if (comparison == true)
//		cout << a << "-max\n" << b << "-min" << endl;
//	else
//		cout << b << "-min\n" << a << "-max" << endl;
//}
int a, b, c, p, s;
#define in cin>>a 
#define in2 cin>>b
#define in3 cin>>c
#define P p=a+b+c
#define S s=p*(p-a)*(p-b)*(p-c)

int main()
{
	
	cout << "Enter a="; in;
	cout << "Enter b="; in2;
	cout << "Enter c="; in3;
	P;
	S;
	cout <<"P="<<p<<"\nS="<<s;


}