# FlyBird SE Project

`FlyBird SE Project` 是一个桌面版 FlyBird 游戏项目仓库。

> 同时也是华中科技大学软件工程开发课程的结课作业

当前仓库同时保存了两部分内容：

- 根目录中的 Windows 发布包，可直接运行
- `source/FlyBird_SE_Project/` 下的 Qt 源码目录，可用于查看和继续开发

## 仓库内容

当前仓库主要包含以下内容：

- `flyBird.exe`：游戏主程序
- `Qt6Core.dll`、`Qt6Gui.dll`、`Qt6Widgets.dll`、`Qt6Network.dll`、`Qt6Svg.dll`：Qt 6 运行库
- `platforms/`：Qt 平台插件，程序启动必需
- `imageformats/`：图片格式插件
- `tls/`：Qt 网络相关 TLS 插件
- `styles/`：Qt 样式插件
- `translations/`：多语言翻译文件
- `桌面FlyBird游戏用户使用手册.pdf`：用户手册
- `source/FlyBird_SE_Project/`：项目源码、资源文件、工程文件

## 快速开始

如果你只是想运行游戏：

1. 下载或克隆本仓库到本地 Windows 电脑
2. 保持目录结构不变
3. 双击 `flyBird.exe` 启动游戏

运行时请注意：

- 不要删除根目录下的 `.dll` 文件
- 不要删除 `platforms/`、`imageformats/`、`tls/` 等目录
- 如果出现 Windows 安全提示，请先确认文件来源

重要文件：

- [程序可执行文件](./flyBird.exe)
- [用户使用手册](./桌面FlyBird游戏用户使用手册.pdf)
- [源码目录](./source/FlyBird_SE_Project/)

## 目录结构

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
|-- source/
|   `-- FlyBird_SE_Project/
|       |-- main.cpp
|       |-- game.cpp
|       |-- game.h
|       |-- bird.cpp
|       |-- bird.h
|       |-- pipe.cpp
|       |-- pipe.h
|       |-- flyBird.pro
|       |-- qrc.qrc
|       `-- assets/
`-- 桌面FlyBird游戏用户使用手册.pdf
```

## 源码说明

源码位于 [source/FlyBird_SE_Project](./source/FlyBird_SE_Project/)。

当前可以确认的核心文件如下：

- `main.cpp`：程序入口
- `game.cpp` / `game.h`：游戏主逻辑、界面、开始界面、重开逻辑、皮肤选择等
- `bird.cpp` / `bird.h`：小鸟对象相关逻辑
- `pipe.cpp` / `pipe.h`：管道障碍物相关逻辑
- `flyBird.pro`：Qt qmake 工程文件
- `qrc.qrc`：Qt 资源文件列表
- `assets/images/`：游戏图片资源

从工程文件来看，该项目使用：

- Qt Widgets
- qmake
- C++11

## 如何构建源码

推荐使用 Qt Creator 打开源码工程：

1. 打开 `source/FlyBird_SE_Project/flyBird.pro`
2. 选择本机可用的 Qt 6 Kit
3. 编译并运行

如果你使用命令行，也可以基于 `qmake` 和对应的编译工具进行构建，但具体命令会取决于本地 Qt 与编译器环境。

## 当前仓库状态

当前仓库更接近“课程项目归档仓库”，因为它同时保存了发布包和源码。

目前特点如下：

- 可以直接运行游戏
- 可以查看并继续开发源码
- 已包含项目资源文件
