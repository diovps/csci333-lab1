#include <iostream>

using std::cout;
using std::endl;

int sums(int);

int main(){

	cout << sums(1000) << endl;
	return 0;
}

int sums(int N){
	int sums = 0;
	for(int i = 0; i < N; i++){
		if(i%3==0 || i%5==0){
			sums+=i;
		}
	}
	return sums;
}

