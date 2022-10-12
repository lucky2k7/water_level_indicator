#define level1_i D1
#define level2_i D2
#define level3_i D3
#define level4_i D4


#define level1_o D5
#define level2_o D6
#define level3_o D7
#define level4_o D8
int state = 0;

#define power D0



void setup() {
  pinMode(level1_i, INPUT_PULLUP);
  pinMode(level2_i, INPUT_PULLUP);
  pinMode(level3_i, INPUT_PULLUP);
  pinMode(level4_i, INPUT_PULLUP);
  
  pinMode(level1_o, OUTPUT);
  pinMode(level2_o, OUTPUT);
  pinMode(level3_o, OUTPUT);
  pinMode(level4_o, OUTPUT);

  pinMode(power, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
// level1
 Serial.print("level1 = ");
 state = digitalRead(level1_i);
// Serial.println(state);
 if(state){
  Serial.println("0");
  digitalWrite(level1_o, LOW);
 }
 else{
  Serial.println("1");
  digitalWrite(level1_o, HIGH);
 }

// level2
 Serial.print("level2 = ");
 state = digitalRead(level2_i);
// Serial.println(state);
 if(state){
  Serial.println("0");
  digitalWrite(level2_o, LOW);
 }
 else{
  Serial.println("1");
  digitalWrite(level2_o, HIGH);
 }

 // level3
 Serial.print("level3 = ");
 state = digitalRead(level3_i);
// Serial.println(state);
 if(state){
  Serial.println("0");
  digitalWrite(level3_o, LOW);
 }
 else{
  Serial.println("1");
  digitalWrite(level3_o, HIGH);
 }

 // level4
 Serial.print("level4 = ");
 state = digitalRead(level4_i);
// Serial.println(state);
 if(state){
  Serial.println("0");
  digitalWrite(level4_o, LOW);
  digitalWrite(power, LOW);
 }
 else{
  Serial.println("1");
  digitalWrite(level4_o, HIGH);
  digitalWrite(power, HIGH);
 }
 


 Serial.println("--------------------------------------");
 delay(1000);

}
