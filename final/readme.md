# Folder with all the final payload/scripts

Items:
1. ```digispark.cpp``` digispark code for the attack, this version does not get admin privileges.
2. ```1.ps1``` first stage of the attack, download the payload and run it, deletes the payload after process migration is complete.
3. ```0.exe``` the payload.
4. ```kid_msf_auto.rc``` script to fill in all msfconsole parameters, also calls ```auto_migrate.rc``` to migrate process after session opens. run it as ```msfconsole -r /home/kali/kid_msf_auto.rc``` in terminal.
5. ```auto_migrate.rc``` to be ran after a session open, migrate process to powershell.exe. Payload will be deleted after migration.
6. ```payload_source.cpp``` source code of the payload.
