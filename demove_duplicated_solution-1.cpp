#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicates(vector<int> arr) {
	vector<int> noDuplicatesArr;
	for(int i = 0; i < arr.size(); i++)
		if(find(noDuplicatesArr.begin(), noDuplicatesArr.end(), arr[i]) == noDuplicatesArr.end())
			noDuplicatesArr.push_back(arr[i]);
	return noDuplicatesArr;
}
int main() {
	int a[] = {1,2,3,3,2,1,4,3,6,5,6}
	          vector<int>noDuplicatesArr = removeDuplicates(a,11);
	for(int i=0; i<noDuplicatesArr.size(); i++) {
		cout<<noduplicatesArr[i]<<endl;
	}
}