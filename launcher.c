#include<stdio.h>
#include<windows.h>
int main(){
    //Initializing variables
    int choice;
    char repeat;

    //Sarting a loop so that the program for process creation doesn't end doesn't end
    do{
        //Initializing the value for StartupInfo and ProcessInfo
        STARTUPINFO si = {sizeof(si)};
        PROCESS_INFORMATION pi = {0};

        //Showing the table from which to choose
        printf("  ____________________________________________________________________________\n");
        printf(" |                            User Manual                                     |\n");
        printf(" |____________________________________________________________________________|\n");
        printf("||_____1______||______2______||______3______||______4_______||_______5________||\n");
        printf("||___Notepad__||____VmWare___||____VsCode___||____Steam_____||____Chrome______||\n");
        printf("||_____6______||______7______||______8______||______9_______||______10________||\n");
        printf("||_Calculator_||__VirtualBox_||___PyCharm___||__Epic Games__||_Microsoft Edge_||\n");
        printf("\\______________________________________________________________________________/\n\n\n");
        printf("Please enter the number to create process: \n");
        scanf("%d",&choice);
    
        //Taking user input to create a specific process
        if(choice==1){
            //Creating process for notepad if user enters option 1
            if(CreateProcess(
                "C:\\Windows\\System32\\notepad.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for notepad, Error: %lu\n",GetLastError());
            }
        }

        else if(choice==2){
            //Creating process for VmWare if user enters option 2
            if(CreateProcess(
                "C:\\Program Files (x86)\\VMware\\VMware Workstation\\vmware.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for VmWare, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==3){
            //Creating process for VsCode if user enters option 3
            if(CreateProcess(
                "C:\\Users\\GYANDEEP\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for VsCode, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==4){
            //Creating process for Steam if user enters option 4
            if(CreateProcess(
                "D:\\Steam\\Steam.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for steam, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==5){
            //Creating process for Chrome if user enters option 5
            if(CreateProcess(
                "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for chrome, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==6){
            //Creating process for Calculator if user enters option 6
            if(CreateProcess(
                "C:\\Windows\\System32\\calc.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for calculator, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==7){
            //Creating process for VirtualBox if user enters option 7
            if(CreateProcess(
                "C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for VirtualBox, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==8){
            //Creating process for PyCharm if user enters option 8
            if(CreateProcess(
                "C:\\Program Files\\JetBrains\\PyCharm Community Edition 2025.1.3\\bin\\pycharm64.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for PyCharm, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==9){
            //Creating process for Epic Games if user enters option 9
            if(CreateProcess(
                "C:\\Program Files (x86)\\Epic Games\\Launcher\\Portal\\Binaries\\Win32\\EpicGamesLauncher.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for Epic Games, Error: %lu\n",GetLastError());
            }

        }

        else if(choice==10){
            //Creating process for Microsoft Edge if user enters option 10
            if(CreateProcess(
                "C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe",
                NULL,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi
            )){
                printf("Process created successfully \n ProcessId: %lu\n ThreadId: %lu\n",pi.dwProcessId,pi.dwThreadId);
                //Closing handles after create process function
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            //Getting reason for errors if anything happens
            else{
                printf("Process failed for Microsoft Edge, Error: %lu\n",GetLastError());
            }

        }
        //If user enters a wrong option
        else{
            printf("\nInvalid choice, Enter correct number");
        }

        //Giving option if the user wants to create more process
        printf("Do you want to create more process? (y/n): \n");
        scanf(" %c",&repeat);

        //Breaking the loop if user don't want to create process anymore
        if(repeat=='n' || repeat=='N'){
            break;
        }

    }while(repeat=='y' || repeat=='Y');

    return 0;
}