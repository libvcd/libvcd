/**********seekfor mpegdec v20.15.12.10*********************************************
	seekfor mpegdec v20.15.12.10����ѵ�MPEG�������,����������ʹ�úͿ���������!
	��ʹ�úͿ���ʱ��ע�Ᵽ��ԭ���İ�Ȩ��Ϣ.
	�������ʲô��������,�������ϵ!
	QQ:82054357
	QQȺ:24613876
	MSN:sfrad32@hotmail.com
	Mail:Seek_for@163.com
***********************************************************************************/
#ifndef __STD_H__
#define __STD_H__

#ifdef __cplusplus
extern "C"
{
#endif

	void* std_create();
	
	int std_load(void* std,char* filename);

	int std_get_video_frame(void* std,int type,img_frame_t** img);

	int std_get_audio_frame(void* std,int type,short int* pcm,int* sr);

	int std_destroy(void* std);



#ifdef __cplusplus
}
#endif




#endif
