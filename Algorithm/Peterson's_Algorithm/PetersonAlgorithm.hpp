//
// Created by 冉惟之 on 16/12/2016.
//

#ifndef CPPTEST_PETERSONALGORITHM_HPP
#define CPPTEST_PETERSONALGORITHM_HPP
#include <pthread.h>
#include <iostream>
#include <cstdlib>
#include <zconf.h>

bool flag[2] = {false, false};
int turn = 0;
pthread_t t1, t2;
int i = 0;
void * T1(void *s) {
    flag[0] = true;
    turn = 0;
    while (true) {
        while (flag[1] && turn == 0);
        i++;
        printf("thread one, i : %d\n", i);
        fflush(stdout);
        usleep(1000000);
        flag[0] = false;
    }
}

void * T2(void *s) {
    flag[1] = true;
    turn = 1;
    while (true) {
        while (flag[0] && turn == 1);
        i++;
        printf("thread two, i : %d\n", i);
        fflush(stdout);
        usleep(1000000);
        flag[1] = false;
    }
}


void InitThreads() {
    pthread_create(&t1, NULL, T1, NULL);
    pthread_create(&t2, NULL, T2, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}

#endif //CPPTEST_PETERSONALGORITHM_HPP
