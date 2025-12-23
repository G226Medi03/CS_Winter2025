@echo off
set /p msg=Commit message:

git add "*.cpp"
git add "autogit.bat"



git commit -m "%msg%"
git push origin main
pause