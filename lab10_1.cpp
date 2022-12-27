#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	
	double p,l,y;
	int i = 1;
	cout << "Enter initial loan: ";
	cin>>l;
	cout << "Enter interest rate per year (%): ";
	cin>>p;
	cout << "Enter amount you can pay per year: ";
	cin>>y;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(l>0){
		
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << l;
	cout << setw(13) << left << p*l/100;
	cout << setw(13) << left << l+(p*l/100);
	if(l+(p*l/100)>y){
		cout << setw(13) << left << y;
	}else{
		y=l+(p*l/100);
		cout << setw(13) << left << y;
	}
	cout << setw(13) << left << l+(p*l/100)-y;
	cout << "\n";
	l=l+(p*l/100)-y;

	i++;
}
	
	return 0;
}
