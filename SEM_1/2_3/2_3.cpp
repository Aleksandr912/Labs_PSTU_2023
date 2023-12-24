#include <iostream>
using namespace std;

int main()
{
	int n;
	int summ;
	int s;
	s=0;
	cin>>n;
	for(int i=1; i<=n; ++i){
		summ=i;
		for(int j=1; j<=i; ++j){
			summ*=i+j;
		}
		s+=summ;
	}
	cout<<s<<endl;
	return 0;
}