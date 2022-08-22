#include<iostream> 
#include<algorithm>
#include<vector>
#include<cctype>
#include<iterator>
#include<iomanip>
#include <initializer_list>
#include <iostream>
#include <map> 
#include"automation.h" 

using namespace std; 
/*void strwbry(Winter_Strawberry* ptr) {
	ptr->Start(); 
	ptr->Duct1();
	ptr->Duct2();
	ptr->Ph();
	ptr->Ec();
	ptr->Stop();
} 
void strwbry(Winter_Strawberry& ptr) {
	ptr.Start();
	ptr.Duct1();
	ptr.Duct2();
	ptr.Ph();
	ptr.Ec();
	ptr.Stop();

} 
/*static double c = 12.2;
	while(c>=1.6){ 
		cout << c << "\n";
		c -= 0.5;
	} 
//Summer_Strawberry* mx= Winter_Strawberry(&ptr);
//strwbry(ptr);*/
int main()
{  
	Summer_Strawberry mx;
	mx.Start(), mx.Duct1(), mx.Duct2(), mx.Ph(), mx.Ec(), mx.Stop();
	

}
