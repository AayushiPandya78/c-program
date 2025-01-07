#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter a num=";
	cin>>num;
	
	cout<<"table of "<<num<<":\n";
	for(i=1;i<=10; i++)
	{
		cout<<num<<" x "<< i <<" = "<<num*i<<endl;
	}
}
