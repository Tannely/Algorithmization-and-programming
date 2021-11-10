#include <iostream>
#include <math.h>
#include <cstdlib>          //підключення бібліотек
using namespace std;

bool func(int k)
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
		cout << " k is not defind \n";   // яккщо if не виконується
		return ItFind;
	}
	else
	{
		return ItFind;
	}
}
	
int main(){
	int k;   // оголошуємо змінні
    for (int i = 0; i <10; i++){ //цикл умови for
    	k = rand() % (180 - 50 + 1) + 50;// заповнення  значеннями від 50 до 180
    	bool result = func(k);
    	if (result == true) {
    		break;
		}
	}
	
	return 1;
}
