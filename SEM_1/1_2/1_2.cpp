#include <iostream>
using namespace std;

int main()
{
	 int a;
	 int b;
	 float c;
	 cin>>a;
	 cin>>b;
	 if (b==0){
	 	cout<<"NO";
	 	return 0;
	 }
	 else{
	 	c=(float)a/b;
	 	cout<<c;
	 }
	 return 0;	
}