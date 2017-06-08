#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <deque>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>

#include "task.h"


class CThreadPool
{
public:
    CThreadPool(int threadNum = 10);
    int AddTask(CTask *task);
    int StopAll();
    int getTaskSize();

protected:
    static void* ThreadFunc(void* threadData);
    static int MoveToIdle(std::thread::id tid);
    static int MoveToBusy(std::thread::id tid);

    int Create();

private:
    static std::deque<CTask*> m_TaskList;
    static bool m_bShutdown;
    int m_iThreadNum;
    std::vector<std::thread::id> m_vThreadIDs;

    static std::mutex m_mThreadMutex;
    static std::condition_variable m_cThreadCond;

};

#endif // THREAD_POOL_H
