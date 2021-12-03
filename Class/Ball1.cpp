#include <iostream>
#include <string>
using namespace std;
class Ball{
	string _firm;
	int _diametr;
	int _mass;
	string _color;
	public:
		Ball(){     
		cout<<"empty constructor called"<<endl; 
		_firm = "None";
		_color = "None";
		_diametr = 0;
		_mass = 0;
		cout<<"empty constructor finished"<<endl;
		}
		Ball(string firm, int diametr,int mass, string color){
			cout<<"constructor with parametrs called"<<endl;
			_firm = firm;
		_diametr = diametr;
		_mass = mass;
		_color = color;
		cout <<"constructor with parametrs stopped"<<endl;
		}
		~Ball(){
			cout<<"destructor called"<< endl;
		}
		
		int GetDiametr(){
			return(_diametr);
		}
		int GetMass(){
			return(_mass);
		}
		string GetFirm(){
			return(_firm);
		}
		string GetColor(){
			return(_color);
		}
		void SetDiametr(int diametr){
			_diametr = diametr;
		}
		void SetMass(int mass){
			_mass = mass;
		}
		void SetFirm(string firm){
			_firm = firm;
		}
			void SetColor(string color){
			_color = color;
		}
};

int main(int argc, char** argv){
    Ball tennis;
    tennis.SetFirm("Re");
    cout<< "\nFirm -  " << tennis.GetFirm()<<endl;
    tennis.SetColor("Blue");
    cout<< "Color -  " << tennis.GetColor()<<endl;
    tennis.SetDiametr(12);
    cout<< "Diametr = " << tennis.GetDiametr()<<"cm"<<endl;
    tennis.SetMass(1);
    cout<< "Mass = " << tennis.GetMass()<<"kg"<<endl;
    Ball football("Mi", 24, 6, "White");
    cout <<football.GetColor()<<endl;
    return 0;
}
