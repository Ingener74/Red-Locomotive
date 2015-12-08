/*
 * main.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#include <iostream>

#include "Vizer.h"

using namespace std;

class View: public VizerView {
public:
    virtual void DoInitial() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual void DoRegistration() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual void DoConfirmation() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual void DoWork() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main(int argc, char **argv) {
    try {
        cout << "Red Locomotive" << endl;

        View view;

        Vizer v(&view);

        v.Enter();

        v.Register();

        v.Confirm();

    } catch (exception const& e) {
        cerr << e.what() << endl;
    }
}

