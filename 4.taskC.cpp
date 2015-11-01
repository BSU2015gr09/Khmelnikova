#include <iostream>
using std:: cout;
int xorshift(int &x){
	int tmp;
	tmp = x ^ (x << 21);
	tmp = tmp ^ (tmp >> 34);
	x = x ^ (tmp << 4);
	return x;
}
void mas(int N, int A[]){
	int i;
	A[0]=13;
	for (int i=1; i<N; i++){
		A[i] = xorshift(A[i-1]);
	}
	for (i=0; i<N; i++){
		A[i]=A[i]%51;
	}
}
void maxmin(int N, int A[], int &max, int &min){
	int i=0;
	mas(N, A);
	max=A[i];
	min=A[i];
	for (i; i<N; i++){
		if (max<A[i]){
			max=A[i];
		}
		else if (min>A[i]){
			min=A[i];
		}
	}
}
void paste(int N, int A[]){
	for (int i=0; i<N; i++){
		while (i==0){
			A[i+1]=999; break;
		}
		cout << A[i] << "\n"; 

	}

}
void paste2(int N, int A[], int &max, int &min ){
	maxmin(N, A, max, min);
	for (int i=0; i<N; i++){
		while (A[i]==min){
			A[i+1]=111;break;
		}
		cout << A[i] << "\n";
	}
}
void paste3(int N, int A[], int &max, int &min ){
	maxmin(N, A, max, min);
	for (int i=0; i<N; i++){
		while (A[i]==max){
			A[i-1]=222;break;
		}
		cout << A[i] << "\n";
	}
}
int main(){
	const int N=50000;
	int x=0, A[N], max=0, min=0;
	mas(N, A);
	xorshift(x);
	paste(N, A);/*вставить после первого нулевого элемента массива число 999 (тем самым стирая информацию в ячейке А(k-1)*/
	paste2(N, A, max, min);/*вставить после первого минимального элемента число 111*/
	paste3(N, A, max, min);/*вставить перед первым максимальным элементом число 222*/
}