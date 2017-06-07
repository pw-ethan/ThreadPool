#include "thread_process.h"
#include <thread>
#include <iostream>
#include <unistd.h>


void CThreadProcess::Process0(void* arg) {
    std::cout << "thread " << std::this_thread::get_id() << " is starting process " << arg << std::endl;
    usleep(100 * 1000);
}

void CThreadProcess::Process1(void* arg){
    std::cout << "thread " << std::this_thread::get_id() << " is starting process " << arg << std::endl;
    usleep(100 * 1000);
}

void CThreadProcess::Process2(void* arg){
    std::cout << "thread " << std::this_thread::get_id() << " is starting process " << arg << std::endl;
    usleep(100 * 1000);
}

