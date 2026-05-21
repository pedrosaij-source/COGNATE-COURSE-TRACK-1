int n = 0;

void setup() {
  for(int p=2; p<=8; p++)
    pinMode(p, OUTPUT);

  pinMode(9, INPUT);   // minus
  pinMode(10, INPUT);  // plus
}

byte num[10][7] = {
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};

void loop() {

  if(digitalRead(10)==HIGH && n<9){
    n++;
    delay(200);
  }

  if(digitalRead(9)==HIGH && n>0){
    n--;
    delay(200);
  }

  for(int i=0; i<7; i++){
    digitalWrite(i+2, num[n][i]);
  }
}