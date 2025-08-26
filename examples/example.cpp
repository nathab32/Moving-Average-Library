/*
    Moving Average Example

Prints out the current value, which is 
based off of a sine function, and the 
moving average's value. Data can be 
plotted using Mario Zechner's 
serial-plotter extension in vscode.

*/

#include <Arduino.h>
#include "MovingAverage.h"

MovingAverage<double> avg(200);

void setup() {
    Serial.begin(9600);
}

void loop() {
    double val = sin(millis()/100.0);

    Serial.print(">val:");
    Serial.print(val);
    Serial.print(", avg:");
    Serial.println(avg.update(val));
}