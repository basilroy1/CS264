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

	}
	sort(str.begin(),str.end());
	int size=str.size();
	if(size==0){
		cout<<"NO WORDS";
		return 1;
	}
	int count=0;
	word=str[0];
	
	for(int i=0;i<size;i++){
		if(word!=str[i]){
		cout<<word<<" Appears "<<count<<" number of times"<<endl;
		count=0;
		word=str[i];
		}
		count++;
	}
	cout<<word<<" Appears "<<count<< " number of times"<<endl;


return 0;

}                                                                                                                  