import win32api, win32con, random, time, win32com.client

def click(x,y):
    win32api.SetCursorPos((x,y))
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,x,y,0,0)
    time.sleep(0.1)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,x,y,0,0)

shell = win32com.client.Dispatch("WScript.Shell")
time.sleep(5)

win32api.keybd_event(f,0,0,0)
while True:
    click(random.randint(0,1000), random.randint(0,1000))
    #shell.SendKeys("w");

