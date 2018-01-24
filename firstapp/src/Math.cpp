/*
 * Math.cpp
 *
 *  Created on: Jan 21, 2018
 *      Author: tamer
 */

#include "Math.h"

int Math::pow(int base, int exp)
    {
        int result = 1;

        for (int i = 0; i < exp; i++)
        {
            result = result * base;
        }

        return result;
    }

