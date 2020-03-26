#include <bits/stdc++.h>
using namespace std;

int n, A[1000000], tmp, iter, m;
char sign;

int main(int argc, char** argv){
	
	cin>>n;
	
	for(int i=0; i<n; ++i){
		cin>>sign;
		
		if(sign == 'p')    A[i] = 1;
		else    A[i] = -1;
	}
	
	for(int i=n-1; i>=0; --i){
		if(A[i] == 1)	break;
		else   ++m;
	}
	
	for(int i=0; i<n-m; ++i){
		tmp += A[i];
		++iter;
		
		if(tmp < 0 && A[i+1] == 1){
			tmp = 0;
			iter = 0;
		}
	}
	
	cout<<iter;
	
	return 0;
}
