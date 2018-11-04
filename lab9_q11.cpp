//open the library file
#include<iostream>
using namespace std;
//take up the main function
int main(){
	int a=10;
	float b=7.7;
	double c=3.1445378;
	bool d=false;
	char e='!';
	int* a1=&a;
	float* b1=&b;
	double* c1=&c;
	bool* d1=&d;
	char* e1=&e;
  //to print out the sizes of int, float, double, bool, char.
	cout <<"Size of int a: "<<sizeof(a)<<" bytes. Size of pointer a: "<<sizeof(a1)<<endl
		<<"Size of float b: "<<sizeof(b)<<" bytes. Size of pointer b: "<<sizeof(b1)<<endl
		<<"Size of double c: "<<sizeof(c)<<" bytes. Size of pointer c: "<<sizeof(c1)<<endl
		<<"Size of bool d: "<<sizeof(d)<<" bytes. Size of pointer d: "<<sizeof(d1)<<endl
		<<"Size of char e: "<<sizeof(e)<<" bytes. Size of pointer e: "<<sizeof(e1)<<endl;
	return 33;
}
