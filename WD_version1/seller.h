#ifndef SELLER_H
#define SELLER_H

#include "user.h"

class Seller : public User
{
public:
    Seller();
    Seller(int id, QString userName, QString password, double balance = 0.0);

    userClass getClass();
};

#endif // SELLER_H
