# FlyBird_SE_Project 源码

这是 `FlyBird SE Project` 的源码目录，项目基于 `Qt 6 Widgets` 开发。

## 主要文件

- `main.cpp`：程序入口
- `game.cpp` / `game.h`：游戏主逻辑、开始界面、重开、皮肤选择
- `bird.cpp` / `bird.h`：小鸟对象逻辑
- `pipe.cpp` / `pipe.h`：管道逻辑
- `flyBird.pro`：Qt `qmake` 工程文件
- `qrc.qrc`：Qt 资源配置
- `assets/images/`：图片资源

## 已确认内容

- 工程文件完整
- 核心源码文件完整
- `qrc.qrc` 引用的图片资源完整
- 可以在 `Qt 6.10.1 + MinGW 13.1.0` 环境下编译通过

## 构建方式

推荐直接使用 `Qt Creator` 打开 `flyBird.pro`：

1. 打开 `flyBird.pro`
2. 选择可用的 `Qt 6` Kit
3. 编译并运行

如果使用命令行，请确保编译器版本与 Qt 对应工具链匹配。

## 说明

源码目录中没有包含 `.qtcreator`、`.idea`、`build` 等本地开发目录，这是正常的仓库整理方式，不影响继续开发或重新构建。
