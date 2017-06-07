#ifndef COMMAND_H
#define COMMAND_H

#include <string>


class CCommand {
public:
    CCommand(int nCmd = 0) : m_nCmd(nCmd) { }
    int GetCmd();
    std::string GetArg();
    void SetCmd(int nCmd);
    void SetArg(const std::string& sArg);
private:
    int m_nCmd;
    std::string m_sArg;
};

#endif // COMMAND_H
