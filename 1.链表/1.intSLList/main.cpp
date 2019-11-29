//
// Created by atticus on 2019/11/29.
//
#include <iostream>
#include "intSLList.h"

int main()
{
    intSLList *p = new intSLList();
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(1);
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(2);
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(3);
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(4);
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(5);
    std::cout<<"------------------------------"<<std::endl;
    p->addToHead(6);
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->addToTail(2);
    std::cout<<"------------------------------"<<std::endl;
    p->addToTail(3);
    std::cout<<"------------------------------"<<std::endl;
    p->addToTail(4);
    std::cout<<"------------------------------"<<std::endl;
    p->addToTail(5);
    std::cout<<"------------------------------"<<std::endl;
    p->addToTail(6);
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->deleteFromTail();
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->deleteFromHead();
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->deleteNode(1);
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->deleteNode(5);
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;

    p->deleteNode(5);
    std::cout<<"------------------------------"<<std::endl;
    p->printList();
    std::cout<<"------------------------------"<<std::endl;
    delete p;
    return   0;
}
