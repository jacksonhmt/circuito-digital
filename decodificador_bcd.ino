#include<binary.h>

#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8

#define primeiro 9
#define segundo 10
#define terceiro 11
#define quarto 12

void setup()
{
    Serial.begin(9600);

    pinMode(segA, OUTPUT);
    pinMode(segB, OUTPUT);
    pinMode(segC, OUTPUT);
    pinMode(segD, OUTPUT);
    pinMode(segE, OUTPUT);
    pinMode(segF, OUTPUT);
    pinMode(segG, OUTPUT);

    pinMode(primeiro, INPUT);
    pinMode(segundo, INPUT);
    pinMode(terceiro, INPUT);
    pinMode(quarto, INPUT);
}

void loop()
{
  	int arr[3];
  
    arr[0] = digitalRead(primeiro);
    arr[1] = digitalRead(segundo);
    arr[2] = digitalRead(terceiro);
    arr[3] = digitalRead(quarto);

	int numero = binToDecimal(arr);
  	apresentarNumero(numero);
}

int binToDecimal(int arr[]) {
  int valor = 0;
  for (int i=0; i< 4; i++)
  {
    valor *= 2;
    if (arr[i] == 1){
      valor++;
    }
  }
  Serial.println("-----");
  Serial.println(valor);
  
  return valor;
}

void apresentarNumero(int numero) {
	switch(numero){
		case 0:
      		nr0();
      		break;
      	case 1:
      		nr1();
      		break;
      	case 2:
      		nr2();
      		break;
      	case 3:
      		nr3();
      		break;
      	case 4:
      		nr4();
      		break;
      	case 5:
      		nr5();
      		break;
      	case 6:
      		nr6();
      		break;
      	case 7:
      		nr7();
      		break;
      	case 8:
      		nr8();
      		break;
      	case 9:
      		nr9();
      		break;
		case 10:
      		letraA();
      		break;
        case 11:
      		letraB();
      		break;
        case 12:
      		letraC();
      		break;
        case 13:
      		letraD();
      		break;
        case 14:
      		letraE();
      		break;
        case 15:
      		letraF();
      		break;
    }
}

void nr0(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, true);
}

void nr1(){
    digitalWrite(segA, true);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, true);
  	digitalWrite(segE, true);
  	digitalWrite(segF, true);
  	digitalWrite(segG, true);
}

void nr2(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, true);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, true);
  	digitalWrite(segG, false);
}

void nr3(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, true);
  	digitalWrite(segF, true);
  	digitalWrite(segG, false);
}

void nr4(){
    digitalWrite(segA, true);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, true);
  	digitalWrite(segE, true);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void nr5(){
    digitalWrite(segA, false);
  	digitalWrite(segB, true);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, true);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void nr6(){
    digitalWrite(segA, false);
  	digitalWrite(segB, true);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void nr7(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, true);
  	digitalWrite(segE, true);
  	digitalWrite(segF, true);
  	digitalWrite(segG, true);
}

void nr8(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void nr9(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, true);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void letraA(){
    digitalWrite(segA, false);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, true);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void letraB(){
    digitalWrite(segA, true);
  	digitalWrite(segB, true);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void letraC(){
	digitalWrite(segA, true);
  	digitalWrite(segB, true);
  	digitalWrite(segC, true);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, true);
  	digitalWrite(segG, false);
}

void letraD(){
	digitalWrite(segA, true);
  	digitalWrite(segB, false);
  	digitalWrite(segC, false);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, true);
  	digitalWrite(segG, false);
}

void letraE(){
	digitalWrite(segA, false);
  	digitalWrite(segB, true);
  	digitalWrite(segC, true);
  	digitalWrite(segD, false);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}

void letraF(){
	digitalWrite(segA, false);
  	digitalWrite(segB, true);
  	digitalWrite(segC, true);
  	digitalWrite(segD, true);
  	digitalWrite(segE, false);
  	digitalWrite(segF, false);
  	digitalWrite(segG, false);
}