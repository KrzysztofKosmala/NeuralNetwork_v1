//
// Created by Lenovo on 2018-03-21.
//

#include "../include/Neuron.h"



double Neuron::getVal()  {
    return val;
}
//
//double Neuron::getActivatedVal()  {
//    return activatedVal;
//}
//
//double Neuron::getDerivedVal()  {
//    return derivedVal;
//}

Neuron::Neuron(double val) : val(val)
{
}

void Neuron::setVal(double val)
{
    this->val=val;

}


