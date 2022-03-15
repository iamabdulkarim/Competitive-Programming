#include<iostream>
#include<string>
using namespace std;


char firstRepeatingCharacter(string str){
  for(int i = 0; i < str.length(); i++){
    for(int j = 0; j < i; j++){
      if(str.at(i) == str.at(j))
        return str.at(i);
    }
  }
  return '\0';
}

int main()
{
	string s;
	cin>>s;
	cout<< firstRepeatingCharacter(s);
}