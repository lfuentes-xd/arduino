//emtradas
const int s1 =2;
const int s2 =3;
const int s3 =4;
const int s4 =5;
// salidas 
const int A = 7;
const int B = 8;
const int C = 9;
const int D = 10;
const int E = 11;
const int F = 12;
const int G = 13;

const int Digito1 = 5; 
const int Digito2 = 6;
//estados 
int estados1 = 0;
int estados2 = 0;
int estados3 = 0;
int estados4 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);

  pinMode(Digito1,OUTPUT);
  pinMode(Digito2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estados1 = digitalRead(s1);
  estados2 = digitalRead(s2);
  estados3 = digitalRead(s3);
  estados4 = digitalRead(s4);
  /*
  delay(5); 
  digitalWrite(Digito1,HIGH);
  numero1(); 
  */
 //numero1A();
//numero0();
delay(222);
numero1A();
delay(222);
numero1B();


}
void numero0(){
  digitalWrite(Digito1,LOW);
  digitalWrite(Digito2,HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(Digito1,LOW);
  digitalWrite(Digito2,HIGH);
}

void numero1A(){
  digitalWrite(Digito1,LOW);
  digitalWrite(Digito2,LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(Digito1,LOW);
  digitalWrite(Digito2,HIGH);
 
}
void numero1B(){
  digitalWrite(Digito1,LOW);
  digitalWrite(Digito2,LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(Digito1,HIGH);
  digitalWrite(Digito2,LOW);
 
}

void numero2(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  
}
void numero3(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  
}
void numero4(){
  digitalWrite(D, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(G, HIGH);
  
}
void numero5(){
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  
}
void numero6(){
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(A, HIGH);
  
}
void numero7(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(A, HIGH);
  
}
void numero8(){
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);

  
}
void numero9(){
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);

  
}

/*
 digitalWrite(Digito1,HIGH);
  delay(5);
  digitalWrite(Digito1,LOW);
  numero0(); 
  digitalWrite(Digito2,HIGH);
  delay(5);
  digitalWrite(Digito2,LOW);
  
*/