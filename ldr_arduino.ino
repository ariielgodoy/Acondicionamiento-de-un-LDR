 char c = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(4, INPUT);
  analogReadResolution(12);         // Resolución de 12 bits (0-4095)
  analogSetAttenuation(ADC_11db);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura = analogRead(4);
  //float voltaje = (lectura / 4095.0)*3;

  //Serial.print("ADC: ");
  //Serial.println(lectura);
  //Serial.print(" | Voltaje: ");
  //Serial.print(voltaje, 3);
  //Serial.println(" V");
  //double lux = 8842.7*voltaje*voltaje-51148*voltaje+74508;
  //Serial.print(lux);
  //Serial.println(" lux");
  if (Serial.available()>0)
  {
    c = Serial.read();
    
    if(c == 'D'){
      int lectura = analogRead(4);
      Serial.print(lectura);
      delay(50);
    }
    else
    {
      Serial.print("X");
      delay(1000);
    }
  }

  

}
