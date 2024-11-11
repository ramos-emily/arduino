#include <ESP8266WiFi.h> //incluindo a bibli wifi

//variaveis rede e senha
char ssid [] = "redesiot";
char senha [] = "a1234567";

void conectarWiFi(char SSID[], char SENHA[]){
  
  Serial.print("Conectando...");
  Serial.println(SSID);

  WiFi.begin(SSID, SENHA); //inicia a conexão wifi

  while (WiFi.status () != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    /*Quando conectar - vai apresentar
    a mensagem e o IP*/
    Serial.println("Emily e Victor passaram po aqui 0_0");
    Serial.println("WiFi Conectado");
    Serial.println("Endereço de IP: ");
    Serial.println(WiFi.localIP());
  }
}

void setup() {

    Serial.begin(115200);
    delay(10);
  //Chama a função dentro do  SETUP
  conectarWiFi(ssid, senha);

  server.begin();
 Serial.println("Servidor Inicializador");

}

void loop() {

  WiFiClient client = server.available();
  if(!client){
    return;
  }  

  while(!client.available()){
    delay(1);
  }

  client.println("HTTP/1,1 200 OK");
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!DOCKTYPE HTML>");
  client.println("<html>");
  client.println("<meta http-equiv='refresh' content='2'>");
  client.println("<h1>Introdução ao IoT com ESP8266</h1>");
  client.println("<h2> seja bem-vindo (a) ao SENAI...!</h2>");
  client.println("<h2>Emily e Victor ds14 </h2>");
  client.println("</html>");
}

  
  


