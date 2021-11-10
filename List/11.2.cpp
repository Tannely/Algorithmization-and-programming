#include <iostream>

#include <string>

using namespace std;

struct Student // Student – це є новий ТИП даних, метадані.

{

string Name ;

int mark; // певна інформативна частина

Student * next; // вказівникна наступну структуру-вузол у списку

};

int i=1;//!!!- об'явлена глобально!- буде одне й теж у всіх функціях

void insert(const string Name,int mark, Student * ptr_st);

int main()

{

Student* studenty;

Student* head = NULL; // вказівник на голову списку, спочатку

// СТВОРИМО ПЕРШИЙ ЕЛЕМЕНТ – запросимо память під структуру типу Student

studenty = new Student; // Запросили пам’ять під ТИП Student під новий

studenty->Name = "Ivanenko" ;

studenty->mark = 5;

studenty->next = NULL;

head= studenty;

i=1;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

// створимо елемент списку – запросимо память під тип структуру Student

insert("Sidorenko",3, studenty);
insert("Samchuk",5, studenty);
insert("Shanedza",4, studenty);
insert("Cuhanov",4, studenty);
insert("Korchaha",5, studenty);
insert("Honcharenko",4, studenty);
insert("Maziy",3, studenty);
insert("Lazarenko",5, studenty);
insert("Budonnyy",5, studenty);


delete studenty ;

return 0;

}

void insert(const string Name,int mark, Student* ptr_st)

{

Student * newStudent = new Student;

newStudent->Name = Name ;

newStudent->mark = mark ;

newStudent->next = ptr_st ->next;

ptr_st ->next = newStudent;

i++;

cout<<i<<"."<<" Name="<< newStudent->Name;

cout<<" mark="<< newStudent->mark<<endl;


Student* studenty;

Student* head = NULL; // вказівник на голову списку, спочатку

// СТВОРИМО ПЕРШИЙ ЕЛЕМЕНТ – запросимо память під структуру типу Student

studenty = new Student; // Запросили пам’ять під ТИП Student під новий

studenty->Name = "Ivanenko" ;

studenty->mark = 5;

studenty->next = NULL;

head= studenty;

i=1;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;
void insert(const string Name,int mark, Student * ptr_st);
insert("Sidorenko",3, studenty);
insert("Samchuk",5, studenty);
insert("Shanedza",4, studenty);
insert("Cuhanov",4, studenty);
insert("Korchaha",5, studenty);
insert("Honcharenko",4, studenty);
insert("Maziy",3, studenty);
insert("Lazarenko",5, studenty);
insert("Budonnyy",5, studenty);


}
