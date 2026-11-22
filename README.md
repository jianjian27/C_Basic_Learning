# 面向 DSP 和 FPGA 的 C 语言学习

从 C 基础开始，逐步学习内存、位运算和信号处理。当前使用 Windows、VS Code、MinGW GCC 和 GDB，每个基础练习独立编译运行。

## 目录用途

```text
C_Basic_Learning/
├── .vscode/                    编译、调试和代码补全配置
├── exercises/
│   └── 01_basics/
│       └── 01_variables.c       变量与整数加法练习
├── notes/                      学习笔记和错题记录
├── projects/                   后续的多文件小项目
├── build/                      自动生成的程序，不提交 Git
├── main.c                      保留原有程序，可作为临时试验区
├── CMakeLists.txt              原有 CMake 工程，目前只构建 main.c
└── C_Basic_Learning.code-workspace
```

build 目录首次编译时自动创建。以后按主题添加 02_control_flow、03_functions、04_arrays_pointers、05_bits_memory、06_dsp_basics 等目录。

## 打开工程

通过“文件 → 从文件打开工作区”打开本目录的 C_Basic_Learning.code-workspace；也可以直接“打开文件夹”选择 C_Basic_Learning。只打开外层 C_Project 时，这里的 .vscode 配置不会作为根目录配置加载。

需要 Microsoft 的 C/C++ 扩展（ms-vscode.cpptools）。当前 GCC 为 D:/mingw64/bin/gcc.exe，GDB 为 D:/msys64/ucrt64/bin/gdb.exe，这组搭配已验证可以编译和断点调试。D:/mingw64/bin 中的 GDB 启动时缺少 Python 模块，因此使用 MSYS2 中可用的版本。换电脑时需检查 tasks.json、launch.json、settings.json 中的工具路径。

## 编译运行与调试

1. 打开 exercises/01_basics/01_variables.c，保持它为当前编辑文件，按 Ctrl+S 保存。
2. Ctrl+Shift+B：只编译当前文件，在“问题”面板查看错误和警告。
3. F5：编译并调试，若出现选择框，选择 C: Debug active file。
4. Ctrl+F5：编译后直接运行，不停在断点。
5. 点击代码行号左侧设置断点。F10 单步跳过，F11 进入函数，F5 继续，Shift+F5 停止。在“变量”面板观察数值。

程序输出在集成终端，需要 scanf 输入时也在终端输入。不要在笔记、头文件或配置文件为活动编辑文件时执行编译。

初学阶段统一使用上述快捷键；Code Runner 和 C/C++ Runner 的按钮可能使用各自独立的配置。

配置采用 VS Code 的 [GCC 与 GDB 编译调试方式](https://code.visualstudio.com/docs/cpp/config-mingw)，并为 C 使用 gcc 和 C11 标准。GCC 把源代码编译为可执行程序；GDB 负责断点、单步和变量观察。

## 增加练习

在主题目录中新建 .c 文件，例如 02_types.c，写一个 int main(void)，保存后即可用上述快捷键运行，无需修改配置。文件名使用英文、数字和下划线，并保持不同目录中的文件名也唯一，因为输出按文件名放在 build 中。

当前任务只编译活动的一个 .c 文件。各练习都有自己的 main，不能把所有练习链接成一个程序。以后学习多个 .c 和 .h 协作时，在 projects 中为每个项目配置独立的 CMake 目标。

每次练习可在 notes 中记录概念、自己的预测、实际输出和错误原因。完成一个小主题后，通过左侧“源代码管理”查看差异，再提交代码和笔记。

共享的 .vscode 配置纳入 Git。生成程序、build 和 IDE 缓存由 .gitignore 忽略；资源管理器隐藏已有的可执行文件和 CLion 缓存，原文件保留在磁盘上。

