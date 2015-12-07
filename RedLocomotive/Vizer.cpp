/*
 * Vizer.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#include "RedLocomotiveFsm.h"

#include "Vizer.h"

Vizer::Vizer() {
    context.reset(new RedLocomotiveContext(*this));
}

Vizer::~Vizer() {
}

