#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{ 
     int n=100; // ������� ����� ���� int
     int mas[n]; // ������� ����� � 100 �������� ���� int


     for (n= 0;i <= n; i++)

    { mas[i]= rand() % 101; // ����� ��������� ����������� ���������� 
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ���� � �������
                    else { cout <<" "<< mas[i]; }
     }
// getchar();
return 0;
}
