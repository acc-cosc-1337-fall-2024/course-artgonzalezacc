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
	Line line;
	Circle circle;

	vector<Shape*> shapes;
	shapes.push_back(&line);
	shapes.push_back(&circle);

	for(auto shape: shapes)
	{
		shape->draw();
	}

	return 0;
}