/*
 * Copyright (C) 2020 Lukas Pfeifer
 * for TempConv version 1.0
 *      https://github.com/luv4bytes/TempConv
 *
 * This file is part of TempConv.
 *
 * TempConv is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TempConv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with TempConv. If not, see <http://www.gnu.org/licenses/>.
 *
*/

#ifndef CONVERTER_H
#define CONVERTER_H

#include <map>

namespace TempConv
{
    class Converter
    {
        /*  -- 1 degree celsius used to convert --
         *
         *  Following values are based on 1 degree celsius.
         */

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

    private:

        /// Unit mappings based on 1 degree celsius
        std::map<UNITS, double> unitMap =
        {
            {CELSIUS, 1},
            {KELVIN, 274.15},
            {FAHRENHEIT, 33.8},
            {REAUMUR, 0.8},
            {RANKINE, 493.47}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, const double& inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
