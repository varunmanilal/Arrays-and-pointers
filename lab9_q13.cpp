#include<iostream>
using namespace std;

int main(){
	char chuck[10]="baseballs";
	cout<<"Printing array 'chuck' using array indices: ";
        cout<<chuck;
	cout<<endl;
	cout<<"Printing array 'chuck' using pointers: ";
	char*p=chuck;
	for(int i=0;i<10;i++){
	        cout<<*(p+i);
	}
	cout<<endl;
	return 0;
  }
