//include the library file
#include<iostream>
using namespace std;
//the main function
int main(){
	char chuck[10]="baseballs";
	//using indices
	cout<<"Printing array 'chuck' using array indices: ";
        cout<<chuck;
	cout<<endl;
	//using pointers
	cout<<"Printing array 'chuck' using pointers: ";
	char*p=chuck;
	for(int i=0;i<10;i++){
	        cout<<*(p+i);
	}
	cout<<endl;
	return 0;
  }
