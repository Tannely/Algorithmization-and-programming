#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{   int i,j; // ������� ����� ���� int
    int n=30;
    int k=0,ki=0; // ������� k=max/ki-index max
    int mas[n]; // ������� ����� � 30 �������� ���� int
    // ����� ��������� ����������� ���������� �� 0 �� 30
      for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % (50-5+1)+5; //����� ��������� ����������� ����. �� 5 �� 50
     if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ����
                      else { cout <<" "<< mas[i]; }
    }
    // �������� ��������

     int temp = 0;
     for (i= 0;i <= (n-1); i++){
     k = mas[0] ; // ����� �������� ��������, ��������� ki-index max =0
     ki = 0; // �������� � ������� ����� ���
     for (j= 0;  j<= (n-1-i); j++) {
        if (mas[j] > k) {k = mas[j]; ki= j;// cout <<endl<<" max ="<< k<<" index max ="<<ki;

    }}// ki - index max

      //(n-1-i)- ������ �������� ���� ����� ����� �� ki= j; // ki- index max
              temp = mas[ki] ;
              mas[ki] = mas[n-1-i] ;
              mas[n-1- i] = temp; // ����

       }
     cout <<endl<< "sort mas:"<<endl;
      // �������� ������������ �����
       for (i= 0;i <= (n-1); i++)
     {   
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ����
                       else { cout <<" "<< mas[i]; }
     }
//getchar();
return 0;
}
