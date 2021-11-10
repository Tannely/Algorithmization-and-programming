#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{   int i,j; // об’явили змінну типу int
    int n=100;
    int mas[n]; // об’явили масив з 100 елементів типу int
    // масив заповнили випадковими значеннями від 0 до 100
     for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % (90-10+1)+10; // масив заповнили випадковими значеннями від 10 до 90
     if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 10 елем у строчці
                     else { cout <<" "<< mas[i]; }
    }
// бульбашка – міняємо сусідні
    int temp = 0;
    for (i= 0;i <= (n-1); i++){
                for (j= 0; j<= (n-2-i); j++) {
                        if (mas[j] < mas[j+1]) {
         temp = mas[j+1] ;
         mas[j+1] = mas[j] ;
         mas[j] = temp; // обмін
      }} // buble
   }   
   cout <<endl<< "sort mas:"<<endl;
   // виведемо відсортований масив
     for(i= 0;i <= (n-1); i++)
    {   
      if ((i%20) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // вив-мо по 20 елем у строчці
                 else { cout <<" "<< mas[i]; }
    }
//getchar();
return 0;
}
