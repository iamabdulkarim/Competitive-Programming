#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,flarg,slarg,tlarg,arr[50];
	cout<<"Enter the element you want to enter:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element"<<(i+1)<<" :";
		cin>>arr[i];
	}
	flarg=slarg=tlarg=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>flarg)
		{
			tlarg=slarg;
			slarg=flarg;
			flarg=arr[i];
		}
		else if(arr[i]>slarg)
		{
			tlarg=slarg;
			slarg=arr[i];
		}
		else if(arr[i]>tlarg)
		{
			tlarg=arr[i];
		}
	}
	cout<<"First largest Element Is :"<<flarg<<endl;
	cout<<"Second largest Element Is :"<<slarg<<endl;
	cout<<"Third largest Element Is :"<<tlarg<<endl;
	return 0;
}