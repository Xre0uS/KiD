from tkinter import *

class Window(Frame):
    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.master = master
    #menu stuff
        menu = Menu(self.master)
        self.master.config(menu=menu)
    
        fileMenu = Menu(menu)
        fileMenu.add_command(label="Item")
        fileMenu.add_command(label="Exit", command=self.exitProgram)
        menu.add_cascade(label="File", menu=fileMenu)


    # widget can take all window
        self.pack(fill=BOTH, expand=1)

    # create button, link it to clickExitButton()
        exitButton = Button(self, text="Exit", command=self.clickExitButton)

    # place button at (0,0)
        exitButton.place(x=540, y=150)

    def exitProgram(self):
        exit()
    
    def clickExitButton(self):
        exit()

#This is the calling of programm   
root = Tk()
app = Window(root)
root.wm_title("AutoLocker V1.0")
root.geometry("1080x300")
root.mainloop()
