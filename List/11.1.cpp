#include <iostream>

//#include <fstream>

#include <string>

using namespace std;

struct Student // Student – це є новий ТИП даних, метадані.

{ string Name ;

int mark; // певна інформативна частина

Student * next; // вказівник (pointer) на наступну структуру-вузол у списку

};

//void insert(const string Name,int mark, Student * ptr_st);

int main()

{

int i=1;

Student* studenty;

Student* ptr_studenty= NULL; // допоміжний покаєчик на структуру типу для роботи

Student * head = NULL; // вказівник на голову списку, спочатку він нікуди не вказує

// СТВОРИМО ПЕРШИЙ ЕЛЕМЕНТ

//– запросимо пам`ять під структуру типу Student

studenty = new Student; // Запросили пам’ять під ТИП Student під новий вузол

studenty->Name = "Ivanenko" ;

studenty->mark = 5;

studenty->next = NULL;

head= studenty;

i=1;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

// створимо елементсписку – запросимо память під тип структуру Student

// getchar();

ptr_studenty = studenty->next;

studenty = new Student; // Запросили пам’ять під ТИП Student під новий вузол

studenty-> Name = "Sidorenko" ;

studenty->mark = 3;

ptr_studenty = studenty;

studenty->next = NULL;

i=2;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // Запросили пам’ять під ТИП Student під новий вузол

studenty-> Name = "Korchaha" ;

studenty->mark = 5;

ptr_studenty = studenty;

studenty->next = NULL;

i=3;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // Запросили пам’ять під ТИП Student під новий вузол

studenty-> Name = "Honcharenko" ;

studenty->mark = 4;

ptr_studenty = studenty;

studenty->next = NULL;

i=4;

cout<<i<<"."<<" Name="<< studenty->Name<<" mark="<< studenty->mark<<endl;

//getchar();

delete studenty ;
ptr_studenty = studenty->next;

studenty = new Student; // Запросили пам’ять під ТИП Student під новий вузол

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
