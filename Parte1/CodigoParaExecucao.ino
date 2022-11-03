#include <LiquidCrystal.h>

// C++ code
//
int distanciavaga1 = 0;

int distanciavaga2 = 0;

int vaga1Livre = 1;
int vaga1OCupada = 0;
int vaga2Livre = 1;
int vaga2OCupada = 0;

LiquidCrystal lcd(0,1,4,5,6,7);

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  lcd.begin(16,2);
}

void loop()
{
  
  distanciavaga1 = 0.01723 * readUltrasonicDistance(13, 12);
  if (distanciavaga1 <= 200) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    
    if(vaga1Livre == 1 && vaga1OCupada == 0){
    	vaga1OCupada = vaga1OCupada +1;
      	vaga1Livre = vaga1Livre - 1;
    }
    
  } else {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    
    if(vaga1Livre == 0 && vaga1OCupada == 1){
    	vaga1OCupada = vaga1OCupada -1;
      	vaga1Livre = vaga1Livre + 1;
    }
   
    
  }
  distanciavaga2 = 0.01723 * readUltrasonicDistance(3, 2);
  if (distanciavaga2 <= 200) {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    
   if(vaga2Livre == 1 && vaga2OCupada == 0){
    	vaga2OCupada = vaga2OCupada +1;
      	vaga2Livre = vaga2Livre - 1;
    }
    
  } else {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    
  if(vaga2Livre == 0 && vaga2OCupada == 1){
    	vaga2OCupada = vaga2OCupada -1;
      	vaga2Livre = vaga2Livre + 1;
    }
    
  }
  
  
  lcd.clear();
  lcd.print("Vagas Livres   ");
  lcd.print(vaga1Livre + vaga2Livre);
  lcd.setCursor(0,1);
  lcd.print("Vagas Ocupadas ");
  lcd.print(vaga1OCupada + vaga2OCupada);
  delay(400);

}

