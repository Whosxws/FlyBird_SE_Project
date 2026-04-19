# FlyBird SE Project

`FlyBird SE Project` 是一个基于 `Qt 6 Widgets` 开发的桌面版 FlyBird 游戏项目。

> 华中科技大学软件工程开发课程结课作业

这个仓库现在同时保存了两部分内容：

- 根目录：Windows 可直接运行的发布包
- `source/FlyBird_SE_Project/`：项目源码

这意味着别人拿到仓库后，既可以直接运行游戏，也可以打开源码继续开发。

## 这个仓库里有什么

### 1. 可直接运行的发布包

根目录中的这些文件主要用于运行程序：

- `flyBird.exe`：游戏主程序
- `Qt6Core.dll`、`Qt6Gui.dll`、`Qt6Widgets.dll`、`Qt6Network.dll`、`Qt6Svg.dll`：Qt 运行库
- `platforms/`：Qt 平台插件，程序启动必需
- `imageformats/`：图片格式插件
- `styles/`：Qt 样式插件
- `tls/`：Qt 网络相关 TLS 插件
- `translations/`：多语言翻译文件
- `桌面FlyBird游戏用户使用手册.pdf`：用户手册

如果只是想玩游戏，只需要保留这些文件和目录结构不变，然后双击 `flyBird.exe`。

### 2. 可继续开发的源码

源码位于 [source/FlyBird_SE_Project](./source/FlyBird_SE_Project/)。

核心文件如下：

- `main.cpp`：程序入口
- `game.cpp` / `game.h`：游戏主逻辑、开始界面、重开逻辑、皮肤选择等
- `bird.cpp` / `bird.h`：小鸟对象逻辑
- `pipe.cpp` / `pipe.h`：管道障碍物逻辑
- `flyBird.pro`：Qt `qmake` 工程文件
- `qrc.qrc`：Qt 资源清单
- `assets/images/`：图片资源

## 源码是否完整

结论：**目前仓库里的源码主干是完整的，可以继续开发，也可以重新编译。**

我已经做过这些检查：

- 工程文件 `flyBird.pro` 存在
- 源码主文件 `.cpp/.h` 齐全
- `qrc.qrc` 中引用的图片资源都存在
- 资源目录 `assets/images/` 齐全
- 已经用本机 `Qt 6.10.1 + MinGW 13.1.0` 实际编译通过

所以对其他开发者来说，只要本地安装了匹配的 Qt 环境，就可以从源码构建这个项目。

## 如何运行

1. 下载或克隆本仓库
2. 保持根目录结构不变
3. 双击 `flyBird.exe`

注意：

- 不要删除根目录中的 `.dll` 文件
- 不要删除 `platforms/`、`imageformats/`、`tls/` 等目录
- 如果出现 Windows 安全提示，请确认来源后再运行

## 如何从源码构建

推荐使用 `Qt Creator`：

1. 打开 `source/FlyBird_SE_Project/flyBird.pro`
2. 选择 `Qt 6` 对应的 Kit
3. 编译并运行

我本地验证通过的环境是：

- `Qt 6.10.1`
- `MinGW 13.1.0`

如果使用了不匹配的编译器，可能会出现“Qt 头文件报错”之类的问题。比如我测试时，使用系统里旧的 `g++ 8.1.0` 会失败，但切换到 Qt 自带的 `MinGW 13.1.0` 后即可正常编译。

## 为什么源码目录里没有 `.qtcreator`、`.idea`、`build`

这些没有上传是**故意的**，而且这是正常做法：

- `.qtcreator/`：你本机的 Qt Creator 本地配置
- `.idea/`：IDE 本地配置
- `build/`：编译产物，不是源码
- `.git/`：原始目录自己的 Git 元数据，不能嵌套带进主仓库

它们不影响别人查看源码，也不影响别人重新构建项目。

## 仓库结构

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
|-- platforms/
|-- imageformats/
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

## 重要入口

- [直接运行程序](./flyBird.exe)
- [源码目录](./source/FlyBird_SE_Project/)
- [源码说明](./source/FlyBird_SE_Project/README.md)
- [用户手册](./桌面FlyBird游戏用户使用手册.pdf)
