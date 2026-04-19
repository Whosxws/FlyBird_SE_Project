# FlyBird SE Project

`FlyBird SE Project` is a Windows desktop release package for the FlyBird game. The repository currently stores the runnable build, the runtime dependencies required to launch it, and a user manual in PDF format.

## Repository Overview

This repository is not a source-code repository at the moment. It mainly contains:

- `flyBird.exe`: the main game executable
- `Qt6Core.dll`, `Qt6Gui.dll`, `Qt6Widgets.dll`, `Qt6Network.dll`, `Qt6Svg.dll`: core Qt 6 runtime libraries
- `platforms/`: Qt platform plugin used to start the application on Windows
- `imageformats/`: image format plugins for loading common assets such as JPEG, WebP, TIFF, ICO, and GIF
- `tls/`: TLS backend plugins used by Qt networking features
- `styles/`: Qt style plugin
- `translations/`: 31 Qt translation files for multilingual runtime support
- `桌面FlyBird游戏用户使用手册.pdf`: user manual for the desktop game

## Included Files

The current package is approximately `62 MB` in total and includes a complete set of runtime files, so it can be distributed as a standalone Windows folder without requiring a separate Qt installation.

Key files:

- [flyBird.exe](./flyBird.exe)
- [User Manual PDF](./桌面FlyBird游戏用户使用手册.pdf)

## How to Run

1. Download or clone this repository to a Windows machine.
2. Keep all files and folders in the same directory structure.
3. Double-click `flyBird.exe` to start the game.

Notes:

- Do not remove the `.dll` files or the plugin folders such as `platforms/` and `imageformats/`, otherwise the program may fail to start.
- This package is prepared for Windows desktop usage.
- If Windows SmartScreen or antivirus prompts appear, review the file source before allowing execution.

## Directory Structure

```text
FlyBird_SE_Project/
|-- flyBird.exe
|-- Qt6Core.dll
|-- Qt6Gui.dll
|-- Qt6Widgets.dll
|-- Qt6Network.dll
|-- Qt6Svg.dll
|-- D3Dcompiler_47.dll
|-- opengl32sw.dll
|-- libgcc_s_seh-1.dll
|-- libstdc++-6.dll
|-- libwinpthread-1.dll
|-- generic/
|-- iconengines/
|-- imageformats/
|-- networkinformation/
|-- platforms/
|-- styles/
|-- tls/
|-- translations/
`-- 桌面FlyBird游戏用户使用手册.pdf
```

## Technical Notes

- Application type: Windows desktop executable
- UI/runtime framework: Qt 6
- Networking support: included through `Qt6Network.dll`
- Graphics/runtime support: includes Direct3D compiler and software OpenGL fallback libraries
- Internationalization: 31 translation files are bundled

## Current Limitations

- The repository currently contains the built release package rather than the original source code.
- No build scripts, project files, or source directories are included in this version.
- Version metadata inside `flyBird.exe` is minimal, so release history should be tracked through Git commits or GitHub Releases.

## Suggested Next Steps

If this project will continue to evolve, a cleaner long-term structure would be:

- keep source code in the main repository
- move packaged binaries to GitHub Releases
- add screenshots, gameplay description, and controls to this README
- add a changelog for future versions

## License

No license file is currently included in this repository. If you plan to share or collaborate publicly, it is recommended to add an explicit license.
