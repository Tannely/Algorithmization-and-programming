#include <iostream>
#include <math.h>                           // підключаємо бібліотеки
using namespace std;

int FibFunc(int n){							//прототип функції	
	if (n == 0)								// оператор if, якщо і прирівняти до 0
		return 0;
	
	if (n == 1)                             // оператор if, якщо і прирівняти до  1
		return 1;
	
	return FibFunc(n-1) + FibFunc(n-2);    // то повернути формулу Фібоначі
}

int main(){
	int i;                                 	//оголошуємо змінні
	
	for (i = 1; i <= 10; i++){			   // цикл for для 10 чисел в послідовності
		cout << FibFunc(i) << endl;       //вивід чисел Фібоначчі від 1 до 10
	}

	return 0;
}
