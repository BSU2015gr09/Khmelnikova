#include <iostream>
#include <clocale>
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
void output(int N, int A[]){
	for (int i=0; i<N; i++){
		cout << A[i] << "\n";
	}
}
void revers(int N, int A[]){
	cout << "\n\n";
	for (int i=N-1; i>-1; i--){
		cout << A[i] << "\n";
	}
}
void pos(int N, int A[]){
	int i=0, chet;
	cout << "Элементы, стоящие на нечетных позициях:" << "\n";
	while(i<N){
		chet=i%2;
		if (chet!=0){
			cout << i << "=" << A[i]%51 << "\n";
		}
		i++;
	}
	i=0;
	cout << "Элементы, стоящие на четных позициях:" << "\n";
	while(i<N){
		chet=i%2;
		if (chet==0){
			cout << i << "=" << A[i]%51 << "\n";
		}
		i++;
	}
}
void znak(int N, int A[]){
	int i=0, n=0, m=0;
	while(i<N){
		if (A[i]>0){
			n++;
		}
		if (A[i]<0){
			m++;
		}
		i++;
	}
	cout << "Количество положительных элементов массива: " << n <<"\n";
	cout << "Количество отрицательных элементов массива: " << m << "\n";
}
void maxmin(int N, int A[]){
	int max=0, min=0, i=0;
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
	cout << "Максимальный элемент массива: " << max << "\n";
	cout << "Минимальный элемент массива: " << min << "\n";
}
void kolmaxmin(int N, int A[]){
	int max=0, min=0, i=0, max_count=0, min_count=0;
	mas(N, A);
	max=A[i];
	min=A[i];
	for (i; i<N; i++){
		if (max==A[i]){
			max_count++;
		}
		if (min==A[i]){
			min_count++;
		}
		if (max<A[i]){			
			max=A[i];
			max_count=1;
		}
		else if (min>A[i]){
			min=A[i];
			min_count=1;
		}
	}
	cout << "Максимальный элемент массива: " << max << "  Количество максимумов: " << max_count << "\n";
	cout << "Минимальный элемент массива: " << min << "  Количество минимумов: " << min_count <<"\n";
}
void rebuild(int N, int A[], int B[]){
	int i=0, neg=0, pos=0;
	while(i<N){
		if (A[i]>0){
			neg++;
		}
		i++;
	}
	for (int i=0; i<N; i++){
		if(A[i]>=0){
			B[pos]=A[i];
			pos++;
		}
		if(A[i]<0){
			B[neg]=A[i];
			neg++;
		}
	}
	output(N,	B);
	 
}
void rebuild2(int N, int A[]){
	int i=0, t=0;
	while (i<N){
		if(A[i]<0){
			int j=N-1;
			while (j>=i){
				if(A[j]>=0){
					t=A[i];
					A[i]=A[j];
					A[j]=t;
				}
				j--;
			} 
		}
		i++;
	}
	cout << "\n\n";
	output(N, A);

}


int main(){
	setlocale(LC_ALL, "Russian");
	const int N=40000;
	int x=0, A[N], B[N];
	mas(N, A);
	xorshift(x);
	output(N, A);
	revers(N, A);/*Вывести значения в "обратном порядке" (начиная от последнего элемента и заканчивая первым).*/
	pos(N, A);/*Вывести значения сначала элементов с нечетными коэффициентами (1-й, 3-й, 5-й,...) а затем - с четными.*/
	znak(N, A);/*Вывести кол-во положительных и количество отрицательных элементов в массиве А.*/
	maxmin(N, A);/*Вывести максимум и минимум в массиве А.*/
	kolmaxmin(N, A);/*Вывести кол-во максимальных и количество минимальных элементов в массиве А.*/
	rebuild(N, A, B);/*"Перестроить" массив следующим образом :заполнить вспомогательный массив В в котором положительные значения массива А переместить в начало В, отрицательные переместить в конец массива В.*/
	rebuild2(N, A);/*аналогично предыдущей задаче "перестроить" массив А "на месте" (т.е. БЕЗ использования массива В) следующим образом положительные значения массива А переместить в начало А, отрицательные переместить в конец массива А.*/
}
