# ForgottenHope
这是win下visual studio项目CTPtest-master(地址http://blog.csdn.net/u012234115/article/details/70195889) 的Linux实现;无GUI的量化交易平台;

![Alt text](http://img.blog.csdn.net/20170428234031703)

安装：

$ git clone https://github.com/Luomin1993/ForgottenHope.git

$ cd ForgottenHope

$ g++  -std=c++11  -L. -lthostmduserapi -lthosttraderapi -c TickToKlineHelper.cpp

$ cd St_DawnPeep

$ make

$ chmod 777 exe

$ ./exe
