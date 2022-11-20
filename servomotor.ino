// Por Roberto A.Zavala
// Breve : https://es.overleaf.com/read/qjwdykqxxscj
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼   : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

int tp;                // tiempo del pulso
int lw;                // tiempo del LOW
int sa = 90;           // servo ángulo

void setup()
{
Serial.begin(9600);
pinMode(S, OUTPUT);
}

void loop()
{
tp  = 13.87 * sa + 460;
lw = 3516-tp;                          // 3516 microsegundos es el ciclo del sg90 de prueba
for( int i=0; i<=60; i++ )             // Envía pulsos durante el tiempo que tarda llevar al eje desde 0° hasta 220°
  {
  digitalWrite(2, HIGH); 
  delayMicroseconds (mp);
  digitalWrite(2, LOW );  
  delayMicroseconds(low);
  }
  delay(1000);
}
