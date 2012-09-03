[目录说明]
button		-button 应用程序示例
label		-label 应用程序 Demo
picture		-相册应用程序
iconlist	-图标列表应用程序
filelist	-文件列表应用程序
programs	-生成的目标应用程序 
realtouch	-realtouch 配置
rt-thread	-RT-Thread 头文件

[配置说明]
安装 arm-none-eabi-gcc 工具链和 scons 构建环境，具体请见 RT-Thread wiki 文档
修改 rtconfig.py 中的工具链路径配置
将 EXEC_PATH = 'C:/Program Files/CodeSourcery/Sourcery G++ Lite/bin' 修改为您自己的安装路径

[编译和使用说明]
在命令行下进入 progrmas 目录，然后运行 scons --app=button
即编译 button 应用程序，最后在 programs/button 目录下会生成 button.mo 的应用模块，配上事先准备好的 button.bmp 和 button。xml 构成一个完成的 button 应用程序，将 button 文件夹拷贝到 RealTouch 的文件系统 /programs 目录下即可。
运行 RealTouch 住程序后会扫描 /programs/ 目录下的所有应用程序，将它们的图标加载到主界面，点击图标即可运行程序。