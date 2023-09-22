#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src); // Copy constructor
    ScalarConverter& operator=(const ScalarConverter& other); // Copy assignment operator
    ~ScalarConverter();

public:
    static void toInt(std::string s);
    static void toChar(std::string s);
    static void toFloat(std::string s);
    static void convert(std::string s);
    static void toDouble(std::string s);
    static void handlePseudoLiterals(std::string s);
};

#endif
