/**********seekfor mpegdec v20.15.12.10*********************************************
	seekfor mpegdec v20.15.12.10����ѵ�MPEG�������,����������ʹ�úͿ���������!
	��ʹ�úͿ���ʱ��ע�Ᵽ��ԭ���İ�Ȩ��Ϣ.
	�������ʲô��������,�������ϵ!
	QQ:82054357
	QQȺ:24613876
	MSN:sfrad32@hotmail.com
	Mail:Seek_for@163.com
***********************************************************************************/
#ifndef __M1VDMX_H__
#define __M1VDMX_H__

#ifdef __cplusplus
extern "C"
{
#endif

	void* m1vdmx_create(int max_es_size);
	int m1vdmx_probe(char* buf,int size);
	int m1vdmx_process(void* dmx,char* buf,int size);
	int m1vdmx_getframe(void* dmx,int vid,char* buf,double* dts,double* pts);
	void m1vdmx_destroy(void* dmx);


#ifdef __cplusplus
}
#endif











#endif
