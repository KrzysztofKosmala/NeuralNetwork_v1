#include <iostream>
#include "Neuron.h"
#include "Matrix.h"
#include <random>
#include <ctime>

#include "NeuralNetwork.h"


using namespace std;


int main()
{
    srand( time( NULL ) );
    // 2-2 19:02
    NeuralNetwork n1("..//..//input.txt","..//..//targets.txt");
   // NeuralNetwork n2("..//..//input2.txt","..//..//targets2.txt","..//..//error2.txt");
//    NeuralNetwork n3("..//..//input3.txt","..//..//targets3.txt","..//..//error3.txt");
//    NeuralNetwork n4("..//..//input4.txt","..//..//targets4.txt","..//..//error4.txt");


    n1.backpropagation();
//    n2.backpropagation();
//    n3.backpropagation();
//    n4.backpropagation();

//    NeuralNetwork::error_o_avg("..//..//error1.txt", "..//..//error2.txt","..//..//error3.txt","..//..//error4.txt");
  // n.printToConsole();

    n1.printToConsole();
//    n2.printToConsole();
//    n3.printToConsole();
//    n4.printToConsole();


    return 0;
}