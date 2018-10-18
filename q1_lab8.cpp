#include <iostream>
using namespace std;
void func(int arr[],int i,int sum)
{
        while(i<5){
        sum=sum+arr[i];
        i++;
        }

cout<<sum<<endl;
}

int main()
{
   int arr[5]={23,67,41,3,14};
   func(arr,0,0);
   return 0;
}
