#include <iostream>

using namespace std;

int main() {
	int t,**m,n,res;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		res=0;
		m = (int **)malloc(n*sizeof(int *));
		for(int j=0;j<n;j++){
			m[j] = (int *)malloc(n*sizeof(int));
			for(int k=0;k<n;k++){
				cin>>m[j][k];
			}
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				for(int p=j;p<n;p++){
					for(int q=k;q<n;q++){
						if(m[j][k]>m[p][q]) res+=1;
					}
				}
			}
		}
		cout<<res<<endl;
	}
}
