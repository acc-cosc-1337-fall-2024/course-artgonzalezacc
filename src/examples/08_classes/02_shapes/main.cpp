//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::vector;

int main() 
{
	vector<Shape*> shapes;
	shapes.push_back(new Line());//create Line on the heap
	shapes.push_back(new Circle());//create Circle on the heap

	for(auto shape: shapes)
	{
		shape->draw();
	}

	for(auto shape: shapes)
	{
		delete shape;
		shape = nullptr;
	}


	return 0;
}