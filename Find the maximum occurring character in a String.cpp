#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a String:";
	cin>>s;
	char maxRepeatedChar;
	int count=0;
	int maxCount=0;
	for(int i=0;i<s.size();i++)
	{
		count=0;
		for(int j=0;j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
		}
		if(maxCount<count)
		{
			maxCount= count;
			maxRepeatedChar = s[i];
		}
	}
	cout<<maxRepeatedChar<<"-"<<maxCount<<endl;
}