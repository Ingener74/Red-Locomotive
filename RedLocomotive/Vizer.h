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

class VizerView {
public:
    VizerView() = default;
    virtual ~VizerView() = default;

    virtual void DoInitial() = 0;
    virtual void DoRegistration() = 0;
    virtual void DoConfirmation() = 0;
    virtual void DoWork() = 0;
};

class Vizer {
public:
    Vizer(VizerView*);
    virtual ~Vizer();

    // UI's events
    void Enter();
    void ReturnToChatsContacts();
    void EnterDialog();
    void Register();
    void Confirm();

    // Protocol's events
    void NewMessage();

    VizerView* m_view;
    std::unique_ptr<RedLocomotiveContext> m_context;
};

#endif /* BUILD_REDLOCOMOTIVE_VIZER_H_ */
