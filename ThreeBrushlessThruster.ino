#include <Servo.h>

Servo escR; // Create a Servo object
Servo escL; // Create a Servo object
Servo escV; // Create a Servo object


void setup() {
escR.attach(9); // Attach the ESC to pin 9 on the Arduino
escR.writeMicroseconds(1500); // Initialize the motor to a neutral position'

escL.attach(10); // Attach the ESC to pin 9 on the Arduino
escL.writeMicroseconds(1500); // Initialize the motor to a neutral position

escV.attach(11); // Attach the ESC to pin 9 on the Arduino
escV.writeMicroseconds(1500); // Initialize the motor to a neutral position

delay(2000); // Wait for 2 seconds
}

void loop() {
int throttle = 1500; // Neutral position, motor is not spinning
escR.writeMicroseconds(throttle); // Send PWM signal to control the motor
escL.writeMicroseconds(throttle); // Send PWM signal to control the motor
escV.writeMicroseconds(throttle); // Send PWM signal to control the motor

// Delay for a certain period of time
delay(1000);

// Accelerate the motor by increasing the PWM signal
throttle = 1600;
escR.writeMicroseconds(throttle); // Send PWM signal to control the motor
escL.writeMicroseconds(throttle); // Send PWM signal to control the motor
escV.writeMicroseconds(throttle); // Send PWM signal to control the motor
// Delay for a certain period of time
delay(1000);

// Decelerate the motor by decreasing the PWM signal
throttle = 1400;
escR.writeMicroseconds(throttle); // Send PWM signal to control the motor
escL.writeMicroseconds(throttle); // Send PWM signal to control the motor
escV.writeMicroseconds(throttle); // Send PWM signal to control the motor
// Delay for a certain period of time
delay(1000);
}