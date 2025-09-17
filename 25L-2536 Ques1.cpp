//#include<iostream>
//#include<string>
//using namespace std;
//int main() { 
//	int choice = 0;
//	double quantity = 0;
//	int currency = 0;
//	double mealprice = 0;
//	double salestax = 0;
//	double totalprice = 0;
//	string currencysymbol= "Rs.";
//	cout << "Code \t  Meal \t            Per kg Price in Pakistani rupees \n";
//	cout << "1 \t Chicken Handi      1800 \n";
//	cout << "2 \t Chicken Karahi     2000 \n" ;
//	cout << "3 \t Chicken Tikka      2200 \n" ;
//	cout << "4 \t Chicken Haleem     500  \n" ;
//	cout << "5 \t Creamy Chicken     2500 \n" ;
//	cout << "************************************* \n";
//	cout << "Please enter your choice: ";
//	cin >> choice;
//	if (choice < 1 || choice > 5){
//		cout << "Invalid input";
//		return 0;
//	}
//	cout << "************************************* \n";
//	cout << "Please enter quantity in kgs: ";
//	cin >> quantity;
//	if (quantity <= 0) {
//		cout << "Invalid input";
//		return 0;
//	}
//	cout << "************************************* \n";
//	cout << "Enter the currency in which you want to pay: 1 for Pkr, 2 for Dollar and, 3 for Euro: ";
//	cin >> currency;
//	if (currency < 1 || currency> 3) {
//		cout<<"Invalid input";
//		return 0;
//	}
//	cout << "************************************* \n";
//	cout << "Meal Price: ";
//	if (choice == 1) {
//		mealprice= 1800 * quantity;
//		
//	}
//	else if (choice == 2) {
//		mealprice = 2000 * quantity;	 
//		
//	}
//	else if (choice == 3) {
//		mealprice= 2200 * quantity;
//		
//	}
//	else if (choice == 4) {
//		mealprice= 500 * quantity;
//		
//	}
//	else if (choice == 5) {
//		mealprice= 2500 * quantity;
//		
//	}
//	 if (mealprice >= 1000 && mealprice<=3000) {
//		salestax = 0.02 * mealprice;
//	}
//	else if (mealprice > 3000) {
//		 salestax = 0.05 * mealprice;
//	}
//	totalprice = mealprice + salestax;
//	
//	 if (currency == 2) {
//		 totalprice = totalprice / 165;
//		mealprice = mealprice / 165;
//		salestax = salestax / 165;
//		currencysymbol = "$";
//	}
//	else if (currency == 3) {
//		 totalprice = mealprice / 193;
//		mealprice = mealprice / 193;
//		salestax = salestax / 193;
//		currencysymbol = "€";
//	}
//	cout << "Meal Price: " << currencysymbol << mealprice << endl;
//	cout << "Sales Tax: " << currencysymbol << salestax << endl;
//	cout << "Total price: " << currencysymbol << totalprice;
//	return 0;
//}