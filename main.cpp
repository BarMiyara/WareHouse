#include "../include/WareHouse.h"
#include <iostream>

using namespace std;

WareHouse *backup = nullptr;

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "usage: warehouse <config_path>" << std::endl;
        return 0;
    }
    string configurationFile = "/home/users/bsc/miyara/hw1_spl/input_file.txt";
    WareHouse wareHouse(configurationFile);
    wareHouse.start();
    if (backup != nullptr)
    {
        delete backup;
        backup = nullptr;
    }
    return 0;
}

// #include "../include/Volunteer.h"
// #include <iostream>

// int main(int argc, char **argv)
// {

//     Volunteer *c = new CollectorVolunteer(123, "Bar", 4);

//     std::cout << c->getId();

//     return 0;
// };