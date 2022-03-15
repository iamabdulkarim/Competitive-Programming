#include<iostream>
#include<bits/stdc++.h>

#include<string>
using namespace std;

char firstRepeatingCharacter(string str){
  unordered_map<char,bool> visited;
  for(char const& ch : str){
    if(visited.find(ch) != visited.end()) return ch;
    else visited[ch] = true;
  }
  return '\0';
}

int main()
{
	string s;
	cin>>s;
	cout<< firstRepeatingCharacter(s);
}