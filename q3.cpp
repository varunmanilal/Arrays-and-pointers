#include <iostream>
using namespace std;
int no(int arr[])
{
for(int i=0;i<7;i++)
	{
	for(int j=i;j<7;j++)
	{
	if(arr[i]>arr[j])
		{
		int a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
}
}
}
}
int no2(int arr[])
{
for(int i=0;i<7;i++)
	{
	for(int j=i;j<7;j++)
	{
	if(arr[i]<arr[j])
		{
		int a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
	}
}
}
}
int main()
{int n;int m;
int arr[7]={7,65,34,27,28,58,99};
cout<<"which element you would like to be printed in the order of largest to smallest"<<endl;
cin>>n;
no(arr);
 cout<<"The element in the order of smallest to largest"<<endl;
cin>>m;
no2(arr);
cout<<arr[n-1]<<endl;
 cout<<arr[m-1]<<endl;
return 0;
}

