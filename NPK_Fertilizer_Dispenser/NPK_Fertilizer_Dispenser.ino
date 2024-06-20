// Define the analog input pin for the moisture sensor
const int moisturePin = A5;

// Define the digital output pins for the motors
const int Pin = 2;


// Define the minimum and maximum moisture levels for the soil
const int moistureMin = 300;
const int moistureMax = 700;

// Define the amount of nitrogen, phosphorus, and potassium to be dispensed
const int nitrogenAmount = 15000;
const int potassiumAmount = 800;

void setup() {
  // Set the motor pins as output
  pinMode(Pin, OUTPUT);
  
  // Initialize the serial communication for debugging
  Serial.begin(9600);
}

void loop() { 
   // Read the moisture level from the sensor
  int moistureLevel = analogRead(moisturePin);
  // Debug output
  if(moistureLevel>=550){
    if(moistureLevel>=850){
      Serial.print("Low on every fertilizer.\n");
      Serial.print("Dispensing all the fertilizer\n");
    }
    else if(moistureLevel>=700 && moistureLevel<850){
      Serial.print("Low on Potassium\n");
      Serial.print("Dispensing Potassium\n");
    }
    else if(moistureLevel>=550 && moistureLevel<700){
      Serial.print("Low on nitrogen\n");
      Serial.print("Dispensing nitrogen.\n");
    }
     
     digitalWrite(Pin, HIGH);
     // Read the moisture level from the sensor
     int moistureLevel = analogRead(moisturePin);
     Serial.print("Moisture level: ");
     Serial.println(moistureLevel);
     Serial.print("Running Motor");     
     delay(1000);
  }
  else{
    Serial.print("Not Running Motor\n");
    Serial.print("Moisture level: ");
     Serial.println(moistureLevel);
    // Determine which nutrient to dispense based on the moisture level
    digitalWrite(Pin, LOW);
    // Wait for a few seconds before taking another reading
    delay(1000);
  }
}
