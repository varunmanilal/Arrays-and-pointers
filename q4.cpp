//the library file
#include<iostream>
using namespace std;
//to merge the 2 arrays
void f(int a[],int b[], int c[])
{

	for(int i=0; i<12; i++)
	{
	if(i<7)	c[i]=a[i];
	else	c[i]=b[i-7];
	
	cout << c[i] << "   ";
	}

}

//the main function
int main()
{

int a[7] = {1,2,3,4,5,6,7};
int b[5] = {8,9,10,11,12};
int c[12];

f(a,b,c);

cout << endl;

return 0;
}
