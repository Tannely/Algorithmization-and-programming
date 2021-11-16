#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{ 
     int i; // об’явили змінну типу int
     int mas[50]; // об’явили масив з 50 елементів типу int


     for (i= 0;i <= 49; i++)

    { mas[i]= rand() % 71; // масив заповнили випадковими значеннями від 0 до 70
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 10 елем у строчці
                    else { cout <<" "<< mas[i]; }
     }
// getchar();
return 0;
}
