#include"Tools.h"

#include<cmath>

std::string Tools::intToString(int number)
{
        ostringstream  os;
        os<<number;
        return os.str();
}


void checkTools()
{
        for(int i=0;i<100;i++)
        {
                std::string ID=Tools::intToString(i);
                std::cout<<"ID"+ID<<"   :"<<i<<std::endl;
        }
}
