// Por Roberto A.Zavala
// Breve : https://es.overleaf.com/read/qjwdykqxxscj
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼   : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

int S = 2;             // puerto de señal
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
sa = 90;                               // el servo ángulo es una variable definida por una rutina
tp  = 13.87 * sa + 460;                // el tiempo de pulso es calculado por la función característica del servo motor
lw = 3516-tp;                          // 3516 microsegundos es el ciclo del sg90 de prueba
for( int i=0; i<=60; i++ )             // se envían pulsos durante el tiempo que tarda llevar al eje desde 0° hasta 220°
  {                                    // la cantidad de pulsos puede ser declarada como función del incremento del ángulo
  digitalWrite(S, HIGH); 
  delayMicroseconds (mp);
  digitalWrite(S, LOW );  
  delayMicroseconds(low);
  }
  delay(1000);
}
