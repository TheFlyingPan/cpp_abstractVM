#### git
##### read branches
* git branch > read current branch
* git ls-remote origin  
* git branch -r  

##### create branch
git branch aurelie  
git checkout aurelie  
git push -u origin aurelie  

##### change branch
git checkout aurelie  

##### pull other branch
git pull origin aurelien  

##### merge branch into master
git commit -m "blabla"  
git checkout master  
git merge Aurelie  

**REM: La branch n'est pas supprimée!**  

##### git pull
git stash  
git pull
__or__  
git reset --hard origin:master  
