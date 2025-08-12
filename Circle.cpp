#include "Circle.h"
#include <iostream>

void Circle::Size() {
	answer = radius * radius * 3.14f;
}

void Circle::Draw() {
	printf("‰~‚Ì–ÊÏF%0.2f\n", answer);
}