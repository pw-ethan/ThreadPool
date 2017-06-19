#include "thread_pool.h"

#include <iostream>

//bool CThreadPool::m_bShutdown = false;
//int CThreadPool::m_iCurrentThreadNum = DEFAULT_THREAD_NUM;
//
//void CThreadPool::InitializeThreads() {
//    for (int i = 0; i < DEFAULT_THREAD_NUM; ++i) {
//        std::thread tmpThread(CThreadPool::Process);
//        m_mThreadIDMap[tmpThread.get_id()] = 0;
//    }
//}
//
//void*
//
//
//CThreadPool::CThreadPool(int threadNum) {
//    m_iThreadNum = threadNum;
//    std::cout << "I will create " << threadNum << " threads." << std::endl;
//    Create();
//}
//
//void* CThreadPool::ThreadFunc(void* threadData) {
//    std::thread::id tid = std::thread::get_id();
//    while (1) {
//        std::unique_lock<std::mutex> ulk(m_mThreadMutex);
//        //m_cThreadCond.wait(ulk, []{return !m_TaskList.empty() && !m_bShutdown});
//        while (m_TaskList.size() == 0 && !m_bShutdown) {
//            m_cThreadCond.wait(ulk);
//        }
//
//        if (m_bShutdown) {
//            ulk.unlock();
//            std::cout << "thread " << tid << " will exit" << endl;
//            // here
//        }
//
//    }
//}
