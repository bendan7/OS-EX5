//
// Created by Ben on 17/05/2018.
//



#include "ThreadPool.h"

ThreadPool::ThreadPool(int threadNum,pthread_mutex_t &coutMutex,ResultArr *resultArr) {
    this->coutMutex = &coutMutex;
    this->threadNum=threadNum;
    this->mutex= PTHREAD_MUTEX_INITIALIZER;
    this->threads = new pthread_t*[threadNum];
    this->resultArr=resultArr;
    for (int i=0; i<threadNum; i++){
        threads[i]=new pthread_t;
    }

}
