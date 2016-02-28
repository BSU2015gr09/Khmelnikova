#include <iostream>
using std:: cout;

void output(int arr[3][3], int N) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	const int N=3;
	int num = 1;
	int arr[N][N];
	for	(int i=0; i<N; i++){/*Заполнить двумерный массив размера N на N построчно слева-направо*/
		for (int j=0; j<N; j++){
			arr[i][j]=num++;
		}
	}
	output(arr, N);
	cout << "\n\n";
	num=1;
	for	(int i=0; i<N; i++){
		for (int j=N-1; j>=0; j--){/*Заполнить двумерный массив размера N на N построчно справо-налево*/
			arr[i][j]=num++;
		}
	}
	output(arr, N);
}