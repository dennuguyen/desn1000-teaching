# Lab04 Lesson Plan

- Red Centre Lvl 2061
- 15:00

## Ice Breakers (5 min)

- How are projects going?
- How is term going?

### General Lab Feedback (10 min)

- Formatting was biggest lost of marks.
    - Centreing figures and captions.
    - Using different font for headings.
    - Refer to references in main text. Not enough to just put in References section.
    - Do not use 1st person language.
    - **It's okay to lose marks. It's better to lose marks now in a small % assessment than later on.**
- Follow the lab instruction.
    - Some students only did `Hello World`.
    - Some students did not do varying the frequency of LED blinks (step 2 of Blink).
- Be thorough in proving your code works.

### 3.1 Code Structure and Layout (10 min)

Code constructs:
- `if-else`
- `while`
- `for`
- `continue`
- `break`
- `return`

Code style:
- Don't repeat yourself (DRY)
- Keep it simple (KISS)
- Meaningful variable names -> less comments.
- Break code up into sections.
- Readability is most important!

### 3.2 Arrays (20 min)

- What is a datatype?
    - It describes what kind of properties and operations that can be applied to a value.
    - `char`, `int`, `float`, `double`, `bool`.
    - What are some examples of the above datatypes?
    - What are the size of these datatypes (on Arduino)?
        - `sizeof(char) = 1 byte`
        - `sizeof(int) = 2 byte`
        - `sizeof(float) = 4 byte`
        - `sizeof(double) = 8 byte`
        - `sizeof(bool) = 1 byte`
- What is an array?
    - It is a list of elements of the same datatype.
    - List of elements stored contiguously in memory.
    - Array element means the actual value in the array.
    - Array index means the position of the element.
- **(ADVANCED)** Some concepts to think about arrays.
    - Memory address of start of array.
        - We need to know where to find the array.
    - Datatype of array.
        - Datatype dictates how spaced apart each element is in memory (think back about `sizeof`).
- Demo printing array.
    - Initialising array.
        - `int arr[10];`
        - `int arr[10] = {0, 1, 2, ..., 9};`
        - `int arr[] = {0, 1, 2, ..., 9};`
    - Reading array elements.
        - Indexing starts at `0`!!!
- Demo adding two arrays together.
    - Writing array elements.
- Demo strings.
    - Printing char line-by-line of string.

### 3.4 Ultrasonic Sensor (20 min)

- What is an ultrasonic sensor?
    - It is a sensor which uses sound waves to measure distance.
    - It calculates the time for a sound wave to be emitted, bounce off an object, and come back to the sensor.
    - Therefore, we need to calculate the distance ourselves using `s = vt`.
        - Where `v` is speed of sound.
    - The technical process is:
        1. Wait a bit for sound waves to die (no disturbances), maybe `2 ms`. Make sure off.
        1. Send sound wave for a small duration, maybe `10 ms`. Turn on then off.
        1. Read the echo pin for a value. This value is the **time** it took for the sound to travel and back.
        1. Calculate `s = vt`.
- Demo using an ultrasonic sensor.
    - Global variables for pins.
    - Set `pinMode()` for pins.
    - Send sound wave using `trigger` pin.
    - Receive sound wave using `echo` pin.

### Lab: Keyboard Input (15 min)

I am going to be a bit more hands-off with helping students with their lab.

Students need to know how to:
- Writing to Serial
- Reading from Serial
- `if`.

### Lab: Data Log (20 min)

Everybody needs an Arduino UNO to do this.

Students need to know how to:
- Use arrays.
- `while`.
- Global variables.
- How to use `digitalWrite()` and `analogRead()`.
- How to format output with `Serial.print()` and `Serial.println()`.
- Terminate program with `while (true);`

> If very lost, google the answer. There are lots of examples.
