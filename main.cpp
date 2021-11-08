#include <iostream>
using namespace  std;

class Miary{
	public:
		float km;
		PobierzDane(){
			cout<<"Prosze podac kilometry : ";
			cin>>km;
		}
		WyswietlDane(){
			float fml = km * 0.621371;
			float ft = km * 3280.84;
			cout<<"Mila rowna sie: "<< fml<<" ,a stopa rowna sie: "<<ft;
		}
		metryczka(){
			string name = "\n\nWykonala Davydiuk Karina 3Cg";
			cout<<name;
		}
};

int main() {
	Miary licz;
	
	licz.PobierzDane();
	licz.WyswietlDane();
	licz.metryczka();
}
