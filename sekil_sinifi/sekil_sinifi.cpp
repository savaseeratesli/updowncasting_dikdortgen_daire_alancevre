#include <iostream>
#include "shape.h"

using namespace std;

int main()
{
	Shape* sArr[] = { new Rectangle(4.0,5.0),new Rectangle(4.3,5.5),new Rectangle(5.0,5.0),new Circle(3.2),new Circle(6.2) };

	int numberShape = sizeof(sArr) / sizeof(sArr[0]);//Eleman sayısını bulma,tüm array kapladığı alan/bir array kapladığı alan

	for (int i = 0; i < numberShape; i++)
	{
		//işaretçiden nesnelerin üyelerine erişmek için ->
		sArr[i]->calculateArea();
		sArr[i]->calculatePerimeter();
		sArr[i]->display();
	}
   
}


