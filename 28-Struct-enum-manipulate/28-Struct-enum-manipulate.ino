#define BUF_SIZE 20 // Mi serve un buffer da 16 bit per stampare su seriale il valore di uint16_t regSettings
char printBuf[BUF_SIZE];

#define ckDIV 2  // 0 - 2 (non deve andare oltre gli 8 bit perchè occupa la prima meta' della variabile uint16_t regSettings)
#define deID 12  // 0 - 15 (non deve andare oltre gli 8 bit perchè occupa la seconda meta' della variabile uint16_t regSettings)

uint16_t regSettings;

typedef enum e_clock_div {
  DIV_0 = 0,
  DIV_1 = 1,
  DIV_2 = 2
} clock_div_t;  // ckDIV

struct pin_settings_t {
  clock_div_t div;  // ckDIV
  uint8_t devID;    // deviceID
};



void setTouchPinClockDiv(const clock_div_t aDiv) { // Cambia il valore di "div" nella struttura "pin_settings_t", inserendo il valore che ho impostato nella #define ckDIV
  regSettings = (regSettings & ~(0xF0)) | (uint8_t)aDiv << 4;  // Mette a 0 i 4 bit a sx e "infila" aDiv "spingendolo" a sx di 4 bit.
}
void setdevID(const uint8_t deviceID) { // Cambia il valore di "devID" nella struttura "pin_settings_t", inserendo il valore che ho impostato nella #define deID
  regSettings = (regSettings & ~(0x0F)) | (uint8_t)deID;  // Mette a 0 i 4 bit a dx e ci "infila" deviceID
}


pin_settings_t getTouchPinSettings(){ // Legge il valore degli elementi nella struttura
  pin_settings_t ret;  // ret punta alla struttura
  ret.div = static_cast<clock_div_t>(regSettings >> 4); // div b16 - b9
  ret.devID = (regSettings & 0x0F);  //deID b8 - b0
  return ret;
}

void printSettings() {
  pin_settings_t settings = getTouchPinSettings();
  snprintf(printBuf, BUF_SIZE, " ckDIV: %2d - devID: %4d ", (settings.div), (settings.devID));
  Serial.println(printBuf);
}


void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.print("Original elements was: ");
  printSettings();                                         // Stampo il valore originale degli elementi della struttura PRIMA della modifica
  setTouchPinClockDiv(static_cast<clock_div_t>(ckDIV));    // modifico l'elemento "clock_div_t div" nella struttura "pin_settings_t"
  setdevID(deID);                                          // modifico l'elemento "uint8_t devID" nella struttura "pin_settings_t"
  Serial.print("uint16_t regSettings: 0b"); // Variabile che uso come buffer per immagazzinare i valori da modificare nella struttura
  Serial.print(regSettings, BIN);  // Dumping del registro che uso per fare le modifiche (per capire se la funzione setTouchPinClockDiv lavora correttamente)
  Serial.println("; (bit b15 - b7 clock_div_t div | bit b6 - b0 uint8_t devID)");
  Serial.print("New elements are: ");
  printSettings();  // Stampo il valore degli elementi della struttura "pin_settings_t" DOPO la modifica
}

void loop() {
  // put your main code here, to run repeatedly:
}
