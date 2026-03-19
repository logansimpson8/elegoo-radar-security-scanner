![Circuit Overview](circuitImage1.PNG)
# elegoo-radar-security-scanner
a real time motion decteing security scanner using an Elegoo mega board. 
checks for distance away from sensor, records and updates distance on lcd screen and alerts when distance is below 15cm

Elegoo Board
connections:
5v (power): connected to Red rail
Digital GND: connected to Blue rail

Blue rail - GND
Red rail- 5V Power

HC-SR04 - the sensor 
connections: 
GND: connected to Blue rail 
ECHO: connected to Digital 3
TRIG: connected to Digital 2
VCC: connected to Red rail

Active Buzzer - the "alarm"
connections:
Long leg: connected to Digital 4
Short leg: connected to Blue rail

Potentiometer 10k - acting as a dimmer for lcd screen
connections:
Left leg: connected to Blue rail
Right leg: connected to Red rail
Middle leg (top): Connected to V0 Pin on lcd screen

LCD1602 module - the lcd screen
connections:
K Pin: connected to Blue rail
A Pin: connected to Red rail
D7 Pin: connected to Digital 12
D6 Pin: connected to Digital 11
D5 Pin: connected to Digital 10
D4 Pin: connected to Digital 9
E Pin: connected to Digital 8
RW Pin: conneted to Blue rail
RS Pin: connected to Digital 7
V0 Pin: connected to top leg Potentiometer
VDD Pin: connected to Red rail
VSS: connected to Blue rail


** if the lcd screen turns on but is only displaying white blocks, likely the potentiometer, adjust it. 




