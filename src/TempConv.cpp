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

#include "TempConv.h"

double TempConv::Converter::Convert(UNITS inUnit, const double& inVal, UNITS outUnit)
{
    double celsius = inVal / unitMap[inUnit];
    double result = celsius * unitMap[outUnit];

    return result;
}
