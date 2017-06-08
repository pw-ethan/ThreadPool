#ifndef TASK_H
#define TASK_H

#include <string>


class CTask
{
public:
    CTask() = default;
    CTask(std::string taskName) : m_strTaskName(taskName), m_pData(NULL) { }
    virtual ~CTask() {}
    virtual int Run() = 0;
    void SetData(void* data);

protected:
    std::string m_strTaskName;
    void* m_pData;
};

#endif // TASK_H
