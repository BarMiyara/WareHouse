#include "../include/Customer.h"

Customer::Customer(int id, const string &name, int locationDistance, int maxOrders) : id(id), name(name), locationDistance(locationDistance), maxOrders(maxOrders)
{
}
const string &Customer::getName() const
{
    return name;
}
int Customer::getId() const
{
    return id;
}
int Customer::getCustomerDistance() const
{
    return locationDistance;
}
int Customer::getMaxOrders() const
{
    return maxOrders;
}

int Customer::getNumOrders() const
{
    return orderPlaced;
}
bool Customer::canMakeOrder() const
{
    return maxOrders > orderPlaced;
}

const vector<int> &Customer::getOrdersIds() const
{
    return ordersId;
}

int Customer::addOrder(int orderId)
{
    if (orderPlaced >= maxOrders)
    {
        return -1;
    }

    for (int id : ordersId)
    {
        if (id == orderId)
        {
            return -1;
        }
    }
    orderPlaced++;
    ordersId.push_back(orderId);
    return orderId;
}

SoldierCustomer::SoldierCustomer(int id, const string &name, int locationDistance, int maxOrders):Customer(id,name,locationDistance,maxOrders){}
    SoldierCustomer *SoldierCustomer::clone() const
{
    return new SoldierCustomer(*this);
}

CivilianCustomer::CivilianCustomer(int id, const string &name, int locationDistance, int maxOrders):Customer(id,name,locationDistance,maxOrders){}
    CivilianCustomer *CivilianCustomer::clone() const
{
    return new CivilianCustomer(*this);
}