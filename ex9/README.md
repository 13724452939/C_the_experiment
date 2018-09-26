对编程的具体说明如下：
1) 定义一个 student 结构体如下：
struct student {
char name[20]; //姓名
float score[4]; //四门功课的成绩
float average; //四门功课的平均成绩
};
其中，name 中存放同学的姓名；score[4]数组中存放同学的英语、数学、物理、化学成绩；average中存放上述四门功课的平均成绩。
2) 编写下面六个函数。其中 6 个函数中的后 2 个函数是文件操作函数。
函数的具体要求：
void inputFromKeyboard(struct student stu[], int num)
从键盘输入学生信息的函数。stu 为结构体数组，num 为数组中元素的个数。
void outputToScreen(struct student stu[], int num)
将学生信息输出到屏幕的函数。stu 为结构体数组，num 为数组中元素的个数。
void averageScore(struct student stu[], int num)
计算学生平均成绩的函数。stu 为结构体数组，num 为数组中元素的个数。
void sortByAverageScore(struct student stu[], int num)
根据学生的平均成绩对学生信息整体排序的函数。stu 为结构体数组，num 为数组中元素的个数。
void inputFromFile(struct student stu[], int num, FILE *fp)
从文件输入学生信息的函数。stu 为结构体数组，num 为数组中元素的个数，fp 为以“读”方式打开的文本文件的指针。
void outputToFile(struct student stu[], int num, FILE *fp)
将学生信息输出到文件的函数。stu 为结构体数组，num 为数组中元素的个数，fp 为以“写”方式打开的文本文件的指针。
3) 编写主函数对你所编写的上述六个函数进行调用验证。主函数可分下面几个阶段编写：
 第 1  个阶段 ( 可参考在第 11  章的实验作业) ：
定义 3 个学生的结构体数组，编写函数 inputFromKeyboard、outputToScreen 和 averageScore。
调用函数 inputFromKeyboard 由键盘输入学生的信息( 姓名、英语、数学、物理、化学成绩 )，调用函数 outputToScreen 将输入的信息显示到屏幕上；
上述两个函数调试正确后，编写函数 averageScore 并调用，计算每个同学的平均成绩，然后调用函数 outputToScreen，将计算后的数据信息显示到屏幕上
 第 2  个阶段：
编写函数 outputToFile。
调用函数 inputFromKeyboard 由键盘输入 3 个学生的信息( 姓名、英语、数学、物理、化学成绩 )，并以文本“写”方式打开文本 student1.txt 文件，调用函数 outputToFile，将这 3 个同学的信息存入 student1.txt 文本文件，关闭该文件； 使用 windows XP  的“记事本”文本编辑器打
开文本文件 student1.txt 查看是否正确。
其中，在程序运行后文本文件 student1.txt 中可能的内容及格式为：
刘翔 88.0 76.0 78.0 70.0 -107374176.0
姚明 98.0 67.0 79.0 65.0 -107374176.0
李娜 89.0 79.0 85.0 79.0 -107374176.0
 第 3  个阶段：
编写函数 inputFromFile。
将上面两个阶段中调用函数 inputFromKeyboard 的语句变成注释行。
以文本“读”方式打开文本 student1.txt 文件，调用函数 inputFromFile，将这 3 个同学的信息读入并存放到学生信息结构体数组中，关闭该文件；
调用函数 averageScore 计算每个同学的平均成绩，并将平均成绩存储在结构数组的相应位置处。
调用函数 outputToScreen 将学生的完整的信息显示到屏幕上；
以文本“写”方式打开文本 student2.txt 文件，调用函数 outputToFile，将这 3 个同学的计算有平均成绩的所有信息存入 student2.txt 文本文件，关闭该文件；
在这段程序运行后文本文件 student2.txt 中可能的内容及格式为：
刘翔 88.0 76.0 78.0 70.0 78.0
姚明 98.0 67.0 79.0 65.0 77.3
李娜 89.0 79.0 85.0 79.0 83.0
第 4  个阶段，完整调试 6  个函数：
编写函数 sortByAverageScore。
在第 3 阶段编写的程序段后面添加下面的语句：
调用函数 sortByAverageScore 根据学生的平均成绩对学生信息整体排序。
调用函数 outputToScreen 将学生的完整的信息显示到屏幕上；
以文本“写”方式打开文本 student3.txt 文件，调用函数 outputToFile，将排序后的这 3 个同学的所有信息存入 student3.txt 文本文件，关闭该文件；
在程序运行后文本文件 student3.txt 中可能的内容及格式为：
李娜 89.0 79.0 85.0 79.0 83.0
刘翔 88.0 76.0 78.0 70.0 78.0
姚明 98.0 67.0 79.0 65.0 77.3
结束主程序。
