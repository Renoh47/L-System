#include "turtlegraphics.hpp"

Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}

Point Point::operator+(const Point& right){
	Point result;
	result.x = x + right.x;
	result.y = y + right.y;
	return result;
}

Turtle::Turtle(){
	this->location = Point(0.0,0.0);
	this->turnAngle = 90;
}

Turtle::Turtle(Point p, float angle = 90.0){
	this->location = p;
	this->turnAngle = angle;
}

Turtle::Turtle(float x, float y, float angle = 90.0){
	this->location = Point(x,y);
	this->turnAngle = angle;
}

void Turtle::turn(float angle){
	direction += angle;
}

void Turtle::turnLeft(){
	turn(turnAngle);
}

void Turtle::turnRight(){
	turn(-turnAngle);
}

void Turtle::goForward(float distance = 1.0){
	location += Point((float)(distance*cos(direction*M_PI/180.0)), (float)(distance*sin(direction*M_PI/180.0)));
}

void Turtle::pop(Point* p, float* dir){
	if (locStack.empty() || dirStack.empty()){ //if either of the stacks are empty when pop is called, something is wrong
		*p = NULL;
		*dir = NULL;
		//#ifdef DEBUG
		//std::cout << "locStack/dirStack is empty, dirStack size: " << dirStack.size() << ", locStack size: " << locStack.size() << "." << std::endl;
		//#endif
	}
	*p = locStack.back();
	*dir = dirStack.back();
	locStack.pop_back();
	dirStack.pop_back();
}

