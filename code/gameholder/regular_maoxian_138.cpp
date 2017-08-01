#include "gameholder_pch.h"
#include "regular_maoxian_138.h"
#include "scene.h"
#include "checkpoint.h"
#include "event_define.h"
#include "point_monster.h"
#include "point_touch.h"
#include "point_treasure.h"
#include "point_barrel.h"
#include "point_trigger.h"
#include "monster.h"
#include "spawn.h"
#include "point_barrel.h"
#include "rog_regular_event_monster_dead.h"
#include "rog_regular_event_player_dead.h"
#include "rog_regular_event_timer.h"
#include "rog_regular_event_combo_kill.h"

RegularMaoXian_138::RegularMaoXian_138(RegularDoc* pDoc) :
RegularMaoXianBase(pDoc)
{

}

RegularMaoXian_138::~RegularMaoXian_138()
{

}

void RegularMaoXian_138::FirstUpdate()
{
	RegularMaoXianBase::FirstUpdate();

	PointMonster* pPointMonster  = NULL;
	PointTreasure* pPointTreasure = NULL;
	PointBarrel* pPointBarrel = NULL;
	PointTouch* pPointTouch = NULL;
	PointTrigger* pPointTrigger = NULL;

	/////////////////////////////////////////////////////////////////////////////////
	// �ؿ�����
	SetMapLevel(38);

	SetLifeCount(0); // ��������

	// ʤ������
	ROGRegularEvent_MonsterDead* pEventMonsterDead = CnNew ROGRegularEvent_MonsterDead(this);
	pEventMonsterDead->SetMonster(3024, 1);
	AddSucceedEvent(pEventMonsterDead); // ɱ����

	// ʧ������
	ROGRegularEvent_PlayerDead* pEventPlayerDead = CnNew ROGRegularEvent_PlayerDead(this);
	AddFailedEvent(pEventPlayerDead); // �������

	ROGRegularEvent_Timer* pEventFailed_Timer = CnNew ROGRegularEvent_Timer(this);
	pEventFailed_Timer->SetTime(1000*300);            // n����ʱ
	AddFailedEvent(pEventFailed_Timer);

	// ��������
	ROGRegularEvent_Timer* pEventScore_Timer = CnNew ROGRegularEvent_Timer(this, true);
	pEventScore_Timer->SetTime(1000*200);            // n��ͨ�ػ��һ��
	AddScoreEvent(pEventScore_Timer);

	ROGRegularEvent_ComboKill* pEventScore_ComboKill = CnNew ROGRegularEvent_ComboKill(this);
	pEventScore_ComboKill->SetComboKill(5);         // n��ɱ
	AddScoreEvent(pEventScore_ComboKill);
	////////////////////////////////////////////////////////////////////////////

	// ��11
	pPointMonster = CnNew PointMonster(this, 11);
	pPointMonster->SetRadius(300);
	pPointMonster->SetMonster(3001, 3);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��11
	pPointMonster = CnNew PointMonster(this, 11);
	pPointMonster->SetRadius(300);
	pPointMonster->SetMonster(3003, 2);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)





	// ��12
	pPointMonster = CnNew PointMonster(this, 12);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3001, 1);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��13
	pPointMonster = CnNew PointMonster(this, 13);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3001, 1);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)





	// ��14
	pPointMonster = CnNew PointMonster(this, 14);
	pPointMonster->SetRadius(300);
	pPointMonster->SetMonster(3001, 3);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��14
	pPointMonster = CnNew PointMonster(this, 14);
	pPointMonster->SetRadius(300);
	pPointMonster->SetMonster(3003, 2);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////



	// ��15
	pPointMonster = CnNew PointMonster(this, 15);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3015, 2);           // ��ʲô��(��id, ����)
	//pPointMonster->SetLoop(true);
	pPointMonster->SetMax(1);
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(1000);          // ���ּ��300ms
	pPointMonster->SetTriggerID(12);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��16
	pPointMonster = CnNew PointMonster(this, 16);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3015, 2);           // ��ʲô��(��id, ����)
	//pPointMonster->SetLoop(true);
	pPointMonster->SetMax(1);
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(1000);            // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(1000);          // ���ּ��300ms
	pPointMonster->SetTriggerID(12);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��17
	pPointMonster = CnNew PointMonster(this, 17);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3015, 2);           // ��ʲô��(��id, ����)
	//pPointMonster->SetLoop(true);
	pPointMonster->SetMax(1);
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(2000);            // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(1000);          // ���ּ��300ms
	pPointMonster->SetTriggerID(12);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��18
	pPointMonster = CnNew PointMonster(this, 18);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3015, 2);           // ��ʲô��(��id, ����)
	//pPointMonster->SetLoop(true);
	pPointMonster->SetMax(1);
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(3000);            // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(1000);          // ���ּ��300ms
	pPointMonster->SetTriggerID(12);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)



	///////////////////////////////////////////////////////////////////////////////////////////////////////////////



	// ��19
	pPointMonster = CnNew PointMonster(this, 19);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);           // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(11);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��20
	pPointMonster = CnNew PointMonster(this, 20);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);           // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(11);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��21
	pPointMonster = CnNew PointMonster(this, 21);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);           // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(11);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��22
	pPointMonster = CnNew PointMonster(this, 22);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);           // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(11);              // trigger 15 ����
	//pPointMonster->SetAIGroup(1) 

	////////////////////////////////////////////////////////////////////////////////////////////

	// ��23
	pPointMonster = CnNew PointMonster(this, 23);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3038, 1);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	pPointMonster->SetQuality(QUALITY_GREEN);    // ����Ʒ��  BLUE  GREEN
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	if (Crown::RandomPercent(50))
	{   
		pPointTreasure = CnNew PointTreasure(this, 23);         // ����
		pPointTreasure->SetShowID(4001);
		pPointTreasure->LinkTrigger(pPointMonster);
	}

	//////////////////////////////////////////////////////////////////////////////////////////////

	// ��24
	pPointMonster = CnNew PointMonster(this, 24);
	pPointMonster->SetRadius(200);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��25
	pPointMonster = CnNew PointMonster(this, 25);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001,4);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��26
	pPointMonster = CnNew PointMonster(this, 26);
	pPointMonster->SetRadius(200);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	//pPointMonster->SetDelayTime(200);         // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(16);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��27
	pPointMonster = CnNew PointMonster(this, 27);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 4);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	//pPointMonster->SetDelayTime(200);         // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(16);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��28
	pPointMonster = CnNew PointMonster(this, 28);
	pPointMonster->SetRadius(200);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	pPointMonster->SetDelayTime(2000);          // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(16);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��29
	pPointMonster = CnNew PointMonster(this, 29);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 4);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(2000);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(16);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)


	////////////////////////////////////////////////////////////////////////////////////////////////////////////


	// ��55
	pPointMonster = CnNew PointMonster(this, 55);
	pPointMonster->SetRadius(50);
	pPointMonster->SetMonster(3041, 1);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(19);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��56
	pPointMonster = CnNew PointMonster(this, 56);
	pPointMonster->SetRadius(50);
	pPointMonster->SetMonster(3041, 1);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(19);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��57
	pPointMonster = CnNew PointMonster(this, 57);
	pPointMonster->SetRadius(50);
	pPointMonster->SetMonster(3041, 1);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(19);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��54
	pPointMonster = CnNew PointMonster(this, 54);
	pPointMonster->SetRadius(50);
	pPointMonster->SetMonster(3041, 1);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(19);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)





	////////////////////////////////////////////////////////////////////////////////////////////////////////////


	// ��50
	pPointMonster = CnNew PointMonster(this, 50);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	pPointMonster->SetDelayTime(500);          // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(17);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��50
	pPointMonster = CnNew PointMonster(this, 50);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(17);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��51
	pPointMonster = CnNew PointMonster(this, 51);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	pPointMonster->SetDelayTime(2000);          // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(17);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��51
	pPointMonster = CnNew PointMonster(this, 51);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(2000);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(17);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)


	// ��52
	pPointMonster = CnNew PointMonster(this, 52);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	pPointMonster->SetDelayTime(500);          // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(18);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��52
	pPointMonster = CnNew PointMonster(this, 52);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(500);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(18);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��53
	pPointMonster = CnNew PointMonster(this, 53);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3039, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);  // ����Ʒ��
	pPointMonster->SetDelayTime(2000);          // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(18);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��53
	pPointMonster = CnNew PointMonster(this, 53);
	pPointMonster->SetRadius(400);
	pPointMonster->SetMonster(3001, 2);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	pPointMonster->SetDelayTime(2000);           // ��������ʱ500ms����
	pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(18);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)




	////////////////////////////////////////////////////////////////////////////////////////////////////////////



	// ��30
	pPointMonster = CnNew PointMonster(this, 30);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3031, 1);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����

	// ��31
	pPointMonster = CnNew PointMonster(this, 31);
	pPointMonster->SetRadius(200);
	pPointMonster->SetMonster(3011, 2);           // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��32
	pPointMonster = CnNew PointMonster(this, 32);
	pPointMonster->SetRadius(300);
	pPointMonster->SetMonster(3014, 3);           // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	//pPointMonster->SetTriggerID(15);            // trigger 15 ����

	// ��33
	pPointMonster = CnNew PointMonster(this, 33);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);           // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();             // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(14);              // trigger 15 ����

	// ��34
	pPointMonster = CnNew PointMonster(this, 34);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3012, 1);         // ��ʲô��(��id, ����)
	pPointMonster->SetDefaultMovie();           // ��������
	//pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(14);            // trigger 15 ����
	//pPointMonster->SetAIGroup(1)

	// ��35
	pPointMonster = CnNew PointMonster(this, 35);
	pPointMonster->SetRadius(100);
	pPointMonster->SetMonster(3024, 1);         // ��ʲô��(��id, ����)
	//pPointMonster->SetDefaultMovie();           // ��������
	pPointMonster->SetQuality(QUALITY_BLUE);    // ����Ʒ��
	//pPointMonster->SetDelayTime(200);           // ��������ʱ500ms����
	//pPointMonster->SetSpawnSpeed(500);          // ���ּ��300ms
	pPointMonster->SetTriggerID(13);            // trigger 13 ����
	//pPointMonster->SetAIGroup(1)

	// ������
	pPointTreasure = CnNew PointTreasure(this,36);
	pPointTreasure->SetShowID(4001);
	pPointTreasure->LinkTrigger(pPointMonster);

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// ��37
	pPointBarrel = CnNew PointBarrel(this, 37);     // ľͰ
	pPointBarrel->SetRadius(50);
	pPointBarrel->SetNumber(1);                     // ����1

	// ��38
	pPointBarrel = CnNew PointBarrel(this, 38);     // ľͰ
	pPointBarrel->SetRadius(50);
	pPointBarrel->SetNumber(1);                     // ����1

	// ��39
	pPointBarrel = CnNew PointBarrel(this, 39);     // ľͰ
	pPointBarrel->SetRadius(50);
	pPointBarrel->SetNumber(1);                     // ����1

	// ��40
	pPointBarrel = CnNew PointBarrel(this, 40);     // ľͰ
	pPointBarrel->SetRadius(50);
	pPointBarrel->SetNumber(1);                     // ����1

	// ��41
	pPointBarrel = CnNew PointBarrel(this, 41);     // ľͰ
	pPointBarrel->SetRadius(50);
	pPointBarrel->SetNumber(1);                     // ����1



}
