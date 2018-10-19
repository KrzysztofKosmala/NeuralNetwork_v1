//
// Created by Lenovo on 2018-03-21.
//

#ifndef ZADANIE_2_NEURON_H
#define ZADANIE_2_NEURON_H

#include <math.h>

class Neuron
{
private:
   double val;
//    double activatedVal;
//    double derivedVal;

public:
    Neuron(double val);

    void setVal(double val);

    double getVal();

//    double getActivatedVal();
//
//    double getDerivedVal();
};


#endif //ZADANIE_2_NEURON_H
