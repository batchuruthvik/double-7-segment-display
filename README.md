Here’s a `README.md` file tailored for your Double Seven Segment Display using 8051 project on GitHub:

---

# Double Seven Segment Display using 8051 Microcontroller

This project demonstrates how to display numbers from 00 to 99 on a dual seven-segment display using the AT89C51 (8051) microcontroller.

# Project Files

* `double seven segment display.c` – Keil C source code
* `double seven segment display.hex` – Compiled HEX file
* `double seven segment display.uvopt` – Keil project options file

# Description

This project uses Port 3 (P3) to output digit patterns and P2.6 and P2.7 to switch between the two 7-segment displays. It leverages time multiplexing to display two digits simultaneously.

The `val[]` array holds the 7-segment encoded values for digits 0 to 9.

# Working Logic

* P3 → Segment Data Lines (a–g + dp)
* P2.6 (s1) → Enable first display (unit digit)
* P2.7 (s2) → Enable second display (tens digit)
* Code loops from 00 to 99 using modulo and division:

  * `x % 10` = unit digit
  * `x / 10` = tens digit

# Hardware Requirements

* AT89C51 Microcontroller
* 2 × Common Cathode 7-Segment Displays
* 220Ω Resistors × 14 (for segment current limiting)
* Power Supply (5V)
* Breadboard & Jumper Wires

# How to Use

1. Open `.c` file in Keil µVision.
2. Compile to generate the HEX file (or use the included one).
3. Upload the HEX to your microcontroller using a programmer.
4. Connect segment pins to P3 and common cathode control to P2.6 and P2.7 via NPN transistors (recommended).
5. Observe the count from 00 to 99 repeating on the two displays.

# Notes

* Multiplexing is used: the display quickly switches between the two digits, appearing as if both are lit continuously.
* Delay is added to reduce flicker and improve visibility.

---

Would you like a Proteus circuit or connection diagram for this as well?
