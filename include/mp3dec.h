/**********seekfor mpegdec v20.15.12.10*********************************************
	seekfor mpegdec v20.15.12.10����ѵ�MPEG�������,����������ʹ�úͿ���������!
	��ʹ�úͿ���ʱ��ע�Ᵽ��ԭ���İ�Ȩ��Ϣ.
	�������ʲô��������,�������ϵ!
	QQ:82054357
	QQȺ:24613876
	MSN:sfrad32@hotmail.com
	Mail:Seek_for@163.com
***********************************************************************************/
#ifndef __MP3DEC_H__
#define __MP3DEC_H__


#ifdef __cplusplus
extern "C"
{
#endif

	void* mp3dec_create();
	int mp3dec_process(void* dec,char* buf,int size,short int* pcm,int* pcm_size);
	void mp3dec_destroy(void* dec);

#ifdef __cplusplus
}
#endif



#endif
