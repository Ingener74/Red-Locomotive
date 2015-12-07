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

    std::unique_ptr<RedLocomotiveContext> context;
};

#endif /* BUILD_REDLOCOMOTIVE_VIZER_H_ */
