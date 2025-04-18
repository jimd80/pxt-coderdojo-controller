#include "pxt.h"
using namespace pxt;

/**
 * Blocks for driving the CoderDojo Controller
 */
//% color=#00A654 weight=100
namespace CoderDojo_Controller {

    bool initialized = false;

    //%
    void init() {
        if (initialized) return;

        // set all the buttons on the CoderDojo Controller to actually appear as buttons on the micro:bit
        new MicroBitButton(getPin(MICROBIT_ID_IO_P15)->name, MICROBIT_ID_IO_P15, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P16)->name, MICROBIT_ID_IO_P16, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P13)->name, MICROBIT_ID_IO_P13, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P14)->name, MICROBIT_ID_IO_P14, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P2)->name, MICROBIT_ID_IO_P2, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P8)->name, MICROBIT_ID_IO_P8, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P5)->name, MICROBIT_ID_IO_P5, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
        new MicroBitButton(getPin(MICROBIT_ID_IO_P11)->name, MICROBIT_ID_IO_P11, MICROBIT_BUTTON_ALL_EVENTS, PullUp);

        new MicroBitButton(getPin(MICROBIT_ID_IO_P1)->name, MICROBIT_ID_IO_P1, MICROBIT_BUTTON_ALL_EVENTS, PullDown);

        initialized = true;
    }
}