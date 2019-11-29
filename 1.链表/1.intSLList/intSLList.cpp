//
// Created by atticus on 2019/11/29.
//

#include "intSLList.h"
#include <iostream>

intSLList::~intSLList() {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    for(intSLLNode *p; !isEmpty();){
        p = head->next;
        delete head;
        head = p;
    }
}

void intSLList::addToHead(int el) {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    head = new intSLLNode(el, head);
    if(tail == 0)
        tail = head;
}

void intSLList::addToTail(int el) {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    if(tail != 0){
        tail->next = new intSLLNode(el);
        tail = tail->next;
    } else{
        head = tail = new intSLLNode(el);
    }
}

int intSLList::deleteFromHead() {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    int el = head->info;
    intSLLNode *tmp = head;
    if(head == tail){
        head = tail = 0;
    }else{
        head = head->next;
    }
    delete tmp;
    return el;
}

int intSLList::deleteFromTail() {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    int el = tail->info;
    if(head == tail){
        delete head;
        head = tail = 0;
    }else{
        intSLLNode *tmp;
        for(tmp = head; tmp->next != tail; tmp = tmp->next);

        delete tail;
        tail = tmp;
        tail->next = 0;
    }
    return el;
}

void intSLList::deleteNode(int el) {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    if(head != 0){
        if(head == tail && el == head->info){
            delete head;
            head = tail = 0;
        }
        else if(el == head->info){
            intSLLNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        else{
            intSLLNode *pred, *tmp;
            for(pred = head, tmp = head->next;
                tmp != 0 && !(tmp->info == el);
                pred = pred->next, tmp = tmp->next);
            if(tmp != 0){
                pred->next = tmp->next;
                if(tmp == tail)
                    tail = pred;
                delete tmp;
            }
        }
    }
}

void intSLList::printList() {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    intSLLNode * temp;
    for(temp = head; temp != tail->next; temp = temp->next)
    {
        std::cout<<temp->info<<"->";
    }
    std::cout<<"over."<<std::endl;
}

bool intSLList::isInList(int el) const {
    std::cout<<__LINE__<<". "<<__func__<<std::endl;
    intSLLNode *tmp;
    for(tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
    return tmp != 0;
}