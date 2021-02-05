# NetSoftPlatFormDev
致力于 用Net开发各种类Cad或者BIM软件的二次开发 通用解决方案

![整体思路](net开发畅享.png "net开发畅享.png")

## 1.Ui的处理方法
     结合cad的两种开发语言来说，比较好的解决方案是使用C++中的MFC作为壳子，然后具体实现使用WinForm或WPF，处理Cad特殊接口，比如：BeginEdit、EndEdit等，当然用C#也可以实体。
## 2.实体的处理
    使用using 语法来模拟Arx开发中的智能指针，用于解决实体的打开和释放。
