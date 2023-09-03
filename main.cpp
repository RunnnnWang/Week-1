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
