#include <iostream>
#include <math.h>                           // ��������� ��������
using namespace std;

int FibFunc(int n){							//�������� �������	
	if (n == 0)								// �������� if, ���� � ��������� �� 0
		return 0;
	
	if (n == 1)                             // �������� if, ���� � ��������� ��  1
		return 1;
	
	return FibFunc(n-1) + FibFunc(n-2);    // �� ��������� ������� Գ������
}

int main(){
	int i;                                 	//��������� ����
	
	for (i = 1; i <= 10; i++){			   // ���� for ��� 10 ����� � �����������
		cout << FibFunc(i) << endl;       //���� ����� Գ������� �� 1 �� 10
	}

	return 0;
}
