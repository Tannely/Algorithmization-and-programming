#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{   int i,j; // об’явили змінну типу int
    int n=20;
    int k=0,ki=0; // об’явили k=min/ki-index min
    int mas[n]; // об’явили масив з 20 елементів типу int
    // масив заповнили випадковими значеннями від 0 до 20
      for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % (80-10+1)+10; //масив заповнили випадковими знач. від 10 до 80
     if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 10 елем
                      else { cout <<" "<< mas[i]; }
    }
    // вирахуємо максимум

     int temp = 0;
     for (i= 0;i <= (n-1); i++){
     k = mas[0] ; // перше значення присвоїли, початкове ki-index max =0
     ki = 0; // починаємо з першого кожен раз
     for (j= 0;  j<= (n-1-i); j++) {
        if (mas[j] < k) {k = mas[j]; ki= j;// cout <<endl<<" max ="<< k<<" index max ="<<ki;

    }}// ki - index min

      //(n-1-i)- індекс елемента який треба міняти на ki= j; // ki- index max
              temp = mas[ki] ;
              mas[ki] = mas[n-1-i] ;
              mas[n-1- i] = temp; // обмін

       }
     cout <<endl<< "sort mas:"<<endl;
      // виведемо відсортований масив
       for (i= 0;i <= (n-1); i++)
     {   
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 10 елем
                       else { cout <<" "<< mas[i]; }
     }
//getchar();
return 0;
}
