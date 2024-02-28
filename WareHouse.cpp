#include "../include/WareHouse.h"
#include "../include/Volunteer.h"
#include "../include/Customer.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// bool isOpen;
// vector<BaseAction *> actionsLog;
// vector<Volunteer *> volunteers;
// vector<Order *> pendingOrders;
// vector<Order *> inProcessOrders;
// vector<Order *> completedOrders;
// vector<Customer *> customers;
// int customerCounter;  // For assigning unique customer IDs
// int volunteerCounter; // For assigning unique volunteer IDs
// int orderCounter;     // For assigning unique order IDs

WareHouse::WareHouse(const string &configFilePath) : isOpen(false), actionsLog(),
                                                     volunteers(), pendingOrders(), inProcessOrders(), completedOrders(), customers(),
                                                     customerCounter(0), volunteerCounter(0), orderCounter(0)
{

    ifstream inputFile(configFilePath);

    // Check if the file is open
    if (!inputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
    }

    // vector<Customer *> soldiers;
    // vector<Customer> civilians;
    // vector<Volunteer> collectors;
    // vector<Volunteer> drivers;

    string line;
    // Read the contents of the file
    while (getline(inputFile, line))
    {
        istringstream iss(line);
        string type;
        iss >> type;

        if (type == "customer")
        {
            customerCounter++;
            string name;
            string roleName;
            int distance, maxOrders;
            iss >> name >> roleName >> distance >> maxOrders;

            Customer *customer; // Declare the variable here

            if (roleName == "soldier")
            {
                customer = new SoldierCustomer(customerCounter, name, distance, maxOrders);
                customers.push_back(customer);
            }
            else if (roleName == "civilian")
            {
                customer = new CivilianCustomer(customerCounter, name, distance, maxOrders);
                customers.push_back(customer);
            }
            else
            {
                cerr << "Invalid customer role: " << roleName << endl;
                // Handle error or throw an exception as needed
            }
        }

        else if (type == "volunteer")
        {
            volunteerCounter++;
            string name;
            string roleName;
            iss >> name >> roleName;

            Volunteer *volunteer;

            // Set volunteer type based on role
            if (roleName == "collector")
            {
                int coolDown;
                iss >> coolDown;
                volunteer = new CollectorVolunteer(volunteerCounter, name, coolDown);
                volunteers.push_back(volunteer);
            }
            else if (roleName == "limited_collector")
            {
                int coolDown, maxOrders;
                iss >> coolDown >> maxOrders;
                volunteer = new LimitedCollectorVolunteer(volunteerCounter, name, coolDown, maxOrders);
                volunteers.push_back(volunteer);
            }
            else if (roleName == "driver")
            {
                int maxDistance, distancePerStep;
                iss >> maxDistance >> distancePerStep;
                volunteer = new DriverVolunteer(volunteerCounter, name, maxDistance, distancePerStep);
                volunteers.push_back(volunteer);
            }
            else if (roleName == "limited_driver")
            {
                int maxDistance, distancePerStep, maxOrders;
                iss >> maxDistance >> distancePerStep >> maxOrders;
                volunteer = new LimitedDriverVolunteer(volunteerCounter, name, maxDistance, distancePerStep, maxOrders);
                volunteers.push_back(volunteer);
            }
        }
    }

    inputFile.close();
}
