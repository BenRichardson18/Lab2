/*
Ben Richardson
C++ Fall 2022
Due: September 14th
Lab 2 Exploring Output
Demonstration of my class schedule and a checkboard in code
*/

#include <iostream>
#include <string>
//* We assign constant values to our variables, which can be seen as a date, class and time.
void OutputHeader();
const std::string m = "Monday";
const std::string t = "Tuesday";
const std::string w = "Wednesday";
const std::string th = "Thursday";
const std::string f = "Friday";
const std::string C = "CIS 162";
const std::string X = "Calculus II 216";
const std::string PH = "Classical Physics 212";
const std::string a = "10:00";
const std::string b = "12:00";
const std::string c = "14:30";
const std::string s = "\t";
const std::string l = "  *  *  *  * ";
const std::string ñ = "*  *  *  *";
//* Now we type out the variables in an assigned order as a class schedule and checkboard.
int main()
{
	OutputHeader();
	std::cout << std::endl << m << s << s << a << s << C;
	std::cout << std::endl << m << s << s << b << s << X;
	std::cout << std::endl << m << s << s << c << s << PH;
	std::cout << std::endl << t << s << s << a << s << C;
	std::cout << std::endl << t << s << s << b << s << X;
	std::cout << std::endl << t << s << s << c << s << PH;
	std::cout << std::endl << w << s << a << s << C;
	std::cout << std::endl << w << s << b << s << X;
	std::cout << std::endl << w << s << c << s << PH; 
	std::cout << std::endl << th << s << a << s << C; 
	std::cout << std::endl << th << s << b << s << X; 
	std::cout << std::endl << th << s << c << s << PH; 
	std::cout << std::endl << f << s << s << a << s << C;
	std::cout << std::endl << f << s << s << b << s << X;
	std::cout << std::endl << f << s << s << c << s << PH;

	std::cout << std::endl << l;
	std::cout << std::endl << ñ;
	std::cout << std::endl << l;
	std::cout << std::endl << ñ;
	std::cout << std::endl << l;
	std::cout << std::endl << ñ;
	std::cout << std::endl << l;
	std::cout << std::endl << ñ;
	return 0;
}
//* We assign a value to our header 
void OutputHeader()
{
	std::cout << "Class Schedule Fall 2022";
}