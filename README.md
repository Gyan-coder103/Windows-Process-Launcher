#🖥️ Windows Process Launcher (C + WinAPI)
A console-based Windows application launcher built using C and the Windows API.

##📌 Overview:
  -This is a Windows-based process launcher written in C using the Windows API.
  -The program allows users to launch multiple applications from a structured menu using the CreateProcess() function.
  -It demonstrates low-level interaction with the Windows operating system and proper process management using WinAPI structures.
  
##🚀 Features
    1.Launch multiple applications from a console menu
    2.Uses CreateProcess() for process creation
    3.Displays:
        Process ID
        Thread ID
    4.Proper handle management (CloseHandle)
    5.Loop-based interface for repeated process creation
    6.Error handling using GetLastError()
    7.Clean formatted user manual UI in console
    
##🛠️ Technologies Used
    -C Programming Language
    -Windows API
    -Structures:
         STARTUPINFO
         PROCESS_INFORMATION
    -Functions:
         CreateProcess()
         CloseHandle()
         GetLastError()

##📂 Applications Included
    -The launcher currently supports:
         -Notepad
         -VMware Workstation
         -VS Code
         -Steam
         -Google Chrome
         -Calculator
         -VirtualBox
         -PyCharm
         -Epic Games Launcher
         -Microsoft Edge
⚠ Note: Some application paths are system-specific and may need modification depending on your installation directory.

##⚙️ How to Compile
     -Using GCC (MinGW)
     -In terminal type:
      gcc launcher.c -o launcher.exe
     -Then run:
      launcher.exe

#### Future Improvements
  - Refactor repetitive code using arrays
  - Add dynamic user-defined application paths
  - Improve input validation
