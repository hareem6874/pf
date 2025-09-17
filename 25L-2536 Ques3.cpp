//#include<iostream>
//using namespace std;
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	char opt ='0';
//	cout << "Enter two numbers: ";
//	cin >> num1>>num2;
//	cout << "Enter an operation: ";
//	cin >> opt;
//	cout << "Output: \n";
//	switch (opt) {
//	case'+':
//		cout << "Result: " << num1 + num2;
//		break;
//	case'-':
//		cout << num1 - num2;
//		break;
//	case'*':
//		cout << num1 * num2;
//		break;
//	case'/':
//		switch (num2) {
//		case 0:
//			cout << "Division by zero not allowed";
//			break;
//		default:
//			cout << (double)num1 / num2;
//		}
//		break;
//	case'%':
//		switch (num2) {
//	case 0:
//		cout << "Modulus by zero not allowed";
//		break;
//	default:
//		cout << num1 % num2;
//		break;
//	}
//		   break;
//	case'>':
//		switch (num1 > num2) {
//		case 1:
//			cout << num1 << " is greater than " << num2 << endl;
//			break;
//		default:
//			cout << num1 << " is not greater than " << num2 << endl;
//			break;
//		}
//		break;
//	case'<':
//		switch (num1 < num2) {
//		case 1:
//			cout << num1 << " is lesser than " << num2 << endl;
//			break;
//		default:
//			cout << num1 << " is not lesser than " << num2 << endl;
//			break;
//		}
//		break;
//	case'=':
//		switch (num1 == num2) {
//		case 1:
//			cout << "Both numbers are equal";
//			break;
//		default:
//			cout << "Both numbers are not equal";
//			break;
//		}
//		break;
//	case'&':
//		switch (num1%2==0 && num2 % 2==0) {
//		case 1:
//			cout << "Both numbers are even";
//			break;
//		default:
//			cout << "Both numbers are not even";
//			break;
//		}
//		break;
//	case'|':
//		switch (num1%2!=0 || num2 % 2!=0) {
//		case 1:
//			cout << "Atleast anyone of the numbers is odd"; 
//			break;
//		default:
//			cout << "Both of numbers are not odd";
//			break;
//		}
//		break;
//	}
//	return 0;
//} 