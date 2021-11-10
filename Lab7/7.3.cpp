#include <iostream>
#include <math.h>
#include <cstdlib>              //підключення бібліотек
using namespace std;

void func(){
	
	int mas[100], min, max;             //оголошення змінних та масиву
    for (int i = 0;i < 100; i++) {       //цикл умови for з умовами
    	
    	mas[i] = rand() %(180 - 5 + 1) +5; // заповнення масиву значеннями від 5 до 180
    	cout << mas[i] << '\n';             //формула
    	
    }	
    max = mas[0];
    min = mas[0];
    for (int k = 1; k < 100; k++)              //цикл умови for з умовами
    {
    	
    	if (max < mas[k]) max = mas[k]; // максимальне значення в масиві
    	if (min > mas[k]) min = mas[k];  // мінімальне значення в масиві       
    	
    }
    cout << "Sum:" << min + max << endl;  //виводимо суму значень в консоль
}

int main ()
{
	
	func();
	return 1;
}

