#include <iostream>
#include <math.h>
#include <cstdlib>          //підключення бібліотек
using namespace std;

void func(int k)
{
	int mas[100]; //оголошуємо масив та заповнюємо його 100 значеннями
	int index;// оголошуємо змінні
	bool ItFind = false;             //оголошення змінних
	for (int i = 0; i < 100; i++)         //цикл умови for
	{
		mas[i] = rand() % (180 - 50 + 1) + 50;    // заповнення масиву значеннями від 50 до 180
		if (mas[i] == k)                       //якщо масив прирівняти до k
		{
			cout << i << '\n';     // виводимо і
			ItFind = true;
		}
	}
	if (ItFind == false)           //цикл умови if 2
	{
		cout << " k is not defind";   // яккщо if не виконується
	}
}
	
int main(){
	int k;   // оголошуємо змінні
	cin >> k;   // вводимо значення к з консолі
	if ((k < 180) &&(k > 50))    // к у діапазоні від 50 до 180
	{
		func(k);
	} 
	else{
		cout << "error";     // виводимо в консоль, якщо не спрацьовує if
	}
	return 1;
}

