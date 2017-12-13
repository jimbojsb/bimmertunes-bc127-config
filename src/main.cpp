#include <Arduino.h>
#include <SparkFunbc127.h>
#include <config.h>

BC127 bt(&Serial1);

void setup() {
    Serial.begin(9600);
    Serial1.begin(9600);
    
    Serial.println("Resetting factory defaults");
    bt.restore();
    bt.writeConfig();
    bt.reset();

    delay(2000);

    Serial.println("Disabling iOS battery indicator");
    bt.stdSetParam("ENABLE_BATTERY_IND", "OFF");
    bt.writeConfig();

    Serial.print("Setting name to ");
    Serial.println(BT_DEVICE_NAME);
    bt.stdSetParam("NAME", BT_DEVICE_NAME);
    bt.writeConfig();

    Serial.print("Setting audio codec to ");
    Serial.println(BT_CODEC);
    bt.stdSetParam("CODEC", BT_CODEC);
    bt.writeConfig();

    Serial.print("Setting auto-reconnect to ");
    Serial.println(BT_AUTO_RECONNECT);
    bt.stdSetParam("AUTOCONN", BT_AUTO_RECONNECT);
    bt.writeConfig();

    Serial.print("Setting audio output to ");
    Serial.println(BT_AUDIO_OUTPUT);
    bt.stdSetParam("AUDIO", BT_AUDIO_OUTPUT);
    bt.writeConfig();

    bt.reset();
}

void loop() {
    // put your main code here, to run repeatedly:
}