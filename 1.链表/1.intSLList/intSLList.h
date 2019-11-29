//
// Created by atticus on 2019/11/29.
//

#ifndef CPP_DATASTRUCTURES_AND_ALGORITHMS_INTSLLIST_H
#define CPP_DATASTRUCTURES_AND_ALGORITHMS_INTSLLIST_H
#include<iostream>

class intSLLNode {
public:
    intSLLNode(){
        std::cout<<__LINE__<<". "<<__func__<<std::endl;
        next = 0;
    }
    intSLLNode(int el, intSLLNode *ptr = 0){
        std::cout<<__LINE__<<". "<<__func__<<std::endl;
        info = el;
        next = ptr;
    }
    int info;
    intSLLNode *next;
};

class intSLList {
public:
    intSLList(){
        std::cout<<__LINE__<<". "<<__func__<<std::endl;
        head = tail = 0;
    }

    ~intSLList();

    int isEmpty(){
        return head == 0;
    }

    void addToHead(int);
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    void printList();
    bool isInList(int) const ;

private:
    intSLLNode *head, *tail;
};

#endif //CPP_DATASTRUCTURES_AND_ALGORITHMS_INTSLLIST_H
