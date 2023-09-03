//Exercise I
//Blinky
DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        int x = button;
        printf("Button is now %d\n", button.read());
        
        led = button;
        //led = !led;
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
        
        //set the led on for 0.3s
        led = 1;
        printf("Wow! led is now %d\n", led.read());
        wait_ms(300);
        
        //set the led equals to anInput, and thus make it off for 1.4s
        led = anInput;
        printf("Wow! led is now %d\n", led.read());
        wait_ms(1400);
    }
}
