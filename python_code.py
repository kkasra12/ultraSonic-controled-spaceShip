from pyautogui import keyDown,keyUp,click,size
from serial import Serial
from time import sleep,time
se = Serial("/dev/ttyACM1")
sleep(2)
screen_size = size()
while 1:
    command = str(se.readline())
    print(command)
    if 'u' in command:
        keyUp("s")
        keyDown('w')
        print("up")
    elif 'd' in command:
        keyUp('w')
        keyDown('s')
        print("down")
    else:
        keyUp("s")
        keyUp('w')
    if 'f' in command:
        click(screen_size[0]/2,screen_size[1]/2)
