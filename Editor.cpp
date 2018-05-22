#include <iostream>
#include <windows.h>

using namespace std;

void progammEngine(HANDLE hProcess ) {

	system("cls");
	int option;
		cout << "1 : hack Score" << endl;
		cout << "2 : hack Gems" << endl;
		cout << "3 : hack Hearts" << endl;
		cout << "4 : hack Lives" << endl;
		cout << "5 : hack Ammo" << endl;
		cout << "6 : hack Coins" << endl;
		cout << "your option ? : " ;
		cin >> option;
		if (option > 6 || option < 0) {
			cout << "Invalid Input" << endl;
			system("Pause");
		}
		else {
			if(option == 1) {
				cout << "Enter Score : ";
				int score;
				cin >> score;
				DWORD newdatasize = sizeof(score);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A52A8 , &score , newdatasize , NULL)) {
					cout << "The Score Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			
			else if(option == 2) {
				cout << "Enter Gems : ";
				int Gems;
				cin >> Gems;
				DWORD newdatasize = sizeof(Gems);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A52B8 , &Gems , newdatasize , NULL)) {
					cout << "The Gems Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			else if(option == 3) {
				cout << "Enter Hearts : ";
				int Hearts;
				cin >> Hearts;
				DWORD newdatasize = sizeof(Hearts);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A4F1E , &Hearts , newdatasize , NULL)) {
					cout << "The Hearts Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			
			else if (option == 4) {
				cout << "Enter Lives : ";
				int Lives;
				cin >> Lives;
				DWORD newdatasize = sizeof(Lives);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A5080 , &Lives , newdatasize , NULL)) {
					cout << "The Lives Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			else if (option == 5) {
				cout << "Enter Ammo : ";
				int Ammo;
				cin >> Ammo;
				DWORD newdatasize = sizeof(Ammo);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A52E4 , &Ammo , newdatasize , NULL)) {
					cout << "The Ammo Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			else {
				cout << "Enter Coins : ";
				int Coins;
				cin >> Coins;
				DWORD newdatasize = sizeof(Coins);
				if(WriteProcessMemory(hProcess , (LPVOID)0x005A52B4 , &Coins , newdatasize , NULL)) {
					cout << "The Coins Succesfullt Added" << endl;
					system("Pause");
				} else {
					cout << "There was an error Occupide while access address" << endl;
					system("Pause");
				}
			}
			}

		progammEngine(hProcess);

}

int main() {
	system("color 5F");
	cout << "-> Welcome to Jazz2 Trainer | CODED By Omar ElKhatib <-" << endl;
	system("Pause");

	LPCWSTR wind = L"Jazz Jackrabbit 2 - Dungeon Dilemma";
	HWND hwnd = FindWindow(0,wind);

	if(hwnd == 0) {
		cout << "No Process Found , Please be Sure That You Run The Game" << endl;
		system("Pause");
	} else {
		cout << "Game Process is Found please be Ready , and Enjoy the tool :)" << endl;
		system("Pause");
		DWORD process_ID;
		GetWindowThreadProcessId(hwnd , &process_ID);
		HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS , FALSE , process_ID);

		progammEngine(hProcess);
	}

	main();
}