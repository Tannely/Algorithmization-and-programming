#include <iostream>
#include <cstdlib> // підключаємо бібліотеки
using namespace std;

int main()

{
        int i=0;   //оголошуємо змінні
        int k1=0, k2=0;//об’явили   змінні k=max
        int* ptr_masA=new int[10];// оголошуємо динамічний масив типу int
        int* ptr_masB = new int[10];// оголошуємо динамічний масив типу int

    for (i=0; i<=9; i++)   //цикл for для 10 елементів масиву
    { ptr_masA[i] = rand() % 71; // масив заповнили випадк. від 0 до 70
      if (i==0 ) k1 =  ptr_masA[0] ; // перше значення присвоїли
         if (ptr_masA[i] > k1) {k1 =  ptr_masA[i];  }
    cout<<"ptr_masA["<<i<<"]="<< ptr_masA[i] <<endl; // виводимо 1 масив
	}
    cout <<endl<<" max ="<< k1<< endl;// виводимо на екран max значення 1 масиву

    for (i=0; i<=9; i++)  //цикл for для 10 елементів масиву
    { ptr_masB[i] = rand() % 71; // масив заповнили випадк. від 0 до 70
     if (i==0 ) k2 =  ptr_masB[0] ; // перше значення присвоїли
         if (ptr_masB[i] > k2) {k2 =  ptr_masB[i]; }
      cout<<"ptr_masB["<<i<<"]="<< ptr_masB[i] <<endl;// виводимо 2 масив
	}
      cout <<endl<<" max = "<< k2<<endl;// виводимо на екран max значення 2 масиву
      
     //getchar();
      delete [] ptr_masB; // для звільнення пам’яті , яка виділена динамічно під масив
      delete [] ptr_masA;// для звільнення пам’яті , яка виділена динамічно під масив
      return 0;
}
