#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicates(vector<int> arr){
  unordered_map<int,bool> visited;
  for(int i = 0; i < arr.size(); i++){
    visited[arr[i]] = true;
  }
  vector<int> noDuplicatesArr;
  for(auto const& p : visited){
    noDuplicatesArr.push_back(p.first);
  }
  return noDuplicatesArr;
}

int main() {
    int n,num;
    cin >> n;
    vector<int> arr, ans;
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    ans = removeDuplicates(arr);
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}