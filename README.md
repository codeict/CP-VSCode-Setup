# CP-VSCode-Setup
A Competitive Programming setup for C++ users in Windows and Ubuntu.

__*Supports VSCode Debugging Features__.

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

## Usage
1) You should write your code in the `Current` Folder.
1) Press `F5` to run any `.cpp` file. The file will automatically take input from `input.txt` and write output to `output.txt`

Happy Coding!
