#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{   int i,j; // ������� ����� ���� int
    int n=100;
    int mas[n]; // ������� ����� � 100 �������� ���� int
    // ����� ��������� ����������� ���������� �� 0 �� 100
     for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % (90-10+1)+10; // ����� ��������� ����������� ���������� �� 10 �� 90
     if ((i%10) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 10 ���� � �������
                     else { cout <<" "<< mas[i]; }
    }
// ��������� � ������ �����
    int temp = 0;
    for (i= 0;i <= (n-1); i++){
                for (j= 0; j<= (n-2-i); j++) {
                        if (mas[j] < mas[j+1]) {
         temp = mas[j+1] ;
         mas[j+1] = mas[j] ;
         mas[j] = temp; // ����
      }} // buble
   }   
   cout <<endl<< "sort mas:"<<endl;
   // �������� ������������ �����
     for(i= 0;i <= (n-1); i++)
    {   
      if ((i%20) == 0 && (i!=0)) { cout <<" "<< mas[i]<<endl;} // ���-�� �� 20 ���� � �������
                 else { cout <<" "<< mas[i]; }
    }
//getchar();
return 0;
}
