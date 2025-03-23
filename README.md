# Water-Level-Indicator-Using-ArduinoUno

## Circuit Diagram:
<div align="center">
<img src="https://github.com/user-attachments/assets/85da967a-412f-4c1e-aaeb-318b213e4f7a" alt="Circuit" width="600" height="300">
</div>



## Components Required:
| Components               | Quantity 
|-------------------------|----------
| **Arduino Uno**         | 1  
| **Breadboard**          | 1
| **LEDs**                | 3  
| **Buzzer**              | 1   
| **Jumper Wires**        | 15+      
| [**Water Level Sensor**](https://robodo.in/products/water-level-sensor-depth-of-detection-water-sensor-for-arduino)  | 1        
| **220Ω Resistors**      | 3        

## Working:
This sensor works on the principle of variable resistance. The sensor consists of a series of parallel exposed conductors. Together this series acts as a variable resistor, whose resistance varies according to the water level in the water tank. 

The more the water sensor is submerged in, the better is the conductivity and the lower the resistance. The less the water sensor is submerged, the poorer is the conductivity and the higher is the resistance. 

The output of the water level sensor is according to the resistance of the water produced. i.e. it will produce a voltage proportional with resistance.
When the water sensor is fully submerged, the sensor triggers the buzzer. The buzzer sounds an alert to prompt the user to take necessary action.
