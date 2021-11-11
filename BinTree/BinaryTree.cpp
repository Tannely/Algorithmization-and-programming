#include <cstdlib>
#include <iostream>
using namespace std;

int tabs = 0; //��� �������
int amount = 0; // ��� �������
int amount_1 = 1; // ��� ���������
struct Branch
{
	int Data; // ���� �����
	Branch* RightBranch;
	Branch* LeftBranch; 
	
};

void Add(int aData, Branch*& aBranch)// ������� ��������� �������� �� �������� ������
{
	if (!aBranch)
	{ 
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else 
		if (aBranch->Data > aData)
		{ //���� ���� ����� ����, �� � ��� ���� - ������ ����
			Add(aData, aBranch->LeftBranch);
		}
		else
		{ // ������ � ����� ����
			Add(aData, aBranch->RightBranch);
		};
}

void print(Branch* aBranch) // ������� ��������� ������
{
	if (!aBranch) return; //���� ���� �� ���� � ��������. �������� �����.
	tabs += 5; //������ �������� �������� ���������� ���������� ��������
	//���� ���������� ������� ��� ��������� �� �����
	print(aBranch->LeftBranch); 
	for (int i = 0; i < tabs; i++) cout << " "; 
	cout << aBranch->Data << endl; 

	print(aBranch->RightBranch);
	tabs-= 5; //���� ��������� ������� �������
	return;
}

void pr_obh(Branch*& aBranch) // ������ �����
{
	if (NULL == aBranch)    return;    //���� ������ ����, ��������

	cout << aBranch->Data << endl; //����� ������
	pr_obh(aBranch->LeftBranch); //����� ����� �������� 
	pr_obh(aBranch->RightBranch); //����� ������� �������� 
}

void gor_obh(Branch*& aBranch) // ��������������(�����������) �����
{
	if (NULL == aBranch)    return;    //���� ������ ����, ��������

	gor_obh(aBranch->LeftBranch); //����� ����� �������� 
	cout << aBranch->Data << endl; //����� ������
	gor_obh(aBranch->RightBranch); //����� ������� �������� 
}

int par(Branch*& aBranch) // ��� ������ ��������
{
	if (NULL == aBranch)    return 0;    //���� ������ ����, ��������

	if (aBranch->Data % 2 == 0)
	{
		amount++;
	}
	par(aBranch->LeftBranch);   
	par(aBranch->RightBranch); 
	return amount;
}
int ne_par(Branch*& aBranch)   // ��� �������� ��������
{
	if (NULL == aBranch)    return 0;   

	if (aBranch->Data % 2 == 1 )
	{   
	    
		amount_1++;
	}
	
	ne_par(aBranch->LeftBranch); 
	ne_par(aBranch->RightBranch); 
	return amount_1;
}

int summa(Branch*& aBranch) // ���� ��� ��������
{
	int sum = 0;
	if (aBranch != NULL) {
		sum += summa(aBranch->LeftBranch);
		sum += aBranch->Data;
		sum += summa(aBranch->RightBranch);
	}
	return sum;
}
void add_elem(int aData, Branch*& aBranch) // ��������� ������ ��������
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aData < aBranch->Data) {
			add_elem(aData, aBranch->LeftBranch);
		}
		else if (aData > aBranch->Data) {
			add_elem(aData, aBranch->RightBranch);
		}
	}
}

void FreeTree(Branch* aBranch) // ��������� ���'��
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* del_elem(Branch*& aBranch, int aData) // ��������� ������ ��������
{
	if (aBranch == NULL)
		return aBranch;

	if (aData == aBranch->Data) {

		Branch* tmp;
		if (aBranch->RightBranch == NULL)
			tmp = aBranch->LeftBranch;
		else {

			Branch* ptr = aBranch->RightBranch;
			if (ptr->LeftBranch == NULL) {
				ptr->LeftBranch = aBranch->LeftBranch;
				tmp = ptr;
			}
			else {

				Branch* pmin = ptr->LeftBranch;
				while (pmin->LeftBranch != NULL) {
					ptr = pmin;
					pmin = ptr->LeftBranch;
				}
				ptr->LeftBranch = pmin->RightBranch;
				pmin->LeftBranch = aBranch->LeftBranch;
				pmin->RightBranch = aBranch->RightBranch;
				tmp = pmin;
			}
		}

		delete aBranch;
		return tmp;
	}
	else if (aData < aBranch->Data)
		aBranch->LeftBranch = del_elem(aBranch->LeftBranch, aData);
	else
		aBranch->RightBranch = del_elem(aBranch->RightBranch, aData);
	return aBranch;
}

int main()
{
	setlocale(LC_ALL, "ukr");
	Branch* Root = 0;
	int num;
	int element;

	cout << "����i�� �i���i��� �������i� �i������� ������: ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		Add(rand() % 50, Root); // ���������� ������ ������� �� 0 �� 50
		
	}
	cout << "���i� �i������� ������: " << endl;
	print(Root);
	cout << endl;

	cout << "������ ���i� �i������� ������: " << endl;
	pr_obh(Root);
	cout << endl;
	
	cout << "��������������(�����������) ���i� �i������� ������: " << endl;
	gor_obh(Root);
	cout << endl;

	cout << "��������� �������� � �i����� ������:" << endl;
	cout << "����i�� ������: ";
	cin >> element;
	add_elem(element, Root);

	cout << "���i� �i������� ������: " << endl;
	print(Root);
	cout << endl;

	cout << "��������� �������� � �i������� ������:" << endl;
	cout << "����i�� ������: ";
	cin >> element;
	del_elem(Root, element);

	cout << "���i� �i������� ������: " << endl;
	print(Root);
	cout << endl;

	cout << "�i���i��� ������ �������i�: ";
	cout << par(Root) << endl;
    cout << endl;
    
    cout << "�i���i��� �������� �������i�: ";
	cout << ne_par(Root) << endl;
    cout << endl;
    
	cout << "���� ��i� �������i� �i������� ������: ";
	cout << summa(Root) << endl;
    cout << endl;
    
	FreeTree(Root);
	cout << "��i������� �����i��� ���'��i..." << endl;

	return 0;
}
