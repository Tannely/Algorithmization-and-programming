#include <iostream>
#include <math.h>
#include <cstdlib>          //���������� �������
using namespace std;

bool func(int k)
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
		cout << " k is not defind \n";   // ����� if �� ����������
		return ItFind;
	}
	else
	{
		return ItFind;
	}
}
	
int main(){
	int k;   // ��������� ����
    for (int i = 0; i <10; i++){ //���� ����� for
    	k = rand() % (180 - 50 + 1) + 50;// ����������  ���������� �� 50 �� 180
    	bool result = func(k);
    	if (result == true) {
    		break;
		}
	}
	
	return 1;
}
