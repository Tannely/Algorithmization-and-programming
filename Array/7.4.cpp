#include <iostream>
#include <math.h>
#include <cstdlib>          //���������� �������
using namespace std;

void func(int k)
{
	int mas[100]; //��������� ����� �� ���������� ���� 100 ����������
	int index;// ��������� ����
	bool ItFind = false;             //���������� ������
	for (int i = 0; i < 100; i++)         //���� ����� for
	{
		mas[i] = rand() % (180 - 50 + 1) + 50;    // ���������� ������ ���������� �� 50 �� 180
		if (mas[i] == k)                       //���� ����� ��������� �� k
		{
			cout << i << '\n';     // �������� �
			ItFind = true;
		}
	}
	if (ItFind == false)           //���� ����� if 2
	{
		cout << " k is not defind";   // ����� if �� ����������
	}
}
	
int main(){
	int k;   // ��������� ����
	cin >> k;   // ������� �������� � � ������
	if ((k < 180) &&(k > 50))    // � � ������� �� 50 �� 180
	{
		func(k);
	} 
	else{
		cout << "error";     // �������� � �������, ���� �� ��������� if
	}
	return 1;
}

