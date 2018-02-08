#include <iostream>
#include <thread>

using namespace std;

void testThread(int i)
{
    cout<<i<<endl;
    return;
}

int main()
{
    for(int loop = 0; loop < 10; loop ++)
    {
        thread t(testThread, loop);
        t.detach();
        cout<<"zsp say hello!"<<endl;
    }

    return 0;
}
