#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
     int i; // // ������� ����� ���� int
     int k=0,ki=0; //�������  k=min/ki-index mim
     int mas[100]; // ������� ����� � 100 �������� ���� int

     for (i= 0;i <= 99; i++)
    { mas[i]= rand() % (180-5+1)+5; // ����� ��������� ����������� ���������� �� 5 �� 180
      if (i==0 ) k = mas[0] ; // ����� �������� ��������
    if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} //���-�� �� 10 ���� � �������
                    else { cout <<" "<< mas[i]; }
          if (mas[i] > k) {k = mas[i]; ki= i; }

    }
    cout <<endl<<" min ="<< k<<" index min ="<<ki;
//getchar();
return 0;

}
