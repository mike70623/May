#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
void quotes();
char input = 'a';
int main() {

	srand(time(NULL));
	cout << "Here are some quotes i found!" << endl << endl;
	system("pause");
	while (input != 'q') {
		quotes();
		system("pause");
	}

}
void quotes() {
	int num = rand() % 100 + 1;
	if (num < 20)
		cout << "Do I look normal to you!?-Danny Devito,Twins" << endl << endl;
	else if ((num >= 21) && (num <= 40))
		cout << "those who know nothing can understand nothing.-ansem,Kingdom Hearts 2" << endl << endl;
	else if ((num >= 41) && (num <= 60))
		cout << "We are all pawns of something even greater:memes, the DNA of the soul.-Monsoon,Metal gear rising Revengeance" << endl << endl;
	else if ((num >= 61) && (num <= 80))
		cout << "im just the product of the system of catastrophe, yet a masterpeice, yet im half diseased.-Dan Reynolds, Whatever it Takes" << endl << endl;
	else if ((num >= 81) && (num <=101))
		cout << "I don't want to set the world on fire, I just want to start a flame in your heart.-The Ink Spots,I Don't Want to Set the World on Fire" << endl << endl;
}