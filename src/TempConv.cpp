#include "TempConv.h"

TempConv::TempConv()
{
    //ctor
}

TempConv::~TempConv()
{
    //dtor
}

void TempConv::setTempToConv(double temp)
{
    tempToconv = temp;
}

void TempConv::setConvTemp(double temp)
{
    convTemp = temp;
}

double TempConv::getTempToConv()
{
    return tempToconv;
}

double TempConv::getConvTemp()
{
    return convTemp;
}

double TempConv::convCelToFar(double db)
{
    double tmp;

    tmp = (db * 1.8) + 32;
    setConvTemp(tmp);

    return getConvTemp();
}
double TempConv::convCelToKel(double db)
{
    double tmp;

    tmp = db + 273.15;
    setConvTemp(tmp);

    return getConvTemp();
}
double TempConv::convKeltoFar(double db)
{
    double tmp;

    tmp = (db * 1.18) - 459.67;
    setConvTemp(tmp);

    return getConvTemp();
}
double TempConv::convKeltoCel(double db)
{
    double tmp;

    tmp = db - 273.15;
    setConvTemp(tmp);

    return getConvTemp();
}
double TempConv::convFartoCel(double db)
{
    double tmp;

    tmp = (db - 32)/1.8;
    setConvTemp(tmp);

    return getConvTemp();
}
double TempConv::convFartoKel(double db)
{
    double tmp;

    tmp = (db + 459.67)/1.8;
    setConvTemp(tmp);

    return getConvTemp();
}

void TempConv::printErrorMessage(int i)
{
    if (i == 1)
    {
        cout << "Run program using three parameters as following: type of temperature to" << endl;
        cout << "convert, amount of temperature and type of temperature for conversion" << endl;
        cout << "Use c or C for Celsius f or F for Fahrenheit and k or K for Kelvin" << endl;
        cout << "as the first and third parameters and a double for temperatur to convert." << endl;
        cout << "Example tempconv c 200 k to convert 200 degree form Celsius to Kelvin" << endl;
    } else if (i == 2)
    {
        cout << "You need two more parameters." << endl;
        cout << "Example tempconv c 200 k to convert 200 degree form Celsius to Kelvin" << endl;
    } else if (i == 3)
    {
        cout << "You need one more parameter." << endl;
        cout << "Example tempconv c 200 k to convert 200 degree form Celsius to Kelvin" << endl;
    }

}

void TempConv::checkWhatConv(int i, char** c)
{
    double tmp;

    switch (i)
    {
    case 1 :
        {
            //cout << "Int = " << i << endl;
            printErrorMessage(i);
            break;
        }

    case 2 :
        {
            //cout << "Int = " << i << endl;
            printErrorMessage(i);
            break;
        }
    case 3 :

        {
            //cout << "Int = " << i << endl;
            printErrorMessage(i);
            break;
        }

    case 4 :
        {

            try
            {
                tmp = stod(c[2]);
                cout << "Temperature to convert is " << tmp << endl;
            }
            catch(...)
            {
                cout << "Error in second parameter" << endl;
                cout << "No convertion is possible. Check the temperature you want" << endl;
                cout << "to convert again!! It MUST be a double number." << endl;
                break;
            }
            //cout << "Int = " << i << endl;
            if ((c[1][0] == 'c' || c[1][0] == 'C') && (c[3][0] == 'f' || c[3][0] == 'F'))
            {
                setTempToConv(stod(c[2]));
                cout << "Converting " << getTempToConv() << " degree from Celsius to Fahrenheit" << endl;
                cout << "Converted temperature is " << convCelToFar(getTempToConv()) << endl;

            } else if ((c[1][0] == 'c' || c[1][0] == 'C') && (c[3][0] == 'k' || c[3][0] == 'K'))
            {
                setTempToConv(stod(c[2]));
                cout << "Convertion " << getTempToConv() <<" degree from Celsius to Kelvin" << endl;
                cout << "Converted temperature is " << convCelToKel(getTempToConv()) << endl;

            } else if ((c[1][0] == 'f' || c[1][0] == 'F') && (c[3][0] == 'c' || c[3][0] == 'C'))
            {
                setTempToConv(stod(c[2]));
                cout << "Convertion " << getTempToConv() <<" from Fahrenheit to Celsius" << endl;
                cout << "Converted temperature is " << convFartoCel(getTempToConv()) << endl;

            } else if ((c[1][0] == 'f' || c[1][0] == 'F') && (c[3][0] == 'k' || c[3][0] == 'K'))
            {
                setTempToConv(stod(c[2]));
                cout << "Convertion " << getTempToConv() <<" from Fahrenheit to Kelvin" << endl;
                cout << "Converted temperature is " << convFartoKel(getTempToConv()) << endl;

            } else if ((c[1][0] == 'k' || c[1][0] == 'K') && (c[3][0] == 'c' || c[3][0] == 'C'))
            {
                setTempToConv(stod(c[2]));
                cout << "Convertion " << getTempToConv() <<" from Kelvin to Celsius" << endl;
                cout << "Converted temperature is " << convKeltoCel(getTempToConv()) << endl;

            } else if ((c[1][0] == 'k' || c[1][0] == 'K') && (c[3][0] == 'f' || c[3][0] == 'F'))
            {
                setTempToConv(stod(c[2]));
                cout << "Convertion " << getTempToConv() <<" from Kelvin to Fahrenheit" << endl;
                cout << "Converted temperature is " << convKeltoFar(getTempToConv()) << endl;

            } else
            {
                cout << "No convertion is posible. Check parameters again!!" << endl;
            }

            break;
            }
    default :
            {

                cout << "int = " << i << " Default case...." << endl;
            }

    }

}
