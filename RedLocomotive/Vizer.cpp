/*
 * Vizer.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#include "RedLocomotiveFsm.h"

#include "Vizer.h"

using namespace std;

Vizer::Vizer(VizerView* view) :
    m_view(view) {
    m_context.reset(new RedLocomotiveContext(*view));
}

Vizer::~Vizer() {
}

void Vizer::Enter() {
    m_context->Enter();
}

void Vizer::ReturnToChatsContacts() {
    m_context->ReturnToChatsContacts();
}

void Vizer::EnterDialog() {
    m_context->EnterDialog();
}

void Vizer::Register() {
    m_context->Register();
}

void Vizer::Confirm() {
    m_context->Confirm();
}

void Vizer::NewMessage() {
    m_context->NewMessage();
}
