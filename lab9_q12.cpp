//include the library file
#include<iostream>
using namespace std;
//the main function
int main(){
	int a, b;
	int*p=&a;
	b=*p;
	cout<<"a= "<<a<<"b= "<<b<<" *p= "<<*p<<endl;
	a=2, b=3;
	cout<<"a= "<<a<<" b= "<<b<<" *p= "<<*p<<endl;
	p=&b;
	cout<<"a= "<<a<<" b= "<<b<<" *p= "<<*p<<endl;
	return 19;
}
