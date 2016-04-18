/**********seekfor libvcd v20.16.4.5*********************************************
	seekfor libvcd v20.16.4.5����ѵ�MPEG��������,����������ʹ�úͿ���������!
	��ʹ�úͿ���ʱ��ע�Ᵽ��ԭ���İ�Ȩ��Ϣ.
	�������ʲô��������,�������ϵ!
	QQ:82054357
	QQȺ:24613876
	MSN:sfrad32@hotmail.com
	Mail:Seek_for@163.com
***********************************************************************************/
#include <common.h>

void* osCreateSemaphore(char* name,int value)
{
        char buf[256];
        sprintf((char*)buf,"%s-%d",name,GetTickCount());
        return CreateSemaphore(NULL,value,32,buf);
}

int osWaitSemaphore(void* sem)
{
	return WaitForSingleObject(sem,-1);
}

int osPostSemaphore(void* sem)
{
    long dwCount;
    return ReleaseSemaphore(sem,1,&dwCount);
}

void osDestroySemaphore(void* sem)
{
	CloseHandle(sem);
}


void* osMalloc(int size)
{
	if(size & 0xfff)
	{
		size += (0x1000 - (size & 0xfff));
	}
	return malloc(size);
}

void* osRealloc(void* block,int size)
{
	if(size & 0xfff)
	{
		size += (0x1000 - (size & 0xfff));
	}
	return realloc(block,size);
}

void osFree(void* block)
{
	free(block);
}

void* osCreateThread(int prior,int stack,void* args,thread_func func)
{
	DWORD dwID;
	HANDLE ret = CreateThread(NULL,stack,(LPTHREAD_START_ROUTINE)func,args,0,&dwID);
	if(ret == INVALID_HANDLE_VALUE)
	{
		return NULL;
	}
	return ret;
}

int osJoinThread(void* thread)
{
	WaitForSingleObject(thread,-1);
	CloseHandle(thread);
	return 0;
}

int osDestroyThread(void* thread,int wait)
{
	if(wait)
	{
		osJoinThread(thread);
	}
    return 0;
}

