//taking up the library files
#include<iostream>
using namespace std;
//The main files
int main(){
	char str[20];
	char*p;
	cout<<"Input about 10 characters of string\n";
	cin >> str;
	p=str;
	for(int i=0;*(p+i)!='\0';i++){
		cout<<p+i<<endl;
	}
	return 0;	
}
