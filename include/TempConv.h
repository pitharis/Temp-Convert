#include <iostream>
#include <math.h>
#ifndef TEMPCONV_H
#define TEMPCONV_H

using namespace std;

class TempConv
{
    public:
        TempConv();
        ~TempConv();

        void setTempToConv(double temp);
        void setConvTemp(double temp);
        double getTempToConv();
        double getConvTemp();
        double convCelToFar(double db);
        double convCelToKel(double db);
        double convKeltoFar(double db);
        double convKeltoCel(double db);
        double convFartoCel(double db);
        double convFartoKel(double db);
        void printErrorMessage(int i);
        void checkWhatConv(int i, char** c);

    private:
        double tempToconv;
        double convTemp;
};

#endif // TEMPCONV_H
