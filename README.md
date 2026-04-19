# FlyBird SE Project

`FlyBird SE Project` 当前是一个用于分发的 Windows 桌面版游戏发布包仓库，仓库内主要包含可直接运行的程序文件、Qt 运行依赖以及一份用户使用手册。
>同时也是华中科技大学软件工程开发课程的结课作业

## 项目说明

目前这个仓库保存的不是源码，而是已经打包完成的运行版本。也就是说，下载后只要保持目录结构完整，就可以在 Windows 环境下直接启动游戏。

仓库当前主要包含以下内容：

- `flyBird.exe`：游戏主程序
- `Qt6Core.dll`、`Qt6Gui.dll`、`Qt6Widgets.dll`、`Qt6Network.dll`、`Qt6Svg.dll`：Qt 6 运行库
- `platforms/`：Qt 平台插件，程序启动时必需
- `imageformats/`：图片格式插件，用于支持 `jpg`、`webp`、`tiff`、`ico`、`gif` 等格式
- `tls/`：Qt 网络相关的 TLS 插件
- `styles/`：Qt 界面样式插件
- `translations/`：Qt 多语言翻译文件
- `桌面FlyBird游戏用户使用手册.pdf`：游戏用户手册

## 仓库内容概览

当前发布包总大小约为 `62 MB`，已经包含运行程序所需的主要依赖，因此可以作为一个完整的 Windows 独立运行目录使用，无需额外安装 Qt。

重要文件：

- [flyBird.exe](./flyBird.exe)
- [桌面FlyBird游戏用户使用手册.pdf](./桌面FlyBird游戏用户使用手册.pdf)

## 运行方式

1. 下载或克隆本仓库到本地 Windows 电脑。
2. 保持当前文件和文件夹结构不变。
3. 双击 `flyBird.exe` 启动游戏。

运行时请注意：

- 不要随意删除仓库中的 `.dll` 文件。
- 不要删除 `platforms/`、`imageformats/`、`tls/` 等插件目录，否则程序可能无法启动。
- 如果系统弹出 Windows SmartScreen 或杀毒软件提示，请先确认文件来源后再决定是否放行。

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
`-- 桌面FlyBird游戏用户使用手册.pdf
```

## 技术信息

- 程序类型：Windows 桌面应用
- 界面与运行框架：Qt 6
- 网络能力：通过 `Qt6Network.dll` 提供支持
- 图形相关依赖：包含 `D3Dcompiler_47.dll` 与 `opengl32sw.dll`
- 多语言支持：仓库内包含 `31` 个翻译文件

## 当前限制

- 当前仓库是发布包仓库，不是源码仓库。
- 仓库中暂未包含源码目录、工程文件或构建脚本。
- `flyBird.exe` 内部版本信息较少，后续版本建议通过 Git 提交记录或 GitHub Releases 管理。

