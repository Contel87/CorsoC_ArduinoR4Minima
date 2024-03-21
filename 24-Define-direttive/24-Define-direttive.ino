//#include <analogWave.h> // Richiama una libreria
//#include "analogWave.h" // Se voglio chiamare una libreria nella cartella dello sketch
#define Vero 1
#define falso 0
#define UNO 1
#define DUE UNO+UNO
#define ERR_MSG "Errore di sistema"
// Posso anche andare a capo con la \

#define MSG1 "Nel mezzo del \
cammin di nostra vita"
#define MAX_SZ 10

// E' possibile creare delle macro per svolgere calcoli e operazioni
#define ABS(a) (a)<0 ? -(a) : (a)

// Direttive condizionali per attivare o disattivare alcune sezioni a seconda di quello che accade
#define ITA 1
#define ENG 2
#define ESP 3
#define LANG ITA
#define DEBUG



void setup() {
  Serial.begin(9600);
  delay(2000);
  
  Serial.println(DUE);
  Serial.println(ERR_MSG);
  Serial.println(MSG1);
  int num[MAX_SZ];
Serial.println(ABS(10 - 2));


// Con if nelle direttive viene aggiunta nel programma solo la condizione effettiva, salvando spazio
#if LANG == ITA
Serial.println("ciao");

#elif LANG == ENG
Serial.println("hello");

#elif LANG == ESP

#else Serial.println("???");
Serial.println("ola");

#endif

#undef LANG // Elimino la definizione di LANG per poterlo ridefinirlo o modificarlo

// Posso verificare se una direttiva e' attiva

#if defined DEBUG
Serial.println("Debug attivo");
#endif


}

void loop() {
  // put your main code here, to run repeatedly:

}
