#include <iostream>

#include <cstdlib>

#include <vector> // підключаємо бібліотеки

using namespace std;

int main(){
	int i = 0;     //оголошуємо змінні
	int* ptr_masA = new int[50];   // оголошуємо динамічний масив типу int
	int* ptr_masB = new int[50];   // оголошуємо динамічний масив типу int
	cout<<endl<<"ptr_masA ="<<endl;// вивід на екран
	for (i=0; i<=49; i++)    //цикл for для 50 елементів масиву
		{ptr_masA[i] = rand() % 301;    // масив заповнили випадк. від 0 до 300
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masA[i] <<endl;} //вив-мо по 25
              else { cout <<" "<< ptr_masA[i]; }
	
		}
	cout<<endl<<"ptr_masB ="<<endl;// вивід на екран
	for (i=0; i<=49; i++)      //цикл for для 50 елементів масиву
		{ptr_masB[i] = rand() % 301;        // масив заповнили випадк. від 0 до 300
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masB[i] <<endl;} // вив-мо по 25
              else { cout <<" "<< ptr_masB[i]; }
	
	    }	
	
	
	int C[50];// статичний масив 50 елементів типу int
	
	cout<<endl<<"ptr_masC ="<<endl;// вивід на екран
	for (i=0; i<=49; i++)//цикл for для 50 елементів масиву
		{C[i] = {ptr_masA[i] + ptr_masB[i]};  // агрегування суми значень
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< C[i] <<endl;} // вив-мо по 25
                 else { cout <<" "<< C[i]; }
	    }	
	delete [] ptr_masA;
	delete [] ptr_masB;// для звільнення пам’яті , яка виділена динамічно під масив
	
	int n = 50;
	ptr_masA = new int[n];  // оголошуємо динамічний масив типу int
	ptr_masB = new int[n];  // оголошуємо динамічний масив типу int
	
	cout<<endl<<"ptr_masA ="<<endl;// вивід на екран
	for (i=0; i<=(n-1); i++)//цикл for для 50 елементів масиву
		{ptr_masA[i] = rand() % 501;// масив заповнили випадк. від 0 до 500
		if ((i%22) == 0 && (i!=0)) { cout <<" "<< ptr_masA[i] <<endl;} //вив-мо по 25
              else { cout <<" "<< ptr_masA[i]; }
		
	}
	cout<<endl<<"ptr_masB ="<<endl;// вивід на екран
	for (i=0; i<=(n-1); i++)//цикл for для 50 елементів масиву
		{ptr_masB[i] = rand() % 501; // масив заповнили випадк. від 0 до 500
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masB[i] <<endl;} // вив-мо по 25
              else { cout <<" "<< ptr_masB[i]; }
	
	
	}
	
	cout<<endl<<"ptr_masC1 ="<<endl;// вивід на екран
	int* ptr_masC1 = new int[n]; // оголошуємо динамічний масив типу int
	for (i=0; i<=(n-1); i++)      //цикл for 
		{ptr_masC1[i] = {ptr_masA[i] + ptr_masB[i]};// агрегування суми значень
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masC1[i] <<endl;} // вив-мо по 25
                 else { cout <<" "<< ptr_masC1[i]; }
		
	} 	
	
	vector <int> vecc(50); // вектор із 50 елементів типу int
	
	cout<<endl<<"VectorC ="<<endl;// вивід на екран
	for (i=0; i<=49; i++) //цикл for 
		{vecc[i] = {C[i] + ptr_masC1[i]};// агрегуємо суму значень 2 масивів С та С1
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< vecc[i]  <<endl;} // вив-мо по 25
              else { cout <<" "<< vecc[i] ; }
		
	}
   	
	delete [] ptr_masA;
	delete [] ptr_masB;// для звільнення пам’яті , яка виділена динамічно під масив
	
	return 0;
}
