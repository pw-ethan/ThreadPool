#include <iostream>

#include "command.h"
#include "thread_process.h"

using namespace std;

int main()
{
    CCommand icmd;
    cout << "cmd : " << icmd.GetCmd() << " arg : " << icmd.GetArg() << endl;
    icmd.SetCmd(12);
    icmd.SetArg("hello");
    cout << "cmd : " << icmd.GetCmd() << " arg : " << icmd.GetArg() << endl;

    CThreadProcess.Process0();
    return 0;
}
