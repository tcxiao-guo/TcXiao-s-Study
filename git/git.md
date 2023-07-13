# Git

Git是一个开源的**分布式版本控制系统**，用于敏捷高效地处理任何或大或小的项目。

1. 下载安装完成后配置Git配置

2. 查看配置信息

   ```cmd
   git config --list
   ```

3. 配置个人用户信息

   ``` cmd
   git config -- global user.name " "
   git config -- global user.email 
   ```

4. Git工作流程

   <img src="https://www.runoob.com/wp-content/uploads/2015/02/1352126739_7909.jpg">

5. Git命令

   <img src="https://www.runoob.com/wp-content/uploads/2015/02/git-command.jpg">

   ```cmd
   git init  //初始化git项目
   git add . //提交到暂存区
   git commit -m "描述信息" //提交到本地仓库
   git push  //提交到远程仓库
   git pull //下载远程代码并合并
   git clone //拷贝Git项目
   
   git branch () //创建分支
   git checkout () //切换分支
   git merge /合并分支
   
   git status // 查看文件状态
   ```
   
   