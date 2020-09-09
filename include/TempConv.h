#ifndef CONVERTER_H
#define CONVERTER_H

namespace TempConv
{
    class Converter
    {
        /*  -- 1 degree celsius used to convert --
         *
         *  Following values are based on 1 degree celsius.
         */

        /// Degree celsius
        const double C = 1;
        /// Kelvin
        const double K = 274.15;
        /// Degree Fahrenheit
        const double F = 33.8;
        /// Reaumur
        const double R = 0.8;
        /// Rankine
        const double Rankine = 493.47;

    public:

        /// Supported temperature units.
        enum UNITS
        {
            /// Degree celsius
            CELSIUS,
            /// Kelvin
            KELVIN,
            /// Degree Fahrenheit
            FAHRENHEIT,
            /// Reaumur
            REAUMUR,
            /// Rankine
            RANKINE
        };

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, const double& inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
