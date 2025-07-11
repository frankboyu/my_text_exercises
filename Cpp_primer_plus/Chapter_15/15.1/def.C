#include <iostream>
#include "header.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
        {
            volume--;
            return true;
        }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off? "Off" : "On") << endl;
    if (state == On)
    {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode == Antenna? "antenna" : "cable") << endl;
        cout << "Input = " << (input == TV? "TV" : "DVD") << endl;
    }
}

void Remote::settings() const
{
    using std::cout;
    using std::endl;
    cout << "Remote mode: " << (mode == Tv::TV? "TV" : "DVD") << endl;
    cout << "Remote state: " << (state == Normal? "normal" : "interactive") << endl;
}

void Tv::toggle_remote(Remote & r)
{
    if (state == On)
        r.state = (r.state == Remote::Normal)? Remote::Interactive : Remote::Normal;
}