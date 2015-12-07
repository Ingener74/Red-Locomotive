/*
 * Vizer.h
 *
 *  Created on: Dec 7, 2015
 *      Author: pavel
 */

#ifndef BUILD_REDLOCOMOTIVE_VIZER_H_
#define BUILD_REDLOCOMOTIVE_VIZER_H_

#include <iostream>
#include <memory>

class RedLocomotiveContext;

class Message {
public:
    Message() {
    }
    virtual ~Message() {
    }

    std::string data;
};

class Vizer {
public:
    Vizer();
    virtual ~Vizer();

    // UI's events
    void Enter();
    void ReturnToChatsContacts();
    void EnterDialog();
    void Register();
    void Confirm();

    // Protocol's events
    void NewMessage();

    void DoInitial();
    void DoRegistration();

    std::unique_ptr<RedLocomotiveContext> context;
};

#endif /* BUILD_REDLOCOMOTIVE_VIZER_H_ */
