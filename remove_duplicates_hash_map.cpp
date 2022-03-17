#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> removeDuplicates(vector<int> arr) {
  unordered_map<int,bool> visited;
  for(int i = 0; i < arr.size(); i++)
    visited[arr[i]] = true;
  vector<int> noDuplicatesArr;
  for(auto const& pair : visited)
    noDuplicatesArr.push_back(pair.first);
  return noDuplicatesArr;
}
int main() {
vector<int> vec1;
int element,size, dupNum ;
cout<<"Enter the size of your vector"<<endl ;
cin>>size;
for(int i=0;i<size;i++)
{

cin>>element;
vec1.push_back(element);
}
dupNum = removeDuplicates(vec1);
cout<< dupNum <<endl;

}

  