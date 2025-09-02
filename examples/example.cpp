/*
    Moving Average Example

Prints out the current value, which is 
a noisy sine wave, and the 
moving average's value. Data can be 
plotted using Mario Zechner's 
serial-plotter extension in vscode.

*/

#include <Arduino.h>
#include "MovingAverage.h"

MovingAverage<double> avg(50);

void setup() {
    Serial.begin(19200);
}

void loop() {
    double val = sin(millis()/1000.0) + sin(millis()/10.0) * 0.5;

    Serial.print(">val:");
    Serial.print(val);
    Serial.print(", avg:");
    Serial.println(avg.update(val));
}