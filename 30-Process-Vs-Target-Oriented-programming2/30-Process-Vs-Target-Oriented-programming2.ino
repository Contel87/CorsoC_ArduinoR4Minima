/* Esempio di programmazione ad oggetti ...
 * 1.
 * Con la programmaione ad oggetti si costruiscono una serie di oggetti, se ne descrivono i comportamenti e gli attributi che si scambieranno tra loro
 * ed infine si utilizzano gli oggetti per risolvere il problema (in questo caso far lampeggiare un led)
 */



/* L'oggetto "led" e' una struttura contenente 2 puntatori a funzioni */
struct led{
    void (*on)(void);
    void (*off)(void);
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
};

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  g_led.on();
  delay(500);
  g_led.off();
  delay(500);
}


