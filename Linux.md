###  文件和目录操作

+ `ls`：列出目录内容
+ ![批注 2023-12-15 222441](批注 2023-12-15 222441.png)
+ `cd`：切换目录
+ `pwd`: 显示当前工作目录

- mkdir: 创建目录
- cp: 复制文件或目录
- mv: 移动文件或目录，也可用于文件重命名
- rm: 删除文件或目录
- touch: 创建空文件或更新文件时间戳

### 文件查看和编辑

- cat: 查看文件内容

- `more`或 *`less*`: 分页查看文件内容

- ```
  nano
  ```

   或 

  ```
  vim
  ```

   或 

  ```
  emacs
  ```

  : 文本编辑器

  - 示例：`nano filename`

1. **权限管理:**

   - ```
     chmod
     ```

     : 修改文件权限

     - 示例：`chmod 755 filename`（赋予所有者读、写、执行权限，其他用户读和执行权限）

   - ```
     chown
     ```

     : 修改文件所有者

     - 示例：`chown user:group filename`

   - ```
     chgrp
     ```

     : 修改文件所属组

     - 示例：`chgrp groupname filename`

2. **系统信息:**

   - ```
     uname
     ```

     : 显示系统信息

     - 示例：`uname -a`

   - ```
     df
     ```

     : 显示磁盘空间使用情况

     - 示例：`df -h`

   - ```
     du
     ```

     : 显示目录空间使用情况

     - 示例：`du -h`

3. **进程管理:**

   - ```
     ps
     ```

     : 显示当前运行的进程

     - 示例：`ps aux`

   - `top`: 实时显示系统资源使用情况

   - ```
     kill
     ```

     : 终止进程

     - 示例：`kill process_id`

   - ```
     pkill
     ```

     : 根据名称终止进程

     - 示例：`pkill process_name`

4. **网络操作:**

   - ```
     ping
     ```

     : 测试网络连接

     - 示例：`ping example.com`

   - `ifconfig` 或 `ip`: 显示和配置网络接口信息

   - ```
     wget
     ```

      或 

     ```
     curl
     ```

     : 下载文件

     - 示例：`wget URL`、`curl -O URL`

   - ```
     scp
     ```

     : 安全拷贝文件

     - 示例：`scp user@remote:/path/to/file local_path`

5. **压缩和解压缩:**

   - ```
     tar
     ```

     : 打包和解包文件

     - 示例：`tar -cvf archive.tar file1 file2`、`tar -xvf archive.tar`

   - ```
     gzip
     ```

      或 

     ```
     gunzip
     ```

     : 压缩和解压缩文件

     - 示例：`gzip filename`、`gunzip filename.gz`

   - ```
     zip
     ```

      或 

     ```
     unzip
     ```

     : 压缩和解压缩文件

     - 示例：`zip archive.zip file1 file2`、`unzip archive.zip`

6. **搜索:**

   - ```
     grep
     ```

     : 在文件中搜索模式

     - 示例：`grep pattern filename`

   - ```
     find
     ```

     : 在文件系统中查找文件

     - 示例：`find /path/to/search -name filename`

   - ```
     locate
     ```

     : 基于数据库的文件查找

     - 示例：`locate filename`

7. **用户管理:**

   - ```
     useradd
     ```

     : 添加用户

     - 示例：`useradd username`

   - ```
     passwd
     ```

     : 修改用户密码

     - 示例：`passwd username`

   - ```
     userdel
     ```

     : 删除用户

     - 示例：`userdel username`

   - ```
     su
     ```

     : 切换用户

     - 示例：`su username`

8. **包管理系统:**

   - ```
     apt
     ```

      或 

     ```
     apt-get
     ```

      (Debian/Ubuntu)

     - 示例：`sudo apt-get update`、`sudo apt-get install package`

   - ```
     yum
     ```

      (Red Hat/CentOS)

     - 示例：`sudo yum update`、`sudo yum install package`

   - ```
     dnf
     ```

      (Fedora)

     - 示例：`sudo dnf update`、`sudo dnf install package`