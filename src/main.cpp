#include <CapacitiveSensor.h>
#include <Keyboard.h>

CapacitiveSensor z_key = CapacitiveSensor(8,5);  
CapacitiveSensor x_key = CapacitiveSensor(10,15);  

bool z_pressed = false;
bool x_pressed = false;

void setup() {
    Keyboard.begin();
}

void loop() {
    long sense_z =  z_key.capacitiveSensor(30);
    long sense_x =  x_key.capacitiveSensor(30);

    if(sense_z >= 600) {
        Keyboard.press('z');
        z_pressed = true;
    }
    else if(z_pressed) {
        Keyboard.release('z');
        z_pressed = false;
    }

    if(sense_x >= 600) {
        Keyboard.press('x');
        x_pressed = true;
    }
    else if(x_pressed) {
        Keyboard.release('x');
        x_pressed = false;
    }
}