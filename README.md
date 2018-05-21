# ultraSonic-controled-spaceShip
a shooter space ship game controled by ultrasonic

this game uses two ultrasonic module, one for shooting and the other one for controling movement.
in distances less than 10cm the arduini sends 'd' charachter through the serial port, and distances above 20cm it sends 'u'.
if the other ultrasonic detects any object in distance less than 20cm it will send 'f'.

the python code dependencies:

#install pyserial:
sudo pip3 install pyserial
#install pyautogui on windows:
pip install pyautogui
#install pyautogui on linux:
pip3 install python3-xlib
sudo apt-get install scrot
sudo apt-get install python3-tk
sudo apt-get install python3-dev
pip3 install pyautogui


ATTENTION: the game only runs on linux which can run .x86_64 files.
