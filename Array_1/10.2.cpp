#include <iostream>
#include <cstdlib> // ��������� ��������
using namespace std;

int main()

{
        int i=0;   //��������� ����
        int k1=0, k2=0;//�������   ���� k=max
        int* ptr_masA=new int[10];// ��������� ��������� ����� ���� int
        int* ptr_masB = new int[10];// ��������� ��������� ����� ���� int

    for (i=0; i<=9; i++)   //���� for ��� 10 �������� ������
    { ptr_masA[i] = rand() % 71; // ����� ��������� ������. �� 0 �� 70
      if (i==0 ) k1 =  ptr_masA[0] ; // ����� �������� ��������
         if (ptr_masA[i] > k1) {k1 =  ptr_masA[i];  }
    cout<<"ptr_masA["<<i<<"]="<< ptr_masA[i] <<endl; // �������� 1 �����
	}
    cout <<endl<<" max ="<< k1<< endl;// �������� �� ����� max �������� 1 ������

    for (i=0; i<=9; i++)  //���� for ��� 10 �������� ������
    { ptr_masB[i] = rand() % 71; // ����� ��������� ������. �� 0 �� 70
     if (i==0 ) k2 =  ptr_masB[0] ; // ����� �������� ��������
         if (ptr_masB[i] > k2) {k2 =  ptr_masB[i]; }
      cout<<"ptr_masB["<<i<<"]="<< ptr_masB[i] <<endl;// �������� 2 �����
	}
      cout <<endl<<" max = "<< k2<<endl;// �������� �� ����� max �������� 2 ������
      
     //getchar();
      delete [] ptr_masB; // ��� ��������� ����� , ��� ������� �������� �� �����
      delete [] ptr_masA;// ��� ��������� ����� , ��� ������� �������� �� �����
      return 0;
}
