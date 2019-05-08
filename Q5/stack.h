//
// Created by Vahid on 5/3/2019.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <memory> // for std::shared_ptr
#include "ctext.h"
#include <cstring>

template<class T>
class Stack {
public:
    Stack() = default;
    //Stack(const T& pT);
    //Stack(std::shared_ptr<T> pT);
    Stack(const Stack& stack);
    //Stack();
    ~Stack();

private:
    class Node {
    public:
        T item {};
        Node* next {};

        Node(const T& item1) : item(item1) {};
    };

    Node* head {};
   // std::shared_ptr<T> sharedPtr;

public:
    void push(const T& item);
    T pop();
    bool isEmpty() const;
    int getcount() const;
};

#endif //Q5_STACK_H
