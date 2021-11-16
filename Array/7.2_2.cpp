#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
     int i; // // об’явили змінну типу int
     int k=0,ki=0; //об’явили  k=min/ki-index mim
     int mas[100]; // об’явили масив з 100 елементів типу int

     for (i= 0;i <= 99; i++)
    { mas[i]= rand() % (180-5+1)+5; // масив заповнили випадковими значеннями від 5 до 180
      if (i==0 ) k = mas[0] ; // перше значення присвоїли
    if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} //вив-мо по 10 елем у строчці
                    else { cout <<" "<< mas[i]; }
          if (mas[i] > k) {k = mas[i]; ki= i; }

    }
    cout <<endl<<" min ="<< k<<" index min ="<<ki;
//getchar();
return 0;

}
