#pragma once
#include "header.h"
#include "ImageTools.h"
#include "CharacterProfiles.h"

class Character
{
private:
	// �摜��̃C���f�b�N�X�i0�`11�j
	int index;

	// �L�����N�^�[�̌���
	Point direction;

	// �摜
	Texture texture;

	// �L�����N�^�[�̍��W
	Point position = Point(10, 10);

	// ��ɒ����ɃL�����N�^�[��u�����H
	bool alwaysCenter = false;


public:
	// �R���X�g���N�^
	Character();
	Character(Image new_image, const Point init_direction, bool init_always_center);

	// �`��
	void draw();

	// �L�����N�^�[�̈ʒu
	void setPosition(Point set_position);

	// �L�����N�^�[�̓k��
	void walk(Point move_direction);

	// ������A�j���[�V�����𓮂���
	void oneStep();
};

