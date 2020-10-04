#include <iostream>

using namespace std;

int main() {
	int t,n,*a,k,*result;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>k;
		a = (int *) malloc(n*sizeof(int));
		result = (int *) malloc(n*sizeof(int));
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			int result_idx=(j+k)%n;
			result[result_idx]=a[j];
		}
		for(int j=0;j<n;j++){
			cout<<result[j]<<" ";
		}
		cout<<endl;
	}	
}
