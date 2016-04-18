/**********seekfor mpegdec v20.15.12.10*********************************************
	seekfor mpegdec v20.15.12.10����ѵ�MPEG�������,����������ʹ�úͿ���������!
	��ʹ�úͿ���ʱ��ע�Ᵽ��ԭ���İ�Ȩ��Ϣ.
	�������ʲô��������,�������ϵ!
	QQ:82054357
	QQȺ:24613876
	MSN:sfrad32@hotmail.com
	Mail:Seek_for@163.com
***********************************************************************************/
#ifndef __OS_H__
#define __OS_H__

typedef void* (*thread_func)(void* args);

#ifdef __cplusplus
extern "C"
{
#endif

	void* osCreateSemaphore(char* name,int value);
	int osWaitSemaphore(void* sem);
	int osPostSemaphore(void* sem);
	void osDestroySemaphore(void* sem);

	void* osMalloc(int size);
	void* osRealloc(void* block,int size);
	void osFree(void* block);

	void* osCreateThread(int prior,int stack,void* args,thread_func func);
	int osJoinThread(void* thread);
	int osDestroyThread(void* thread,int wait);



#ifdef __cplusplus
}
#endif



#endif
