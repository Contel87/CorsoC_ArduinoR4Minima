/* Esempio di programmazione ad oggetti ...
 * 2.
 * Si puo' migliorare ancora ... il lampeggio del led puo' essere astratto in una struttura invece che direttamente nel loop.
 */

/* L'oggetto "led" e' una struttura contenente 3 puntatori a funzioni */
struct led{
    void (*on)(void);
    void (*off)(void);
    void (*run)(void);
};

/* Led acceso */
static void ra_led_on(void){
    digitalWrite(LED_BUILTIN, HIGH);
}

/* Led spento */
static void ra_led_off(void){
    digitalWrite(LED_BUILTIN, LOW);
}

/* La variabile "g_led" contenente i 2 puntatori a funzione, permette a questi ultimi di puntare a specifiche funzioni*/
static struct led g_led = {
    .on = ra_led_on,
    .off = ra_led_off,
    .run = led_blink,
};

/* Led lampeggiante */
void led_blink()
{    
        g_led.on();
        delay(500);
        g_led.off();
        delay(500);
}


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  g_led.run();
}
