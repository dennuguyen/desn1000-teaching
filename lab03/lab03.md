# Lab03 Lesson Plan

- Red Centre Lvl 2061
- 15:00

## Ice Breakers

- Name, degree, project.
- Put your hand up and ask questions if you're confused about anything.
- Don't ask me permission to go toilet. Just go.

## Demo

Structure:
- What's on the Arduino UNO.
- How to write a program for the Arduino.
- Short Arduino simulation example.
- C coding in leftover time.

### 2.1 Arduino Microcontroller (20 min)

UNO:
- Some computer terminology:
    - **Clock**: Just keeps time on your computer in terms of ticks.
    - **RAM**: Memory which is where you store data.
    - **Instructions**: An (atomic) action e.g. setting setting a register to 1, subtracting two numbers, reading the value of a register.
    - **Arithmetic logic unit**: Part of the CPU that does arithmetic and logic operations.
    - **Bus**: A communication line (think of it as a road for 1's and 0's).
- Arduino UNO is a microcontroller which is essentially an extremely simple and small computer that lets you interact with electrical systems.
- Different kinds of pins:
    - Analog: Value of the pin can vary (imagine sine wave).
    - Digital: Value of the pin can be 1 or 0.
    - Power: `3.3V` or `5V` or `Vin` or `GND`.
    - Communication: `TX` and `RX`.

Power:
- Three ways to power the UNO:
    - Remember power MUST be DC (not AC).
    - Using the USB cable.
    - Using an external battery connected to the `Vin` or `GND` pins.
        - Remember `Vin` means INTO the controller.
    - Using an external battery connected to the power jack.
    - If any of these are connected simultaneously then the UNO will figure out which one to use automatically (don't worry about it).
- Make sure you only supply between `6-12 DC V` of power.
    - Going under means your pins might not be powered and you have instability (on/off/on/off).
    - Going over means you might fry your controller.
    - You can check this using a multimeter.
        - Ask students if they know how to use one.
- The UNO can power devices as well using the `3.3V`, `5V`, and `GND` pins.
    - Be aware that connecting a lot of devices to these pins might be unstable. Will touch on this in the future.

I/O:
- I/O stands for input and output which is basically data going into and out of the UNO.
- Different types of I/O:
    - **Serial communication**: Uses `RX` and `TX` pins which transmits serial data. I send information in a packet and wait until you receive it then I send another one.
        - The USB connection uses Serial communication but UNO also has pins 0 and 1 for an extra bus.
    - **Hardware interrupts**: Pins 2 and 3 are special. The UNO can detect the state of these pins and stop your program to do something else.
        - Rising, high, falling, low.
    - **PWM**: Any pin with the ~ can send a duty cycle. PWM lets us change the amplitude of something e.g. you can control brightness of an LED or the speed of a motor.
        - More in week 5.
    - **I2C**: Another type of communication which is slower than Serial but allows multiple devices to share the same bus. Uses pins 4 and 5. You'll know you'll need I2C if you have a device that has `SCL` and `SDA` labelled pins.

### Hello World (20 min)

- INSTALL THE IDE EVERYONE.
- I am going to demo. I want everyone to literally copy what I'm doing.
- What is an IDE?
    - Integrated development environment. Like your workspace for writing code.
    - IDE can connect to the Arduino UNO via USB and communicate with it using serial communication.
    - Get started with coding and explain the parts of the IDE as we code.
- In toolbar, create a new sketch.
    - Alternatively, open a sketch you have already created.
- IDE contains a text editor which is the actual window for WHERE you write code.
    - What is code?
        - Code is just text that can be executed by the computer. Arduino calls it sketches (for some reason).
    - **Write hello world** so that my Arduino can run this. I want my Arduino to say hello world.
        - Sketches must have two functions/sections i.e. `setup()` and `loop()`.
            - `setup()` runs only once at the beginning of program execution.
            - `loop()` runs continuously over and over again.
        - Initialise serial communication.
        - Print to serial.
        - Delay (ms).
- How do I check if the code I wrote works?
    - Verify and read the console output.
        - Console is where the IDE is trying to communicate to you.
            - Console will tell us if verify was successful or not.
- I've finished coding and am ready to use it. What do I do?
    - In toolbar, click Upload to "upload/flash" the code to the Arduino.
        - This actually verifies and compiles your code into a set of instructions that the Arduino will understand.
- My code has been uploaded.
    - Open serial monitor. Serial monitor which lets you check live data between Arduino and the IDE.
    - Make sure the baud rate is set the same to `Serial.begin()`.
    - Can not only read from Arduino but also write to Arduino.

Summary:
- Process for writing code:
    - New/open
    - Write your code.
    - Save
    - Verify as you write code.
    - Read console to check for errors.
    - Upload when done.
- When finished writing code. It's time to upload:
    - Check board is correct.
    - Check port is correct.
    - Upload
    - Read console to check for errors.

### Tinkercad (10 min)

- Tinkercad is a solution to simulate an Arduino if you don't have access to a real one.
    - LED example

### Bit more advanced coding (10 min)

Check out Arduino language reference. It is the manual to how to code on Arduino if you're ever lost.
- Use Arduino forums or exchange.

Structures:
- `setup()`
- `loop()`
- `if()...else`
- `while`
- `goto`

Syntax:
- `;`
- `{}`
- `//`

Operators:
- Assignment.
- Arithmetic.
- Comparison.

Sketch structure:
- Macros.
- Global variables.
- Setup.
- Loop.

Datatypes:
    - `void`
    - `boolean`
    - `char`
    - `int`
    - `long`
    - `float`

> FYI there is an auto-formatter. Will make your code look nicer.

## Lab

1. Load IDE.
1. Print "Hello World" to serial monitor every 1 second.
1. Upload "Blink" example sketch.
1. Change "Blink" sketch so that "on" and "off" prints to serial monitor instead of LED.
1. Change "Blink" sketch to change frequency of flashes.
1. Write report on what you did and learnt.
    - Check out the sample report and try to match its style.
    - Due Friday 5pm (24 hours to do it).