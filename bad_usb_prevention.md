Research on how to prevent attack

Link to how prevent Bad_USB attack:
https://www.programmersought.com/article/30054531903/

https://www.currentware.com/block-usb-with-group-policy/

https://redmondmag.com/articles/2017/06/27/prevent-the-use-of-usb-media-in-windows-10.aspx

https://www.manageengine.com/device-control/badusb.html

https://clario.co/blog/how-to-prevent-usb-attacks/

https://forums.ivanti.com/s/article/Preventing-USB-Device-Firmware-Attacks-BadUSB-Using-Lumension-Endpoint-Security-FAQ?language=en_US

https://create.arduino.cc/projecthub/danionescu/arduino-keyboard-exploit-demo-hid-and-prevention-f2f582

https://stackoverflow.com/questions/38786343/prevent-usbhid-from-autoloading-when-usb-hid-device-is-plugged-in

Link to hacking a computer using Arduino:
https://medium.com/csg-govtech/hacking-a-computer-using-arduino-8f0ddddab7e1

https://forum.arduino.cc/t/simple-hid-attack-project-for-windows-pcs/419511

Link to hide HID : https://gist.github.com/mykeels/a271683f9c37a7919297d5df90db648a

https://github.com/int0/hidswitch

https://github.com/pelya/android-keyboard-gadget/issues/9

https://github.com/tigoe/hid-examples/blob/main/HIDEnable/HIDEnable.ino

Disable keyboard: https://www.intowindows.com/5-ways-to-disable-keyboard-in-windows-10/

https://www.businessinsider.com/how-to-disable-keyboard-windows-10

Defend against attackers: https://securelist.com/keyloggers-how-they-work-and-how-to-detect-them-part-1/36138/

https://docs.microsoft.com/en-us/windows/client-management/mdm/policy-csp-deviceinstallation#deviceinstallation-allowinstallationofmatchingdeviceinstanceids

https://www.webroot.com/us/en/resources/tips-articles/keyloggers-explained

https://www.malwarebytes.com/premium

https://www.malwarefox.com/

Is there a way to bypass keylogger "No", if there is a keylogger on your machine there is no way to know what it's capability are or how you can be absolutely guarantee to bypass it. Why because keylogger is a malware it has a specified behaviour that attempt to log your keystroke most commonly they try to log your keystroke and than share with someone else. Yes, you can bypass some of them but you don't know that you will bypass the one you actually have.

Run command prompt as administator
To display protocol statistic and current TCP/IP network connections.

![netstat1](https://user-images.githubusercontent.com/82925962/122079897-6b5de600-ce30-11eb-937a-c089b18949ef.jpg)

To check all the connection type netstat -a it will list down the protocol, Local address, Foreign address and state

![netstat2](https://user-images.githubusercontent.com/82925962/122080194-ab24cd80-ce30-11eb-9590-4160bb4ceb86.jpg)

If you want to know which applications is connected to the internet type netstat -b it will display local address, foreign address and state

![netstat3](https://user-images.githubusercontent.com/82925962/122086852-b0851680-ce36-11eb-96fc-e45ba3c824a9.jpg)

To know the process Id type netstat -bno

![netstat4](https://user-images.githubusercontent.com/82925962/122087351-32753f80-ce37-11eb-8333-91101301284a.jpg)

To know which connection is the keylogger you need to look in the ip address lookup manually, search ip address by google to get the clear idea

![ip lookup](https://user-images.githubusercontent.com/82925962/122088631-7fa5e100-ce38-11eb-92f9-cb4c10bf6df9.jpg)

![ip lookup2](https://user-images.githubusercontent.com/82925962/122088641-83396800-ce38-11eb-8b22-5d2d943e54b8.jpg)

Similarly search by the application name to know which applications is working as rat 

![application](https://user-images.githubusercontent.com/82925962/122089481-63567400-ce39-11eb-9307-8434c1565e75.jpg)

To automatically detect keylogger on your system you can install MalwareFox antimalware which is a strong antimalware that can easily catch threats like keyloggers and spyware 

![malwareFox](https://user-images.githubusercontent.com/82925962/122090304-36ef2780-ce3a-11eb-8fbf-bb7cb0aa37d7.jpg)

Use task manager to detect keylogger

![task manager](https://user-images.githubusercontent.com/82925962/122172446-537b7600-ceb3-11eb-9bb3-1f287e7b96b1.jpg)

Navigate to Windows logon applicaiton, if it has duplication entry which sound unsual like Windows logon (1) it mean someone else is logon to your Windows system so right click and end the program.

![task manager3](https://user-images.githubusercontent.com/82925962/122174039-f7b1ec80-ceb4-11eb-9216-1a2af023d4a8.jpg)

Also check under Start up tab to see if any suspicious-looking programs in the boot menu, disable them

![task manager4](https://user-images.githubusercontent.com/82925962/122174854-aeae6800-ceb5-11eb-995a-8c4a2f1da28d.jpg)

Download keyscrambler : https://www.qfxsoftware.com/

![keyscrambler](https://user-images.githubusercontent.com/82925962/122230191-fd76f480-ceeb-11eb-9046-23243fc4faa3.jpg)

