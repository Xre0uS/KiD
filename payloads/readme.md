# !!DOWNLOAD ONLY IN A CONTROLLED ENVIRONMENT!!

## all payloads here points to host 192.168.0.10:4444

### descriptions (files denoted with X is detected by windows defender):
1. `shell.exe` is a generic tcp reverse shell. X
2. `bkbx64.exe` is a x64 tcp reverse shell encoded in a custom c++ payload. X
3. `bkbx86.exe` is a x86 tcp reverse shell encoded in a custom c++ payload. X
4. `bkbpayload.ll` and `bkbpayloadraw.cs` are XOR encoded tcp revershell written in a custom C# payload that uses a powershell file to download and execute in memory.
5. `test1.exe` is a tcp reverse shell encoded in custom python payload. X 
6. `testing9.exe` is a edited tcp reverse shell created using veil before changing from .bat to .exe. X

A number of tools and lanaguages was used to the process of trying to bypass windows defender, including: Veil, metasploit windows defender evasion, complining custom payloads, we tried payloads encoded using python, c, c++, c#, ruby, go, java.
