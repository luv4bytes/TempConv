#include "TempConv.h"

double TempConv::Converter::Convert(UNITS inUnit, const double& inVal, UNITS outUnit)
{
    double celsius = 0.0;
    double result = 0.0;

    switch(inUnit)
    {
        case CELSIUS:
            celsius = inVal;
            break;

        case KELVIN:
            celsius = inVal / K;
            break;

        case FAHRENHEIT:
            celsius = inVal / C;
            break;

        case REAUMUR:
            celsius = inVal / R;
            break;

        case RANKINE:
            celsius = inVal / Rankine;
            break;

        default:
            break;
    }

    switch(outUnit)
    {
        case CELSIUS:
            result = celsius;
            break;

        case KELVIN:
            result = celsius * K;
            break;

        case FAHRENHEIT:
            result = celsius * F;
            break;

        case REAUMUR:
            result = celsius * R;
            break;

        case RANKINE:
            result = celsius * Rankine;
            break;

        default:
            break;
    }

    return result;
}
