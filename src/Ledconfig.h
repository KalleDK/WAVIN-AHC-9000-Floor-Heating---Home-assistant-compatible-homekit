// LED Defines for pulse (Status indicator both Wifi, MQTT and POWER of the ESP
// Change the pins to suit your needs. I use these pins on a Wemos D1 mini.

#define LED1 D5     // Led in PULSE function for MQTT

#define LED2 D2     // Led in PULSE function for WIFI

#define LED3 D4     // Led for showing ESP is powered on

// The values below can be changed, but works IMO best as they are 

#define BRIGHT 350  //max led intensity (1-500)

#define INHALE 1250 //Inhalation time in milliseconds.

#define PULSE INHALE * 1000 / BRIGHT

#define REST 1000 //Rest Between Inhalations.

