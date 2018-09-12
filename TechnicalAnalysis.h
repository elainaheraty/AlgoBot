#ifndef TechnicalAnalysis_h
#define TechnicalAnalysis_h
#include<vector>
#include<string>
#include <cmath> //abs val
#include <iostream>
#include "JSONdata.h"

//TODO: add more Technical Indicators
//Holds all TI values in vectors

void copyVec(const std::vector<double> &, std::vector<double> &, int);

//Calculates values of TechnicalIndicators and stores them
class TechnicalAnalysis
{
  std::vector<double> RSI, stochRSI,SMA,EMA;
  public:
    void calcRSI(const JSONdata &);
    void calcStochRSI();
    void calcSMA();
};

#endif