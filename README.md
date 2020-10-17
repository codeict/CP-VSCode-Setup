# CP-VSCode-Setup
A Competitive Programming setup using Visual Studio Code for C++ users in Windows and Ubuntu.

## **Features**
1) Supports VSCode Debugging Features. Hover over variables to see values, print any object in Debug Console.
1) Automatic input-output redirection to text files.
1) Included script to reset all code files.
1) Easy setup.

![Setup Image](https://user-images.githubusercontent.com/37595244/96286373-2ef39500-0fd8-11eb-883e-363dea77a942.png)

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
    ```
    * Check Installation
    ```bash
    g++ --version
    ```

You are good to go!

## Installation
1) Download this repository and extract folder `CP-VSCODE-SETUP`.
1) Open VSCode. Click on `File->Open Folder->CP-VSCODE-SETUP`
1) Open a Terminal by clicking on `Terminal->New Terminal` or press `Ctrl+Shift+` `
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
