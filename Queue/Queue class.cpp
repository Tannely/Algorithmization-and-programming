#include <iostream> 

using namespace std; 
 
struct Node 
{ 
    int x; 
    Node* Next; 
}; 
 
 
class List 
{ 
    Node* Head, * Tail; 
public: 
    List() :Head(NULL), Tail(NULL) {}; 
    ~List(); 
    void Add(int x); 
    void Show(); 
    void del(); 
 
}; 
 
 
List::~List() 
{ 
    Node* temp = Head; 
    while (temp != NULL) 
 
    { 
        temp = Head->Next; 
 
        delete Head; 
 
        Head = temp; 
 
    } 
} 
 
 
 
 
void List::Add(int x) 
{ 
    Node* temp = new Node; 
    temp->x = x; 
    temp->Next = NULL; 
 
    if (Head != NULL) 
    { 
        Tail->Next = temp; 
        Tail = temp; 
    } 
    else Head = Tail = temp; 
} 
void List::Show() 
{ 
    Node* temp = Head; 
    while (temp != NULL) 
    { 
        cout << temp->x << " "; 
        temp = temp->Next; 
    } 
    cout << endl; 
} 
 
 
 
void List::del() 
{ 
    if (Head != NULL) 
    { 
        Node* temp = Head; 
        cout << "Елемент " << Head->x << " вийшов" << endl; 
        Head = Head->Next; 
        delete temp; 
    } 
} 
 
 
 
int main() 
{ 
    setlocale(LC_ALL, "Ukrainian"); 
    List lst; 
    system("CLS"); 
    cout << "---------Створення черги за допомогою класу---------" << endl; 
    cout << endl; 
    cout << endl; 
    lst.Add(10); 
    lst.Add(2);        //10   2 
    lst.Add(3);        //10  2   3 
    cout << "Вивід доданих елементів в чергу" << endl; 
    lst.Show();       // =10 2 3 
    cout << "Виделення 1 елемету" << endl; 
    lst.del();      // =2   3 
    cout << "Результат" << endl; 
    lst.Show(); 
    cout << endl; // 
 
 
    lst.Add(50);  //2   3   50 
    lst.Add(55);  //2   3   50   55 
    cout << "-----------------------------------" << endl; 
    cout << "Вивід доданих елементів в чергу" << endl; 
    lst.Show();  // = 2 3 50 55 
    cout << "Додавання ще одного елементу в чергу" << endl; 
    lst.Add(58);  //2   3  50 55 58 
    lst.Show(); 
    cout << "Видалення перших двох елементів черги" << endl; 
    lst.del();    // = 3 50 55 58  
    lst.del();    // = 50 55 58 
    cout << "Результат" << endl; 
    lst.Show();    //  = 50 55 58 
 
    system("PAUSE"); 
    return 0;
}
