/* Esempio di programmazione ad oggetti ...
 * 3.
 * Si puo' migliorare ancora ... aggiungendo il numero del pin su cui c'e' il led nelle #define ad iniio programma
 */

#define LED_ON_PIN 13

/* L'oggetto "led" e' una struttura contenente 2 puntatori a funzioni */
struct led{
    int pin;
    void (*on)(struct led *p);
    void (*off)(struct led *p);
    void (*run)(void);
};

/* Led acceso */
static void ra_led_on(struct led *p){
    digitalWrite(p->pin, HIGH);
}

/* Led spento */
static void ra_led_off(struct led *p){
    digitalWrite(p->pin, LOW);
}

/* La variabile "g_led" contenente i 2 puntatori a funzione, permette a questi ultimi di puntare a specifiche funzioni*/
static struct led g_led = {
    .pin = LED_ON_PIN,
    .on = ra_led_on,
    .off = ra_led_off,
    .run = led_blink,
};

/* Led lampeggiante */
void led_blink()
{    
        g_led.on(&g_led);
        delay(500);
        g_led.off(&g_led);
        delay(500);
}

void setup() {
  pinMode(g_led.pin, OUTPUT);
}

void loop() {
  g_led.run();
  
  //g_led.on(&g_led);
  //delay(500);
  //g_led.off(&g_led);
  //delay(500);
  
}
