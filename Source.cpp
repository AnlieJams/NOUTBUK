#include <iostream>
#include "LAPTOP.h"
using namespace std;

int main() {
	Laptop laptop;
	laptop.Show();
	cout << "\n";

	Mouse mouse("Bloody");
	Printer printer("Canon", "White");
	Webcam webcam("HAIBAR", "1080p");

	Laptop* laptop2 = new Laptop("Ryzen", 3.6, "Radeon RX", 580, "Exceleram", 16, &mouse, &printer, &webcam);
	laptop2->Show();
	delete laptop2;
	cout << "\n";
}