 #include <iostream>
 #include <string>
 using namespace std;
 void tri(){
	 
			 
		 int z=1;

  for (int i=0; i<7; i++)
  {
    for (int j=7; j>i; j--)
    {
      cout<<" "; 
    }
    cout<<"*";   

    if (i!=0)
    {
      for (int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      cout<<"*";
      z+=2;
    }
    cout<<endl;  // endl is for new line
  }

  for (int i=0; i<=z+1; i++)
  {
    cout<<"*";
  }
	 
 }
 
  void sqr(){
		 
		  for(int i=1;i<=10;i++){
		 for(int j=1;j<=10;j++){
			 if(i==1||i==10|| j==1||j==10)
				 std::cout<<'*';
			 else
				std::cout<<" ";
		 }
		std::cout << std::endl;		
	 } 
	 
 }
 
  void rect(){
	 for(int i=1;i<=20;i++){
		 for(int j=1;j<=20;j++){
			 if(i==1||i==20|| j==1||j==20){
				 std::cout<<'*';
			 }
			 else{
			 std::cout<<" ";
		 }
		 
		 }
		std::cout << std::endl;		
	 }
 }
 
 int main() {
rect();
sqr();

tri();
 return 0;
 }