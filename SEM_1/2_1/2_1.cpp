#include <iostream>
using namespace std;

int main()
{
	int n;
	int summ=0;
	int a;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>a;
		summ+=a;
	}
	cout<<summ<<endl;
	return 0;
}