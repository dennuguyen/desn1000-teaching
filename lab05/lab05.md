# Lab04 Lesson Plan

- Red Centre Lvl 2061
- 15:00

## Ice Breakers (5 min)

- How are projects going?
- Anybody stressed?
- Any questions about the lecture?

## Arduino Libraries

- **ALWAYS** check if someone's done the work before you. We don't want to waste time and energy reinventing the wheel.
- Arduino IDE -> Manage Libraries.

## PWM

- What is PWM?
    - pulse-width modulation allows you to use discrete signals to simulate an analog signal.
    - Discrete signals generate square waves which we can change the duration of the ON period to vary the intensity of a signal.
- Duty cycle.
    - Common phrase used with PWM.
    - Show diagram.
    - It means the percentage of ON vs OFF time in a PWM cycle.
        - 25% duty cycle = 25% ON and 75% OFF
        - 60% duty cycle = 60% ON and 40% OFF
    - The duty cycle is what we change to simulate an analog signal.
- Why use PWM?
    - We can have a varying-frequency signal e.g. control the brightness of an LED and the speed of a motor.
        - Analogous to frequency of sound wave affecting the pitch.
    - It's more efficient than having a continuously ON signal.

## Demo Motor PWM

- Build the circuit on Tinkercad with 2 motors.
    - We use L298N which is the most basic and common motor driver we can use.
- `f`: forward
- `b`: backward
- `l`: left
- `r`: right
- `0`: stop
- `1-5`: 10% up to 50%

## PID Controller

- Any questions about this?

## Motor Controller Interface

Students write a motor controller interface that lets the operator select direction, speed and steering of a robot.
- Serial Monitor to send commands.
- `f`
- `b`
- `l`
- `r`
- `0`
- `1-5`

- Did the demo so students just need to apply `if-else` and `Serial` I/O.
- If lab is fast, teach functions?
