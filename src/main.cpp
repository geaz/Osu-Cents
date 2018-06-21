#include <CapacitiveSensor.h>
#include <Keyboard.h>

CapacitiveSensor z_key = CapacitiveSensor(8,5);  
CapacitiveSensor x_key = CapacitiveSensor(10,15);  

void setup() {
    Keyboard.begin();
}

void loop() {
    long sense_z =  z_key.capacitiveSensor(30);
    long sense_x =  x_key.capacitiveSensor(30);

    if(sense_z >= 600) {
        Keyboard.press('z');
    }
    else {
        Keyboard.release('z');
    }

    if(sense_x >= 600) {
        Keyboard.press('x');
    }
    else {
        Keyboard.release('x');
    }
}