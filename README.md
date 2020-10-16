# CP-VSCode-Setup
A Competitive Programming setup for C++ users in Windows and Ubuntu.

[Setup Image](https://user-images.githubusercontent.com/37595244/96286373-2ef39500-0fd8-11eb-883e-363dea77a942.png)

## **Prerequisites**

### Windows
1) Follow Steps 1-4 from [Official VS Code Windows Prerequisites](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)
2) [Check your MinGW installation](https://code.visualstudio.com/docs/cpp/config-mingw#_check-your-mingw-installation)

You are good to go!

### Ubuntu
1) Follow Steps 1-2 from [Official VS Code Linux Prerequisites](https://code.visualstudio.com/docs/cpp/config-linux#_prerequisites)
2) Make sure g++ is installed
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
2) Open VS Code. Click on `File->Open Folder->CP-VSCODE-SETUP`
3) Open a Terminal by clicking on `Terminal->New Terminal` or press `Ctrl+Shift+` `
4) You can always create a `Current` Folder from terminal by
    * Windows
    ```bash
    .\windows-reset.bat
    ```
    * Ubuntu
        * Make the script executable
        ```bash
        chmod +x ubuntu-reset.sh
        ```
        * Execute the script
        ```bash
        ./ubuntu-reset.sh
        ```
    Note: To reset the `Current` Folder at any time, you may run this command again.

## Usage
1) You should write your code in the `Current` Folder.
2) Press `F5` to run any `.cpp` file. The file will automatically take input from `input.txt` and write output to `output.txt`

Happy Coding!
