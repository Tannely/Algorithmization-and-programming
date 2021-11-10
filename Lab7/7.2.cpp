#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{ 
     int n=100; // об’явили змінну типу int
     int mas[n]; // об’явили масив з 100 елементів типу int


     for (n= 0;i <= n; i++)

    { mas[i]= rand() % 101; // масив заповнили випадковими значеннями 
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 10 елем у строчці
                    else { cout <<" "<< mas[i]; }
     }
// getchar();
return 0;
}
