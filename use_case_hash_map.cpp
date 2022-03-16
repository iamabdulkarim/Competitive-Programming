#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main() {
	unordered_map<string, int> ourmap;

	//insert
	pair<string, int> p("abc",5);
	ourmap.insert(p);
	ourmap["def"] = 2;
	ourmap["ghj"] = 4; 

	//find or access
	cout <<ourmap["abc"]<<endl;
	cout <<ourmap["def"]<<endl;
	cout<< ourmap.at("ghj") <<endl;

	cout<<"size : "<<ourmap.size()<<endl;
	cout<<ourmap["ghi"]<<endl;
	cout<<"size new: "<<ourmap.size()<<endl;

	//check presense

	if(ourmap.count("ghi")>0) {
		cout<<"ghi is present"<<endl;
	}

	//erase

	ourmap.erase("ghi");
	if(ourmap.count("ghi")>0) {
		cout<<"ghi is present"<<endl;
	} else {
		cout<<"ghi is not present"<<endl;
	}
	cout<<"size new: "<<ourmap.size()<<endl;
}







