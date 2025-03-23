# Folder with all the final payload/scripts

Items:
1. ```1.ps1``` first stage of the attack, download the payload and run it, deletes the payload after process migrate is complete.
2. ```0.exe``` the payload.
4. ```kid_msf_auto.rc``` script to fill in all msfconsole parameters, also calls ```auto_migrate.rc``` to migrate process after session opens. run it as ```msfconsole -r /home/kali/kid_msf_auto.rc``` in terminal.
5. ```auto_migrate.rc``` to be ran after a session open, migrate process to powershell.exe. Payload will be deleted after migration.
