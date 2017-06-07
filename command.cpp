#include "command.h"

int CCommand::GetCmd() {
    return m_nCmd;
}

std::string CCommand::GetArg() {
    return m_sArg;
}

void CCommand::SetCmd(int nCmd) {
    m_nCmd = nCmd;
}

void CCommand::SetArg(const std::string& sArg) {
    m_sArg = sArg;
}
