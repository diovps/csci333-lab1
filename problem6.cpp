#include <iostream>

using std::cout;
using std::endl;

int difference(int);
int sumOfSquares(int);
int squareOfSums(int);

int main(){
	cout << difference(100) << endl;
	return 0;
}

int difference(int N){
	return squareOfSums(N) - sumOfSquares(N);
}

int sumOfSquares(int N){
	int sum = 0;
	for(int i=1; i <= N; i++){
		sum+=(i*i);
	}
	return sum;
}

int squareOfSums(int N){
	int sum = 0;
	for(int i=1; i <= N; i++){
		sum+=i;
	}
	return (sum*sum);
}
