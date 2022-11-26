#include <NewPing.h>
#include <WiFi.h>
 
#define SSID "ESP32"
#define PASSWD "12345678"

#define TRIGGER_PIN 18
#define ECHO_PIN 5
#define MAX_DISTANCE 400


WiFiServer sockServ(139);
double distancia = 0;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
    //verificar se pode usar porta serial diferente
    Serial.begin(115200);
    delay(1000);
    WiFi.begin(SSID, PASSWD);
 
    if(WiFi.status() != WL_CONNECTED){
       Serial.print("Conectado.");
    }
 
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
 
    sockServ.begin();
  
    Serial.begin(115200);
}
void loop() {
    delay(50);
    distancia = sonar.ping_cm();
    Serial.print("Distância: ");
    Serial.print(distancia);
    Serial.println("cm");

    if(distancia <= 50){
        WiFiClient client = sockServ.available();
        if (client) {
          while (client.connected()) {
              while (client.available() > 0) {
                  char c = client.read();
                  client.write(c);
              }
              delay(10);
          }
          client.stop();
          Serial.println("Fim da conexao");
      }
   } 
}
