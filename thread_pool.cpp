#include "thread_pool.h"

#include <iostream>


CThreadPool::CThreadPool(int threadNum) {
    m_iThreadNum = threadNum;
    std::cout << "I will create " << threadNum << " threads." << endl;
    Create();
}

void* CThreadPool::ThreadFunc(void* threadData) {
    std::thread::id tid = std::thread::get_id();
    while (1) {
        std::unique_lock<std::mutex> ulk(m_mThreadMutex);
        //m_cThreadCond.wait(ulk, []{return !m_TaskList.empty() && !m_bShutdown});
        while (m_TaskList.size() == 0 && !m_bShutdown) {
            m_cThreadCond.wait(ulk);
        }

        if (m_bShutdown) {
            ulk.unlock();
            cout << "thread " << tid << " will exit" << endl;
            // here
        }

    }
}
