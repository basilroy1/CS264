#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
	int main() {
	cout<< "Enter words"<<endl;
	string word;
	vector<string> str;
	
	//cin>>word;
	while(cin>>word){

		str.push_back(word);
//reading in the words and push on to the vector
	}
	sort(str.begin(),str.end());
	int size=str.size();
	if(size==0){
		cout<<"NO WORDS";
		return 1;
	}
	
	//printig the words in reverse order along wiht the size
	for(int i=str.size()-1;i>=0;i--){
cout<< str[i] <<" of size " <<str[i].size()<<endl;
		}


return 0;

}                                                                                                                  
