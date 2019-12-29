#include<iostream>

const double inches2mill = 25.4; // global constant

int main() 
{

std::cout << "Enter paper length (inches): ";

double input;

std::cin >> input;

double output {input * inches2millimetres};

std::cout << "Paper length (millimetres): " << output << std::endl;

}

