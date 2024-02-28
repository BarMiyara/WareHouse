#include "../include/Volunteer.h"

// Class Volunteer
Volunteer::Volunteer(int id, const string &name) : id(id), name(name), completedOrderId(NO_ORDER), activeOrderId(NO_ORDER) {}

int Volunteer::getId() const
{
    return id;
}

const string &Volunteer::getName() const
{
    return name;
}

int Volunteer::getActiveOrderId() const
{
    return activeOrderId;
}

int Volunteer::getCompletedOrderId() const
{
    return completedOrderId;
}

bool Volunteer ::isBusy() const
{
    return activeOrderId != NO_ORDER;
}

// Class CollectorVolunteer

CollectorVolunteer::CollectorVolunteer(int id, const string &name, int coolDown) : Volunteer(id, name), coolDown(coolDown), timeLeft(coolDown) {}

CollectorVolunteer *CollectorVolunteer::clone() const
{

    return new CollectorVolunteer(*this);
}

// Fix it
void CollectorVolunteer::step()
{
    if (timeLeft > 0)
    {
        timeLeft--;
    }
}

int CollectorVolunteer::getCoolDown() const
{
    return coolDown;
}

int CollectorVolunteer::getTimeLeft() const
{
    return timeLeft;
}

bool CollectorVolunteer::decreaseCoolDown()
{
    timeLeft--;
    return timeLeft == 0;
}

bool CollectorVolunteer::hasOrdersLeft() const
{
    return true;
}

bool CollectorVolunteer::canTakeOrder(const Order &order) const
{
    return (hasOrdersLeft() && !isBusy() == true && order.getCollectorId() == -1);
}

void CollectorVolunteer::acceptOrder(const Order &order)
{
    activeOrderId = order.getId();
    timeLeft = coolDown;
}