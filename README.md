## IoT Smart Agriculture System

This project is an IoT-based system designed to automate nutrient delivery and solar panel tracking for smart agriculture applications.

**Features**

- Moisture-controlled NPK Fertilizer Delivery
- Automatic Solar Panel Tracking
- Arduino-based Control

**Hardware Components**

- Arduino Uno or compatible board (x2) (See comments in code for specific model considerations)
- Water pumping motor (Refer to code comments for motor specifications)
- Moisture sensor (analog) (Consult code comments for sensor type)
- Servo motor (Servo motor details are provided in code comments)
- LDR sensors (x2) (Code comments specify LDR model)
- Jumper wires
- Solar panel (with mounting structure)
- NPK fertilizer containers (with dispensing mechanism) (Construction details might be in code comments)

**Software**

- Arduino IDE ([https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE))
- Servo library (for solar panel tracker) (Installation instructions in code comments)

**Getting Started**

1. **Hardware Setup:**
   - Follow the detailed connection instructions provided in the code comments for both the NPK Fertilizer and Solar Tracker Arduino setups. These comments specify pin connections for sensors, actuators, and motors.
   - Connect the solar panel to a voltage regulator (if necessary) as mentioned in the code comments, and then connect it to the Arduino powering the solar tracker.
   - Fill the NPK fertilizer containers with their respective fertilizers and connect them to the dispensing mechanism controlled by the other Arduino according to the code comments.

2. **Software Installation:**
   - Download and install the Arduino IDE from [https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE).
   - If using a servo motor for the solar tracker, install the Servo library from the IDE's Library Manager as explained in the code comments.

3. **Uploading Code:**
   - Open the provided Arduino code files (NPK_Fertilizer.ino and Solar_Tracker.ino) in the Arduino IDE.
   - Connect your Arduino boards to your computer using USB cables.
   - Select the correct board type and serial port for each Arduino in the IDE's Tools menu.
   - Upload the NPK_Fertilizer.ino code to the Arduino board controlling the fertilizer dispenser.
   - Upload the Solar_Tracker.ino code to the Arduino board controlling the solar panel tracker.

4. **Calibration (Optional):**
   - The code comments might include instructions for calibrating the moisture sensor by adjusting constants based on your soil type.
   - The comments might also suggest fine-tuning the tolerance value in the Solar_Tracker.ino code depending on your LDR sensitivity.

**Testing**

- Refer to the code comments for specific testing instructions related to the moisture sensor, NPK dispenser, and solar panel tracker behavior.

**Additional Notes**

- Consider creating a schematic diagram based on the code comments for future reference.

**Social Media**

- Follow my work on:
    - Facebook: https://www.facebook.com/munkhatiwada
