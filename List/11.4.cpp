#include <iostream>
#include <string>
using namespace std;
struct Student			// Student � �� � ����� ��� �����, �������.
{
  string Name;
  int mark;			// ����� ������������ �������
  Student *next;	// ���������� �������� ���������-����� � ������
};
int i = 1;			//!!!- ��'������ ���������!- ���� ���� � ��� � ��� ��������
void insert (const string Name, int mark, Student * ptr_st);
int
main ()
{
  Student *studenty;
  Student *head = NULL; // �������� �� ������ ������, ��������
  // �������� ������ ������� � ��������� ������ �� ��������� ���� Student
  studenty = new Student; // ��������� ������ �� ��� Student �� �����
  studenty->Name = "Ivanenko";
  studenty->mark = 5;
  studenty->next = NULL;
  head = studenty;
  i = 1;
  cout << i << "." << " Name=" << studenty->Name << " mark=" << studenty-> mark << endl;
   
   // �������� ������� ������ � ��������� ������ �� ��� ��������� Student 
  insert ("Sidorenko", 3, studenty);
  insert ("Samchuk", 5, studenty);
  insert ("Shanedza", 4, studenty);
  insert ("Cuhanov", 4, studenty);
  insert ("Korchaha", 5, studenty);
  insert ("Honcharenko", 4, studenty);
  insert ("Maziy", 3, studenty);
  insert ("Lazarenko", 5, studenty);
  insert ("Budonnyy", 5, studenty);
  studenty = head;
  int four_mark = 0;
  
  while (studenty != NULL)
    {
       
        if(studenty->mark == 4) {
            four_mark++;
            cout <<endl << "Mark is 4: " << studenty->Name << endl;
        }
        studenty = studenty->next;
    }
    cout <<endl <<"Students with 4 (count): " << four_mark << endl;
    delete studenty;
  return 0;
}
void
insert (const string Name, int mark, Student * ptr_st)
{
  Student *newStudent = new Student;
  newStudent->Name = Name;
  newStudent->mark = mark;
  newStudent->next = ptr_st->next;
  ptr_st->next = newStudent;
  i++;
  cout << i << "." << " Name=" << newStudent->Name;
  cout << " mark=" << newStudent->mark << endl;
}
