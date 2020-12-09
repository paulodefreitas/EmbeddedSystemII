#include <LiquidCrystal.h> //Carrega a biblioteca LCD
#include <DHT.h> //Carrega a biblioteca DHT

//Define a ligação ao pino de dados do sensor
#define DHTPIN A5

//Define o tipo de sensor DHT utilizado
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

//Define os pinos que serão ligados ao LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Array simbolo grau
byte grau[8] = { B00001100,
                 B00010010,
                 B00010010,
                 B00001100,
                 B00000000,
                 B00000000,
                 B00000000,
                 B00000000,
               };

void setup()
{
  Serial.begin(9600); //Inicializa a serial
  lcd.begin(16, 2); //Inicializa LCD
  lcd.clear(); //Limpa o LCD
  //Cria o caractere customizado com o simbolo do grau
  lcd.createChar(0, grau);
  dht.begin();
}

void loop()
{
  float h = dht.readHumidity(); //Le o valor da umidade
  float t = dht.readTemperature(); //Le o valor da temperatura
  lcd.setCursor(0, 0);
  lcd.print("Temp : ");
  lcd.print(" ");
  lcd.setCursor(7, 0);
  lcd.print(t, 1);
  lcd.setCursor(12, 0);

  //Mostra o simbolo do grau formado pelo array
  lcd.write((byte)0);

  //Mostra o simbolo do grau quadrado
  //lcd.print((char)223);

  lcd.setCursor(0, 1);
  lcd.print("Umid : ");
  lcd.print(" ");
  lcd.setCursor(7, 1);
  lcd.print(h, 1);
  lcd.setCursor(12, 1);
  lcd.print("%");

  //Intervalo recomendado para leitura do sensor
  delay(2000);
}
