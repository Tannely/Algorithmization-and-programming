#include <iostream>
#include <math.h>                                // підключаємо бібліотеки
using namespace std;

long int Nfact(int n){				            //рекурсивна функція обчислення інтегралу
    long int N=n; 						        //оголошуємо змінні
    
	if (n<2) return (n=1);     
    
	return (N*Nfact( n-1));}

int main(){
	int n, N;									//оголошуємо змінні
	long int sum;
	for (n = 1; n <= 10; n++){				   //цикл for для 10 чисел в послідовності
		N = Nfact(n);
		sum += N;
		cout << "n("<<n<<")! = " << N << endl;//  вивід факторіалів на екран
	}
	
	cout << "sum = " << sum << endl;         //вивід суми факторіалів(10)
return 0;
}
