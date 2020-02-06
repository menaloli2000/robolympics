/*law 3ayez t48l LED*/

//+ve 2el LED hatwassalo be pin 13 wel -ve be pin GND

void setup() {
  
  // put your setup code here, to run once:
  
  pinMode(13,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  
  digitalWrite (13,HIGH);    //LAZEM CAPS (HIGH,OUTPUT)
  
  //HIGH=5V
  //KEDA PIN 13 >> O/P 5v
  //5ALENA HIGH FEL LOOP 34an yfdal yemeddo bekhraba 3latool
}


/*Delay function: (time in milliseconds)*/
//DELAY(1000) == 2estanna 1 sec
