#include"claseMultimedia.h"

class Disco:public Multimedia{
    protected:
        bool onlydisc;
    public:
        Disco();
        bool reproducir();
        ~Disco();
};
