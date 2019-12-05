#ifndef SIMSTATE_H
#define SIMSTATE_H

#include <vector>

class SimState
{
public:
    SimState(const std::vector<int> &specimenNo);

    SimState();


private:
    std::vector<int> m_specimenNo;
};

#endif // SIMSTATE_H