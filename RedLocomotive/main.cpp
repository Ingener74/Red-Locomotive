/*
 * main.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#include <iostream>

#include "Vizer.h"

using namespace std;

int main(int argc, char **argv) {
    try {
        cout << "Red Locomotive" << endl;

        Vizer v;

    } catch (exception const& e) {
        cerr << e.what() << endl;
    }
}

