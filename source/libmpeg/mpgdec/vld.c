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

vld_t* vld_get(vld_t* vld,int num,int vlc)
{
	int i;
	unsigned int val = vlc;
	for(i = 0; i < num; i ++,vld ++)
	{
		if((val >> (32 - vld->bit)) == (unsigned int)vld->value)
		{
			return vld;
		}
	}
	return (vld_t*)0;
}







