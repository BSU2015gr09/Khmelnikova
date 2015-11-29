#include <iostream>
#include <clocale>
#include <cstdio> 
#include <cstdlib>
#include <ctime>
#include <iomanip>
using std:: cout;
void mas(const int N, int A[]){
	srand(time(0));
	for (int i=0; i<N; i++ ) {
	A[i] = rand()%1000-500;}
}
void output(const int N, int A[]){
	mas(N, A);
	for (int i=0; i<N; i++){
	cout << A[i] << "\n";}
}
void exch(const int N, int A[]){
	mas(N,A);
	int pos=-1, neg=0, t;
	for (int i=0; i<N ; i++) {
		if (A[i]>0 && pos==-1){
		pos=i;
		}
		if (A[i]<0) {
		neg=i;
		}
	}
	t = A[neg];
	A[neg] = A[pos];
	A[pos] = t;
}
void max_min(const int N, int A[], int &max, int &min){
	mas (N, A);
	max=A[0];
	min=A[0];
	for (int i=0; i<N; i++) {
		if (A[i] > max) {
		max=A[i];}
		if (A[i] < min) {
		min=A[i];}
	}
}
void chet_nechet(const int N, int A[]) {
	int max, min;
	max_min(N, A, max, min);
	for (int i=0; i<N; i++ ){
		if (A[i]%2) {
		A[i]=min;}
		else A[i]=max;
	}
}
void max_one(const int N, int A[]) {
	int max, rep=1, i;
	mas(N, A);
	max = A[0]-1;
	for (i=0; i<N; i++) {
		if ( A[i] <= max) {
			break;
		}
	for (int j=0; j<N; j++) {
		if ( i!=j && A[i]==A[j]){
			rep=0;
		}
	}
	if (rep) {
	max=A[i];
	}
	else rep=1;
	}
	cout << "максимальным из элементов, встречающихся только один раз, является" << max;
}
void min_rep(const int N, int A[]) {
	int min, rep=1, i;
	mas(N, A);
	min = A[0] + 1;
	for (i=0; i<N; i++) {
		if ( A[i] >= min) {
			break;
		}
	for (int j=0; j<N; j++) {
		if ( i!=j && A[i]==A[j]){
			rep=0;
		}
	}
	if (!rep) {
	min=A[i];
	}
	else rep=1;
	}
	cout << "минимальным из чисел, встречающихся более одного раза, является" << min << "\n";
}
void max_lenght(const int N, int A[]) {
	int i, count=0, max=0;
	mas(N, A);
	for (i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (i!=j && A[i]==A[j]){
				count++;
			}
		}
		if (count>max) {max = count}
	}
	cout << "Максимальная длина последовательности равных элементов равна" << count << "\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	const int N=20;
	int A[N], max, min;
	output(N, A);
	exch(N, A);/*В массиве случайных целых чисел *первый положительный элемент и последний отрицательный элемент переставить местами.*/
	chet_nechet(N, A);/*все четные элементы заменить максимальным элементом, а нечетные — минимальным*/
	max_one(N, A);/*найти максимальный из элементов, встречающихся только один раз.*/
	min_rep(N, A);/*найти минимальное из чисел, встречающихся более одного раза.*/
	max_lenght(N, A);/*определить максимальную длину последовательности равных элементов.*/
}