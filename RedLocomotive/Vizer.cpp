/*
 * Vizer.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#include "RedLocomotiveFsm.h"

#include "Vizer.h"

using namespace std;

Vizer::Vizer() {
    context.reset(new RedLocomotiveContext(*this));
}

Vizer::~Vizer() {
}

void Vizer::Enter() {
    context->Enter();
}

void Vizer::ReturnToChatsContacts() {
    context->ReturnToChatsContacts();
}

void Vizer::EnterDialog() {
    context->EnterDialog();
}

void Vizer::Register() {
    context->Register();
}

void Vizer::Confirm() {
    context->Confirm();
}

void Vizer::NewMessage() {
    context->NewMessage();
}

void Vizer::DoInitial() {
    cout << __PRETTY_FUNCTION__ << endl;
}

void Vizer::DoRegistration() {
    cout << __PRETTY_FUNCTION__ << endl;
}
