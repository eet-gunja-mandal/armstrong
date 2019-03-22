// ConsoleApplication11.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include<ostream>
#include<math.h>
using namespace std;
class coordinate
{
private:
	float x_coordinate;
	float y_coordinate;
	float z_coordinate;

public:
	coordinate(float x = 0, float y = 0, float z = 0) :x_coordinate(x), y_coordinate(y), z_coordinate(z) {};
	//coordinate(float x, float y. float z) {
	//	x_coordinate = x;
	//	y_coordinate = y;
	//	z_coordinate = z;
	
	//}
	float distaceFrom(coordinate abc)
	{
		return pow(pow((abc.x_coordinate - x_coordinate), 2) + pow((abc.y_coordinate - y_coordinate), 2) + pow((abc.z_coordinate - z_coordinate), 2), 0.5);
	}
	float calcnormal()
	{


		
	}
};



int main()
{
	coordinate  A(12, 23, 45);
	coordinate B(34, 31, 45);
	int dist = A.distaceFrom(B);
	std::cout << "The distance between the two ponts is " << dist << std::endl;
	std::cout << "The distance from origin is " << A.distaceFrom(coordinate()) << endl;
	system("pause");
	return 0;

}

