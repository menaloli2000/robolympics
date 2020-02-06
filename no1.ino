/*digtal*/
//digitalWrite(,) //digitalRead(,) 

/*PWM*/
//AnalogWrite(,) //digitalWrite(,) //digitalRead(,)

/*Analog*/
//digitalWrite(,) //AnalogRead(,)

/*************************************************/

//analog ip val. (0>>1023) & op (0>> 255)
int pot_val=0;
int led_val=0;

void setup () {
    
    Pinmode(9,OUTPUT);
    Pinmode(A0,INPUT);
}

void loop () {

    //read the analog in val
    pot_val = AnalogRead(A0);

    //map it to the range of the analog out
    led_val = map(pot_val,0,1023,0,255);
    
    //change the analog out val.
    AnalogWrite(9,led_val);
}
