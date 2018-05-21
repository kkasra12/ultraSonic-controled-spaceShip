const int move_tp = 2, move_ep = 3;
const int fire_tp = 4, fire_ep = 5, fire_vcc = 6;
int distance,delta;
void setup() {
  pinMode(move_tp, OUTPUT);
  pinMode(move_ep, INPUT);
  pinMode(fire_tp, OUTPUT);
  pinMode(fire_ep, INPUT);
  pinMode(fire_vcc, OUTPUT);
  digitalWrite(fire_vcc, HIGH);
  Serial.begin(9600);
}
int get_dis(int trigPin,int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int duration = pulseIn(echoPin, HIGH);
  int dis = duration*0.034/2;
  int max_val = 50;
  if(dis > max_val)
    dis = max_val;
  return dis;
}
void loop() {
  delay(250);
  distance = get_dis(move_tp,move_ep);
  //Serial.println(distance);
  if(distance > 20 and distance < 50)
    Serial.println("u");
  else if(distance > 1 and distance < 15)
    Serial.println("d");
  else
    Serial.println("");
  if(get_dis(fire_tp,fire_ep) < 20)
    Serial.println("f"); 
}
