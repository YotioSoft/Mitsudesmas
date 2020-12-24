#pragma once
#include "header.h"
#include "Character.h"
#include "MapObject.h"

namespace LoadFiles
{
	// �摜�̓ǂݍ���
	std::map<String, Texture> InitTextures();

	// �L�����N�^�[�̓ǂݍ���
	std::map<String, Character> InitCharacters();

	// �}�b�v�I�u�W�F�N�g�̓ǂݍ���
	std::map<String, MapObject> InitMapObjects();
};

