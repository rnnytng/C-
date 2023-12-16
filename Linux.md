###  1. 文件和目录操作

+ `ls`：列出目录内容
+ `cd`：切换目录
+ `pwd`: 显示当前工作目录

- `mkdir`: 创建目录
- `cp`: 复制文件或目录
- `mv`: 移动文件或目录，也可用于文件重命名
- `rm`: 删除文件或目录
- `touch`: 创建空文件或更新文件时间戳

### 2. 文件查看和编辑

- `cat`: 查看文件内容

- `more`或 `less`: 分页查看文件内容

- `vim` : 文本编辑器

### 3. 权限管理

- `chmod`: 修改文件权限

- `chown`: 修改文件所有者

- `chgrp`: 修改文件所属组

### 4. 系统信息

- `uname`: 显示系统信息
  
- `df`: 显示磁盘空间使用情况
  
- `du`: 显示目录空间使用情况
###  5. 进程管理
+ `ps`: 显示当前运行的进程

- `top`: 实时显示系统资源使用情况

- `kill`: 终止进程
  
- `pkill`: 根据名称终止进程

### 6.网络操作

+ `ping` : 测试网络连接

- `ifconfig` 或 `ip`: 显示和配置网络接口信息

- `wget` 或 `curl`: 下载文件

- `scp`: 安全拷贝文件

### 7. 压缩和解压缩

- `tar`: 打包和解包文件
- `gzip`: 压缩和解压缩文件
- `zip`: 压缩和解压缩文件

### 8. 搜索

- `grep`: 在文件中搜索模式
  
- `find`: 在文件系统中查找文件
  
- `locate`: 基于数据库的文件查找

### 9. 用户管理

+ `useradd`: 添加用户

- `passwd`: 修改用户密码

- `userdel`: 删除用户

- `su`: 切换用户

### 10. 包管理系统

- `apt` 或 `apt-get`
  
  - 示例：`sudo apt-get update`、`sudo apt-get install package`

- `yum`
  
   (Red Hat/CentOS)

  - 示例：`sudo yum update`、`sudo yum install package`

- `dnf`
  
   (Fedora)

  - 示例：`sudo dnf update`、`sudo dnf install package`