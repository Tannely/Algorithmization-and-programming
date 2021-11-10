#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i, n;                                   // оголошуємо змінні
	int col = 0;                                // оголошуємо змінні
	int a[30];                                  // об’явили масив з 30 елементів типу int
	int*ptra; 
	int b[50];                                  // об’явили масив з 50 елементів типу int
	int*ptrb;
	
	cout << " mas a: " << endl;                //виводимо в консоль
	for (i = 0;i <= 29;i++){                    //цикл for
		a[i] = rand() % 101;                    // масив заповнили випадк. значеннями від 0 до 100
		if (i == 0){                            // перше значення присвоїли
			ptra = a;
		}
		if ((i%10) == 0 && (i!=0)){            // вив-мо по 10 елем
			cout << " " << *ptra << endl;
		}
		else {
			cout << " " << *ptra;
			ptra++;
		}
	}
	
	cout << endl << " mas b: " << endl;      //виводимо в консоль
	for (i = 0; i <= 49; i++){               //цикл for
		b[i] = rand() % 101;                 // масив заповнили випадк. значеннями від 0 до 100
		if (i == 0) {                        // перше значення присвоїли
			ptrb = b;
		}
		if ((i%10) == 0 && (i!=0)){          // вив-мо по 10 елем
			cout << " " << *ptrb << endl;  
		}
		else {
			cout << " " << *ptrb;            //виводимо в консоль
			ptrb++;
		}
	}
	
	ptra = a;                                //встановили на початок
	col = 0;
	cout << endl << " same elems: ";        //виводимо в консоль
	for (i = 0; i <= 29; i++){              //цикл for
		ptrb = b;                           //встановили на початок
		for (n = 0; n <= 49; n++){          //цикл for
			if (*ptra == *ptrb){
				col++;
				cout << endl << *ptra << " - " << *ptrb; //виводимо в консоль
			}
			ptrb++;
		}
		ptra++;
	}

	cout << endl << " same elems number = " << col << endl;          //виводимо в консоль
	cout << " mas s: " << endl;                                    //виводимо в консоль
	for (i = 0; i <= 12; i++){                                        //цикл for
		int mas [13] = {67, 51, 51, 63, 24, 24, 24, 71, 71, 71, 52, 99, 99}; // оголошуємо масив
		cout << " " << mas[i];                                 //виводимо в консоль
	}
 
	return 0;
}
