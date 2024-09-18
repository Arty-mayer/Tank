#include "Lib_Button.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

extern Button btn_lt;
extern Button btn_rt;
extern Button btn_dn;
extern Button btn_up;
extern Button btn_st;
extern Button btn_esc;

class Game
{

public:
    virtual ~Game() {}
    virtual void mainLoop() = 0;
    virtual bool getExit() = 0;
};
