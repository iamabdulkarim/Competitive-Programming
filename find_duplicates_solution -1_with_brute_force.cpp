#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int findDuplicate(vector<int>arr){
  for(int i = 0; i < arr.size(); i++){
    for(int j = i+1; j < arr.size(); j++){
      if(arr[i] == arr[j]) return arr[i];
    }
  }
  return 0;
}
//void display(vector<int> &arr)
//{
//	for(int i=0; i<arr.size();i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
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
dupNum = findDuplicate(vec1);
cout<< dupNum <<endl;

}