//////////////////////////////////  @版权说明  //////////////////////////////////////////////////
///						Jiedi(China nanjing)Ltd.                                    
/// @版权说明 代码和课程版权有夏曹俊所拥有并已经申请著作权，此代码可用作为学习参考并可在项目中使用，
/// 课程中涉及到的其他开源软件，请遵守其相应的授权
/// 课程源码不可以直接转载到公开的博客，或者其他共享平台，不可以用以制作在线课程。
/// 课程中涉及到的其他开源软件，请遵守其相应的授权  @@              
/////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////  源码说明  //////////////////////////////////////////////////
/// 项目名称      : makefile基础到实战编译大型C/C++项目(linux)
/// Contact       : xiacaojun@qq.com
///  博客   :				http://blog.csdn.net/jiedichina
///	视频课程 : 网易云课堂	http://study.163.com/u/xiacaojun		
///			   腾讯课堂		https://jiedi.ke.qq.com/				
///			   csdn学院		http://edu.csdn.net/lecturer/lecturer_detail?lecturer_id=961	
///           51cto学院		https://edu.51cto.com/sd/d3b6d
///			   老夏课堂		http://cppds.com 
/// 更多资料请在此网页下载  http://ffmpeg.club
/// ！！！请加入课程qq群 【296249312】与同学交流 
/// 微信公众号: jiedi2007
/// 头条号	 : xiacaojun
///加入老夏课堂群【296249312】直接联系群里客服下载课程资料
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// 课程交流qq群296249312 //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////// COMMENT ///////////////////////////////////////////////

/*
g++ -E test_gcc.cpp >test_gcc.ii    #1 预处理
g++ -S test_gcc.ii     				#2 编译
g++ -c test_gcc.s         			#3 汇编
g++ test_gcc.o -o test_gcc  		#4 链接
./test_gcc							#5 运行	
*/
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
	cout<<"test g++"<<endl;
	return 0;
}
