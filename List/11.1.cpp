#include <iostream>

//#include <fstream>

#include <string>

using namespace std;

struct Student // Student � �� � ����� ��� �����, �������.

{ string Name ;

int mark; // ����� ������������ �������

Student * next; // �������� (pointer) �� �������� ���������-����� � ������

};

//void insert(const string Name,int mark, Student * ptr_st);

int main()

{

int i=1;

Student* studenty;

Student* ptr_studenty= NULL; // ��������� ������� �� ��������� ���� ��� ������

Student * head = NULL; // �������� �� ������ ������, �������� �� ����� �� �����

// �������� ������ �������

//� ��������� ���`��� �� ��������� ���� Student

studenty = new Student; // ��������� ������ �� ��� Student �� ����� �����

studenty->Name = "Ivanenko" ;

studenty->mark = 5;

studenty->next = NULL;

head= studenty;

i=1;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

// �������� ������������� � ��������� ������ �� ��� ��������� Student

// getchar();

ptr_studenty = studenty->next;

studenty = new Student; // ��������� ������ �� ��� Student �� ����� �����

studenty-> Name = "Sidorenko" ;

studenty->mark = 3;

ptr_studenty = studenty;

studenty->next = NULL;

i=2;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // ��������� ������ �� ��� Student �� ����� �����

studenty-> Name = "Korchaha" ;

studenty->mark = 5;

ptr_studenty = studenty;

studenty->next = NULL;

i=3;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // ��������� ������ �� ��� Student �� ����� �����

studenty-> Name = "Honcharenko" ;

studenty->mark = 4;

ptr_studenty = studenty;

studenty->next = NULL;

i=4;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // ��������� ������ �� ��� Student �� ����� �����

studenty-> Name = "Maziy" ;

studenty->mark = 3;

ptr_studenty = studenty;

studenty->next = NULL;

i=5;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;



return 0;

}
