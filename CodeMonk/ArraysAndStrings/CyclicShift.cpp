#include<iostream>
#include<cmath>
#include<string>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void leftRotate(string &str){
	reverse(str.begin()+1, str.end()); 
    reverse(str.begin(), str.end());
}

int binToDec(string str,int n){
	int res=0;
	for(int i=0;i<n;i++){
		res+=int(str[i]-'0')*pow(2,n-i-1);
	}
	return res;
}

int main() {
	int t,n,k;
	vector<int> vect;
	string str;

	int b=0,temp;
	int i,j;

	cin>>t;
	for(int m=0;m<t;m++){
		vect.clear();
		cin>>n;
		cin>>k;
		cin>>str;

		b = 0;
		for(i=0;i<n;i++){
			temp = binToDec(str,n);
			if(temp > b) b = temp;
			leftRotate(str);
		}
		for(i=0;i<n;i++){
			leftRotate(str);
			temp = binToDec(str,n);
			if(temp == b) {
				vect.push_back(i+1);
			}
		}
		
		int cycle;
		int multiplier = (k-1)/vect.size();
		int adder = vect[(k-1)%vect.size()];
		cycle = n*multiplier + adder;
		cout<<cycle<<endl;
	}
}
