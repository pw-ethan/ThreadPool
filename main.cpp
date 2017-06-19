#include <iostream>

#include "thread_pool.h"

using namespace std;

int add2(int i) {
    return i * 2;
}

int main()
{
    CThreadPool pool;

    vector<future<int>> futures(20);
    int result = 0;
    for (int i = 1; i <= 20; ++i) {
        CTask tmp(i);
        futures[i-1] = pool.submit(tmp);
    }

    for(unsigned i = 0; i < 20; ++i) {
        result += futures[i].get();
    }

    cout << result << endl;
    return 0;
}
