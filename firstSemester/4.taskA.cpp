#include <iostream>/*алгоритм XORShift генерации псевдослучайных чисел с использованием XOR и битовыми сдвигами*/
using std:: cout;
int xorshift(int &x){
	int tmp;
	tmp = x ^ (x << 21);
	tmp = tmp ^ (tmp >> 34);
	x = x ^ (tmp << 4);
	return x;
}
int main(){
	int x=13;
	xorshift(x);
}



