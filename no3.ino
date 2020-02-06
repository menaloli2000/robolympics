/*serial monitor*/
//for debugging src

//setup (fel void setup() )
    //Baud rate >> sor3et na2l 2el data >> 9600
   // Serial.begin(9600) >> 7addt 2el baud rate

//for printing (in loop())
    //Serial.print("strinh") or Serial.print(int) >> 2el values gamb ba3d
    //Serial.println(values or "strings") >> 2el values ta7t ba3d

//send data from Pc to Arduino
//Serial.available() >> check if first character is sent or not
//Serial.read() >> return the first chaaracter sent from pc to Arduino

/*Ultrasonic Sensor >> measures distance*/
//code 2el ultrasonic >> copy/paste
//men 8er library klam kteer copy paste
//nel library hat7ot library ubing #include <NewPing.h> foo2 5ales
//hat3arraf var men noo3 NewPing 
//NewPing sonar(TRIGGER_PIN, ECHO_PIN,MAX_DIST)

void setup() {
}

void loop() {
}
