# Lab04 Lesson Plan

## Ice Breakers (5 min)

- How are projects going?
- Anybody stressed?
- Any questions about the lecture?

## Arduino Libraries (5 min)

- **ALWAYS** check if someone's done the work before you. We don't want to waste time and energy reinventing the wheel.
- Arduino IDE -> Manage Libraries.

## PWM (10 min)

- What is PWM?
    - pulse-width modulation allows you to use discrete signals to simulate an analog signal.
    - Discrete signals generate square waves which we can change the duration of the ON period to vary the average value of a signal.
- Duty cycle.
    - Common phrase used with PWM.
    - Show diagram.
    - It means the percentage of ON vs OFF time in a PWM cycle.
        - 25% duty cycle = 25% ON and 75% OFF
        - 60% duty cycle = 60% ON and 40% OFF
    - The duty cycle is what we change to simulate an analog signal.
    - The higher the duty cycle, the higher the AVERAGE value of the signal.
- Why use PWM?
    - We can have a varying-frequency signal e.g. control the brightness of an LED and the speed of a motor.
        - Analogous to frequency of sound wave affecting the pitch.

## L298N (15 min)

- What is it?
    - A motor driver which allows you to PULL more power to drive a motor.
    - Because Arduino/controllers don't have the power to supply a motor.
- How to power the L298N?
- How to wire L298N to Arduino?
    - PWM terminal and how to pull up.
    - Input1/2 terminals.
- How to wire L298N to motors?

## Demo Motor PWM (20 min)

- Build the circuit on Tinkercad with 2 motors.
    - We use L298N which is the most basic and common motor driver we can use.
- `f`: forward
- `b`: backward
- `l`: left
- `r`: right
- `0`: stop
- `1-5`: 10% up to 50%

## Motor Controller Interface

- Students write a motor controller interface that lets the operator select direction, speed and steering of a robot.
    - Serial Monitor to send commands.
    - `f`
    - `b`
    - `l`
    - `r`
    - `0`
    - `1-5`
- Did the demo so students just need to apply `if-else` and `Serial` I/O.
- If lab is fast, teach functions?
