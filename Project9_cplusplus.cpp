// Beni Yaratan Elbet Yolumu Gösterir .Şuara7 /8
//Bu program bir küpün alanını,çevresini ve hacmini bulmak için yazılmıştır.
// This program written for calcualte area,perimeter and volume of a cube.

#include <iostream>
using namespace std;


int main()
{
	int side;
	int area;
	int perimeter;
	int volume;
	
	cout << "Please enter a side of cube:" << endl;
	cin >> side;

	area = (side*side*6);
	perimeter = (12 * side);
	volume = (side * side * side);

	cout << endl;

	cout << "Area of cube:\t"<< area << endl;
	cout << "Perimeter of cube:\t"<< perimeter << endl;
	cout << "Volume of cube:\t"<< volume << endl;

	system("PAUSE");
	return 0;
}

