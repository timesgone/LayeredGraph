
#include <boost/version.hpp>
#include <iostream>
#include <iomanip>
#include<Qt>
#include "UnitTest.h"

int checkBoostVersion()
{
        using namespace std;
    std::cout << "Boost version: " << std::hex
              << ((BOOST_VERSION >> 20) & 0xF)
              << "."
              << ((BOOST_VERSION >> 8) & 0xFFF)
              << "."
              << (BOOST_VERSION & 0xFF)
              << std::endl;
    std::cout << "Boost version: " << BOOST_LIB_VERSION<<endl;
    return 0;
}

int checkQtVersion()
{
        using namespace std;
        cout<<"Compiled with Qt Version:"<< QT_VERSION_STR<<endl;
                return 0;
};
