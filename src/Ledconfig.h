//LED Defines for pulse (Status indicator both Wifi and MQTT)

#define LED1 D5     // Led in PULSE function for MQTT
#define LED2 D2     // Led in PULSE function for WIFI
#define BRIGHT 350  //max led intensity (1-500)
#define INHALE 1250 //Inhalation time in milliseconds.
#define PULSE INHALE * 1000 / BRIGHT
#define REST 1000 //Rest Between Inhalations.

//