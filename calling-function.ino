int Led1 = D6; //red
int Led2 = D4; //yellow
int Led3 = D5; //green

int Led1Toggle(String command);
int Led2Toggle(String command);
int Led3Toggle(String command);

void setup() {
    
    pinMode(Led1, OUTPUT);
    pinMode(Led2, OUTPUT);
    pinMode(Led3, OUTPUT);
    
    Particle.function("Led1", Led1Toggle);
    Particle.function("Led2", Led2Toggle);
    Particle.function("Led3", Led3Toggle);
    
    digitalWrite(Led2,LOW);
    digitalWrite(Led1,LOW);
    digitalWrite(Led3,LOW);

}

void loop() {
    

}

int Led1Toggle(String command){
    if (command == "on")
    {
        digitalWrite(Led1, HIGH);
        return 1;
     
    }
    else if (command == "off")
    {
        digitalWrite(Led1, LOW);
        return 0;
    }
    else{
        return -1;
    }
}

int Led2Toggle(String command){
    if (command == "on")
    {
        digitalWrite(Led2, HIGH);
        return 1;
    }
    else if (command == "off")
    {
        digitalWrite(Led2, LOW);
        return 0;
    }
    else{
        return -1;
    }
    
}

int Led3Toggle(String command){
    if (command == "on")
    {
        digitalWrite(Led3, HIGH);
        return 1;
    }
    else if (command == "off")
    {
        digitalWrite(Led3, LOW);
        return 0;
     
    }
    else {
        return -1;
    }
}

