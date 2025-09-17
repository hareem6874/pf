//#include<iostream>
//using namespace std;
//int main() {
//	int birthdate, birthmonth, birthyear = 0;
//	int currdate, currmonth, curryear = 0;
//	int exactdate, exactmonth, exactyear = 0;
//	int daysinmonth = 0;
//	cout << "Enter your Birthdate (dd mm yyyy): ";
//	cin >> birthdate >> birthmonth >> birthyear;
//	cout << "Enter Currentdate (dd mm yyyy): ";
//	cin >> currdate >> currmonth >> curryear;
//	exactdate = currdate - birthdate;
//	exactmonth = currmonth - birthmonth;
//	exactyear = curryear - birthyear;
//	if (exactdate <= 0 && exactmonth <= 0 && exactyear <= 0) {
//		exactyear = curryear - 1;
//	}
//	if (exactdate < 0) {
//		switch (currmonth - 1) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			daysinmonth = 31;
//			break;
//		case2:
//			if ((curryear % 400 == 0) || (curryear % 4 == 0) && (curryear % 100 != 0))
//				daysinmonth = 29;
//			else
//				daysinmonth = 28;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//		daysinmonth = 30;
//		break;
//	}
//		exactdate = exactdate + daysinmonth;
//		exactmonth--;
//}
//	if (exactmonth < 0) {
//		exactmonth = exactmonth + 12;
//		exactyear--;
//	}
//	cout << "Your age is " << exactyear << " years," << exactmonth << " months,and " << exactdate << " days.";
//	return 0;
//}