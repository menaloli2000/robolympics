//law 3ayez t4a88al led 1 sec we te2fel 2 sec we tkarrar keda

void setup() {

  pinMode(13,OUTPUT); //law hat5alle 2el o/p men 5v, 3.3v m4 ht3rf tt7km feeh bel code
  
}

void loop() {  /*law kont 3yzha t3ml kda marra wa7da bas hakteb 2el kalam da fe void setup()*/

  digitalWrite (13,HIGH);
  DELAY(1000);
  digitalWrite (13,LOW);
  DELAY (2000);
}

/**************************************/

 if(Volt < 5) {
   
    print("NO!");
}

else if (Volt <= 10) { 

  print("Still NO!");
}

else {
  
  print("oh yeah....");
}

/**************************/

//Logic operands:

// (|| OR) (&& AND) (!! NOT)
