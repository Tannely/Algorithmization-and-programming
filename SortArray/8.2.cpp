#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{   int i,j; // ������� ����� ���� int
    int n=20;
    int k=0,ki=0; // ������� k=min/ki-index min
    int mas[n]; // ������� ����� � 20 �������� ���� int
    // ����� ��������� ����������� ���������� �� 0 �� 20
      for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % (80-10+1)+10; //����� ��������� ����������� ����. �� 10 �� 80
     if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ����
                      else { cout <<" "<< mas[i]; }
    }
    // �������� ��������

     int temp = 0;
     for (i= 0;i <= (n-1); i++){
     k = mas[0] ; // ����� �������� ��������, ��������� ki-index max =0
     ki = 0; // �������� � ������� ����� ���
     for (j= 0;  j<= (n-1-i); j++) {
        if (mas[j] < k) {k = mas[j]; ki= j;// cout <<endl<<" max ="<< k<<" index max ="<<ki;

    }}// ki - index min

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
