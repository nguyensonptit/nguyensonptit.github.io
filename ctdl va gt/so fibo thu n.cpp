#include<iostream>
using namespace std;
const long long m = 1e9 + 7;
long long F[2][2], M[2][2];

void nhan(long long A[2][2], long long B[2][2]){
	long long res[2][2];
	for(int i=0; i<=n; i++){
		res[i][j] = 0;
		for(int k=0; k<2; k++){
			res[i][j]= A[i][j] * B[i][j];
			res %= m;
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			A[i][j] = res[i][j];
		}
	}
}
