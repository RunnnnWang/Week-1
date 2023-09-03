//Exercise I
//Blinky
#include "mbed.h"
DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        led = button;
        printf("Blink! LED is now %d\n", led.read());
        wait_ms(500);
    }
}

//Exercise II
#include "mbed.h"

AnalogIn anInput(p15);
DigitalOut led(LED1);

int main() {
    while (1) {
        float number = anInput.read();
        
        printf("Blink! LED is now %.6f Percent\n", number);
        
        //the amount of time on
        led = 1;
        float onTime = number*2000;
        wait_ms(onTime);
        
        //the amount of time off
        led = 0;
        wait_ms(2000-onTime);
        
    }
}
