#include <iostream>
#include <math.h>
#include <cstdlib>              //���������� �������
using namespace std;

void func(){
	
	int mas[100], min, max;             //���������� ������ �� ������
    for (int i = 0;i < 100; i++) {       //���� ����� for � �������
    	
    	mas[i] = rand() %(180 - 5 + 1) +5; // ���������� ������ ���������� �� 5 �� 180
    	cout << mas[i] << '\n';             //�������
    	
    }	
    max = mas[0];
    min = mas[0];
    for (int k = 1; k < 100; k++)              //���� ����� for � �������
    {
    	
    	if (max < mas[k]) max = mas[k]; // ����������� �������� � �����
    	if (min > mas[k]) min = mas[k];  // �������� �������� � �����       
    	
    }
    cout << "Sum:" << min + max << endl;  //�������� ���� ������� � �������
}

int main ()
{
	
	func();
	return 1;
}

