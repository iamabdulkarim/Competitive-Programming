#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<int,int> removeDuplicates(vector<int> arr) {

  map<int,int> numCount;

  for(int i = 0; i < arr.size(); i++){
    numCount[arr[i]]++;
  }
  return numCount;
}

int main() {
    int n,num;
    cin >> n;
    vector<int> arr;
    map<int,int> numArr;
    while(1){
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        numArr = removeDuplicates(arr);

        for(auto const& x : numArr)
        {
            cout<< x.first << " ";
        }
        cout<<endl;
    }

    return 0;
}