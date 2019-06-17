#include <LiquidCrystal.h>

#define dipA1 13
#define dipA2 12
#define dipA3 11
#define dipA4 10

#define dipB1 9
#define dipB2 8
#define dipB3 7
#define dipB4 6

#define dipSeletorAcao A0

LiquidCrystal lcd(5, 4, 3, 2, 1, 0);

int num1Anterior = 0, num2Anterior = 0;
int num1 = 0, num2 = 0;
char operacao, operacaoAnterior;
int resultado = 0;

void setup() {
  lcd.begin(16, 2);
  
  pinMode(dipA1, INPUT);
  pinMode(dipA2, INPUT);
  pinMode(dipA3, INPUT);
  pinMode(dipA4, INPUT);
  
  pinMode(dipB1, INPUT);
  pinMode(dipB2, INPUT);
  pinMode(dipB3, INPUT);
  pinMode(dipB4, INPUT);
  
  pinMode(dipSeletorAcao, INPUT);
}

void loop() {
  int seletorAcao = digitalRead(dipSeletorAcao);
  if(seletorAcao == 0){
  	operacao = '+';
  } else {
    operacao = '-';
  }
  
  if(operacao != operacaoAnterior){
    operacaoAnterior = operacao;
  	lcd.clear();
  }
	
  num1 = getPrimeiroNum();
  num2 = getSegundoNum();
  
  if(num1Anterior != num1){
    num1Anterior = num1;
    
    lcd.clear();
  }
  
  if(num2Anterior != num2){
    num2Anterior = num2;

    lcd.clear();
  }

  resultado = resultadoOperacao(num1, num2, operacao);

  lcd.setCursor(0, 0);
  lcd.print(num1);
  lcd.print(operacao);
  lcd.print(num2);
  lcd.print('=');
  lcd.print(resultado);
}

int resultadoOperacao(int num1, int num2, char operacao) {
  if(operacao == '+'){
  	return num1+num2;
  } else {
    return num1-num2;
  }

}

int getPrimeiroNum() {
  int num1[3];
  
  num1[0] = digitalRead(dipA1);
  num1[1] = digitalRead(dipA2);
  num1[2] = digitalRead(dipA3);
  num1[3] = digitalRead(dipA4);
  
  return binToDecimal(num1);
}

int getSegundoNum() {
  int num2[3];
  
  num2[0] = digitalRead(dipB1);
  num2[1] = digitalRead(dipB2);
  num2[2] = digitalRead(dipB3);
  num2[3] = digitalRead(dipB4);
  
  return binToDecimal(num2);
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

 