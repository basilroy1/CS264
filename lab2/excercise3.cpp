#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
	int main() {
	vector<string>str;
	string word;
	cout<< "Enter words"<<endl;
	
	//cin>>word;
	while(cin>>word){

	str.push_back(word);	

	}


	int size=str.size();
string small=str[0];
string large=str[1];

for(int i=0;i<size;i++){
if(small.size()<str[i].size()){
small=str[i];


}
else if(large.size()>str[i].size()){
large=str[i];

}

}
	cout<<"Longest word is : "<<large<<" with size of " <<large.size()<<endl;
	cout<<"Shortest word is : "<<small<<" with size of " <<small.size()<<endl;


return 0;

}   

