/*
 Git configration-
(1) git config --global user.name "my name"
(2) git config --global user.email "mu email"
(3) git config --list. 

different staus of files -
(1) Untracked (U) = new file that git isn't tracking
(2) Modified (M) = something is changed in the file which isn't updated in Git
(3) Staged (A) = file is ready to be commited
(4) Unmodified () = unchanged.

commonly used commands-
(1) cd [folder name] --> it gets you inside a folder.
                     you can press TAB to autocomplete the folder name  (cd = change directory)
(2) cd ..   --> it gets you out of the folder.
(3) code [file name or file address]     --> it helps open a file. 
(4) git clone [link of repo]  --> it copies repository from github into your desktop
(5) git status    --> it shows the status of the diffrent files
(6) ls   --> it shows all the  files in the folder
(7) ls -a   --> it shows all the files, even the hidden ones in a folder
(8) git add [file name]  --> it adds a new or changed files in git staging area, ready to be commited
    commonly used is git pusg origin main.
(9) git commit -m "some descripion about the change"  --> it commits the file. you can also say it saves the new or changed file in git
                                                         (a file must be added first using git add before it gets saved by using git commit)
(10) fir add .  --> it adds all the files
(11) git push [repo name] [branch name]  --> it is used to upload the saved files in git to the github.
(12) git init  --> used to create new .git file inside the folder
(13) git remote origin [link]  --> it links repo where you wish to push
(14) git remote -v   --> to verify remote
(15) git branch   --> to check branch
(16) git branch -M [branch name]  --> to rename branch
(17) rm [file name]  -->to delete a file
(18) rm -r [folder name]  --> to delete a folder
(19) rm -rf .git  --> to delete .git file from the folder
(20) mkdir  --> make new folder or directory
(21) mv .git .git_backup  --> it will deactivate .git file
(22) mv .git_backup .git   --> it will reactivate .git file
(23) mv [file old name] [file new name]  --> it is used change name of the file
(24) git ls-tree --name-only [branch name] [diresctory name]  --> it is used to see the list of folders or file in remote directory
(25) git push -u origin main --> use it so that you only need to write git push to push folder to remote repo 
*/