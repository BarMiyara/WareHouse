#include "../include/Order.h"

Order::Order(int id, int customerId, int distance) : id(id), customerId(customerId), distance(distance), collectorId(NO_VOLUNTEER), driverId(NO_VOLUNTEER), status(OrderStatus::PENDING) {}

int Order::getId() const
{
    return id;
}

int Order::getCustomerId() const
{
    return customerId;
}

void Order::setStatus(OrderStatus status)
{
    this->status = status;
}

void Order::setCollectorId(int collectorId)
{
    if (this->collectorId == -1)
    {
        this->collectorId = collectorId;
    }
}

void Order::setDriverId(int driverId)
{
    if (this->collectorId != -1 && this->driverId == -1)
    {
        this->driverId = driverId;
    }
}

int Order::getCollectorId() const
{
    return collectorId;
};

int Order::getDriverId() const
{
    return driverId;
};

OrderStatus Order::getStatus() const
{
    return status;
}
// const string toString() const;
