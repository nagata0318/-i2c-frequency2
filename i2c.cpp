#include "pxt.h"

namespace I2CEx {

    void _setFrequency(int hz) {

        if (hz <= 100000) hz = 100000;
        else if (hz <= 250000) hz = 250000;
        else hz = 400000;

        uBit.i2c.setFrequency(hz);
    }
}
