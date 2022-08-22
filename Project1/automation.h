#ifndef AUTOMATION_H
#define AUTOMATION_H 
#include<algorithm>  
#include<vector> 
#include<string>  
#include <iostream> 
#include <fstream>
using namespace std;

 double  ph, ec;
 string a, b, c;
 class Winter_Strawberry {
 public:
	virtual void Start();
	virtual void Duct1();
	virtual void Duct2();
	virtual void Ph();
    virtual void Ec();
	virtual void Stop();
};  
 void Winter_Strawberry::Start() {
	     cout << "System has just started\n";
     }
 void Winter_Strawberry::Duct1(){
	     cout << "Duct1 is currently on, turn it off?\n";
	     cin >> a;
	if (a == "yes") {
		cout << "Duct1 is turned off\n"; 
	}
	else if (a == "no") {
		cout << "Duct1 continues to run\n";
	} 
	else {
		cout << "Invalid value...\n Try enter"; 
		Duct1();
	   }
	
       }  
 void Winter_Strawberry::Duct2() {
	    cout << "Duct2 is currently on, turn it off?\n";
	    cin >> b;
	if (b == "yes"||b=="YES"||b=="Yes") {
		cout << "Duct1 is turned off\n";
	     }
	else if (b == "no" || b == "NO" || b == "No") {
		cout << "Duct1 continues to run\n";
	     }
	else {
		cout << "Invalid value...\n"; 
		Duct2();
	     }
         }   
 void Winter_Strawberry::Ph() {
	    cout << "Enter pH value\n";
	    cin >> ph;
	if (ph >= 2.8 && ph <= 4.7) {
		cout << "pH is normal\n";
	     }
	else if (ph < 2.8) {
		cout << "pH low, supplementing...\n";
	for (; ph <= 4.6; ph += 0.3) {
		cout << right <<  "Value::"<<setw(18) << ph << "\n";
		 }
		cout << "pH process has been successfully completed.\n";
	     }
	else {
		cout << "The pH value is high, the water is supplementing\n";
	for (double i = ph; i >= 3.8; i -= 0.3) {
		cout << right <<"Value::" <<setw(18)<< i << "\n";
		}
		cout << "pH process has been successfully completed.\n";
	    }
        }  
void Winter_Strawberry::Ec() {
	    cout << "Enter EC value\n";
	    cin >> ec;
	if (ec >= 1.5 && ph <= 1.9)
		cout << "EC normal.\n";

	else if (ec < 1.5) {
		cout << "EC low, supplementing...\n";
	for (; ec < 2; ec += 0.2) {
		cout << right  << "Value::"<< setw(18)<< ec << "\n";
		}
		cout << "EC process has been successfully completed.\n";
	      }
	else {
		cout << "The EC value is high, the water is supplementing\n";
	for (double i = ec; i >= 1.5; i -= 0.2) {
		cout << right << "Deger::" <<setw(18)<< i << "\n";
		 }
		cout << "EC process has been successfully completed.\n";
	     }
         }  
void Winter_Strawberry::Stop(){

	    cout << "System has just stopped\n";
} 
class Summer_Strawberry :public Winter_Strawberry {
public:
    void Ph() override;
	void Ec() override;
}; 
    void Summer_Strawberry::Ph() {
	    cout << "Please enter a value of ph\n";
        cin >> ph;
	if (ph >= 5.8 && ph <= 6.5)  {
			cout << "pH is normal\n";
		 }
    else if (ph <= 5.8) {
	    cout << "pH is low, supplementing...\n";
	for (; ph < 6.0; ph += 0.3)  {
		cout << left << setw(80); cout << "Value::" << ph << "\n";
	     }
	    cout << "pH process has been successfully completed\n";
         } 
    else {
	    cout << "pH value is high, water suplementing\n";
	for (double i = ph; i >= 5.2; i -= 0.3) {
		cout << "Value::" << i << "\n";
	     } 
        cout << "pH process has been successfully completed\n";
	     } 
	}
	void Summer_Strawberry::Ec() {
		cout << "Please enter a value of Ec\n";
		cin >> ec;
		if (ec >= 1.1 && ec <= 1.6) {
			cout << "Value of Ec is normal\n";
		}
		else if (ec > 1.6) {
			cout << "Ec value is high fixing\n";
			for (; ec >= 1.1; ec -= 0.1) {
				cout << "Decreasing: " << ec << "\n";
			}
		}
		else {
			cout << "Ec value is low fixing\n";
			for (; ec <= 1.6; ec += 0.1) {
				cout << "Increasing: " << ec << "\n";
			}
			cout << "Ec process has been successfully completed\n";
		}
		
	}
#endif