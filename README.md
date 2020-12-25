# CP-VSCode-Setup
A Competitive Programming setup using VSCode for C++ users in Windows and Ubuntu with Debugging support.

[Installation video for Windows on Youtube](https://youtu.be/qzEWDVXknzg)

[Installation video for Ubuntu on Youtube](https://youtu.be/HNeDI7Ijbfc)

## **Features**
1) VSCode ready to use out of the box (Only windows users need to correct MinGW installation path).
1) Run `.\windows-reset.bat` in Windows or `./ubuntu-reset.sh` in Ubuntu to reset the `Current` Folder.
1) All `.cpp` files automatically take input from `input.txt` and output to `output.txt` in the same folder. No need for complicated `ifdef`s.
1) Leverage powerful features of VSCode:
   * Step Through Debugging (Execute the code line by line, Hover over variables to get values)
   * Debug Console (View any object i.e. map, set, vector or any complex object)
   * Zen Mode (Utilize your screen to the fullest)

![Setup Image](https://user-images.githubusercontent.com/37595244/96337963-6f224880-10a8-11eb-8750-6a1974417903.png)

## **Prerequisites**

### Windows
1) Follow Steps 1-4 from [Official VSCode Windows Prerequisites](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)
1) [Check your MinGW installation](https://code.visualstudio.com/docs/cpp/config-mingw#_check-your-mingw-installation)

You are good to go!

### Ubuntu
1) Follow Steps 1-2 from [Official VSCode Linux Prerequisites](https://code.visualstudio.com/docs/cpp/config-linux#_prerequisites)
1) Make sure g++ is installed
    * Install
    ```bash
    sudo apt-get update
    sudo apt-get install g++
    sudo apt-get install gdb
    ```
    * Check Installation
    ```bash
    g++ --version
    gdb --version
    ```

You are good to go!

## Installation
1) Download this repository and extract folder `CP-VSCODE-SETUP`.
1) Open VSCode. Click on `File->Open Folder->CP-VSCODE-SETUP`
1) Open a Terminal by clicking on `Terminal->New Terminal` or press `` Ctrl+` ``
1) You can always create a `Current` Folder from terminal by
    * Windows
    ```bash
    .\windows-reset.bat
    ```
    * Ubuntu
        * Make the script executable (Only needed once)
        ```bash
        chmod +x ubuntu-reset.sh
        ```
        * Execute the script
        ```bash
        ./ubuntu-reset.sh
        ```
    Note: To reset the `Current` Folder at any time, you may run this command again.

## MinGW package version issue in Windows
Your MinGW package version may be different. In this case, you should update the [`gcc.exe`](https://github.com/codeict/CP-VSCode-Setup/blob/d01a02a94c6ddf77f9160604b17bdbb3570eb4e9/.vscode/c_cpp_properties.json#L13), [`g++.exe`](https://github.com/codeict/CP-VSCode-Setup/blob/d01a02a94c6ddf77f9160604b17bdbb3570eb4e9/.vscode/tasks.json#L27) and [`gdb.exe`](https://github.com/codeict/CP-VSCode-Setup/blob/d01a02a94c6ddf77f9160604b17bdbb3570eb4e9/.vscode/launch.json#L30) locations in the `.vscode` configuration files.

## Usage
1) You should write your code in the `Current` Folder.
1) Press `F5` to run any `.cpp` file. The file will automatically take input from `input.txt` and write output to `output.txt`

Happy Coding!

## Issues and Suggestions
Please create a [Github Issue](https://guides.github.com/features/issues/) should you come across an Issue or have a suggestion. I will be happy to resolve it at the earliest.
