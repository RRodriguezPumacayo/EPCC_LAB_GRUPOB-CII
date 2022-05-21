#ifndef AVE_H //add include guards
#define AVE_H
#include<iostream>
using namespace std;

class Ave{
    protected:
        string plumas;
        string pico;
    public:
        Ave();
        ~Ave();
        void setVolar(string);
        void setPico(string);
        void setcomestible(string);
};
#endif
