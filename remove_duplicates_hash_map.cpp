#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> removeDuplicates(vector<int> arr){
  unordered_map<int,bool> visited;
  for(int i = 0; i < arr.size(); i++) 
    visited[arr[i]] = true;
  vector<int> noDuplicatesArr;
  for(auto const& pair : visited)
    noDuplicatesArr.push_back(pair.first);
  return noDuplicatesArr;
}

int main()
{
	int arr[] = {1,2,3,3,2,1,4,3,6,5,6};
	vector<int>noDuplicatesArr = removeDuplicates(arr,11);
	for(int i=0; i<noDuplicatesArr.size(); i++)
	{
		cout<<noduplicatesArr[i]<<endl;
	}
}