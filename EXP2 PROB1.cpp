#include <iostream>
#include <conio.h>
using namespace std;

 int main()
 {
	 char package; 
	 int hoursUsed, TotalAmount;

	 cout << "Please enter your package letter (A, B, or C only): " << endl;
	 cin >> package;

	 if (package == 'A'){
	 cout << "Please enter how many hours used: " << endl;  
	 cin >> hoursUsed;

		 if (hoursUsed > 10){
		 TotalAmount = 995 + (hoursUsed - 10)*20; 
		 }
		 else {
			 TotalAmount = 995;
		 }
	cout << "Your total amount due: " << TotalAmount << endl;
	 }
	  
	 else if (package == 'B'){
	 cout << "Please enter how many hours used: " << endl;  
	 cin >> hoursUsed;

		 if (hoursUsed > 20){ 
		 TotalAmount = 1495 + (hoursUsed - 20)*10;
		 }
		 else {
			 TotalAmount = 1495;
		 }
	cout << "Your total amount due: " << TotalAmount << endl;
	 }

	 if (package == 'C'){
			 TotalAmount = 1995; 
	cout << "Your total amount due: " << TotalAmount << endl;
	 }


	getch();
	return 0;
 }
