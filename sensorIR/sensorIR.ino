//POSIÇÃO 0 =ESQ, POSIÇÃO 1 = CENTRO, POSIÇÃO 2 = DIR
int SensoresIR[] = {8, 9, 10};


void setup(){

  pinMode(SensoresIR, INPUT); //DEFINE O PINO COMO ENTRADA
 Serial.begin(9600);
}

void loop(){
        Serial.println(digitalRead(SensoresIR[0]));

 if(digitalRead(SensoresIR[0]) == HIGH){

      Serial.print("VIRAR PARA DIREITA");
 
  }
   if(digitalRead(SensoresIR[2]) == HIGH){

      Serial.print("VIRAR PARA DIREITA");
 
  }

}