
// Aikaisemmasta blink-ohjelmasta käytetään tietoa hyväksi ja laitetaan led = 1 eikä 5. 
// Onkohan kosketussensori 15? (cheat sheetin mukaan on... toimii!)

// Inisiasi nomor pin
const int touchPin = 15;
const int ledPin = 1; 
//const int ledPin = 5;
// Nilai treshold/ toleransi sentuh
const int threshold = 35;
// Variabel untuk menyimpan nilai yang dibaca sensor 
int touchValue;
void setup(){
  delay(1000);   // Menginisiasi ledPin sebagai output
  pinMode (ledPin, OUTPUT);
}
void loop(){
  // Membaca nilai sensor  
  touchValue = touchRead(touchPin);
  
  if(touchValue < threshold){
    digitalWrite(ledPin, LOW);
  }  // Apabila touchValue < treshold (sedang tidak disentuh),  
  else{
    digitalWrite(ledPin, HIGH);
  }
  delay(500);
}
