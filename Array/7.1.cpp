#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{ 
     int i; // ������� ����� ���� int
     int mas[50]; // ������� ����� � 50 �������� ���� int


     for (i= 0;i <= 49; i++)

    { mas[i]= rand() % 71; // ����� ��������� ����������� ���������� �� 0 �� 70
       if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ���� � �������
                    else { cout <<" "<< mas[i]; }
     }
// getchar();
return 0;
}
