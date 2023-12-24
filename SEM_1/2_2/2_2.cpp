#include <iostream>
using namespace std;

int main()
{
	int n;
	int summ=1;
	int a;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>a;
		summ=summ*a;
	}
	cout<<summ<<endl;
	return 0;
}