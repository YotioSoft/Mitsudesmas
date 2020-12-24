#pragma once
#include "header.h"
#include "MapChip.h"

class MapObject
{
private:
	// �}�b�v�`�b�v
	Array<MapChip> chips;

	// ���O
	String name;

	// ���
	MapChipProfiles::Types type;

public:
	// �R���X�g���N�^
	MapObject();
	MapObject(String init_name, MapChipProfiles::Types init_type);
	MapObject(String init_name, MapChipProfiles::Types init_type, MapChip &init_chip);
	MapObject(String init_name, MapChipProfiles::Types init_type, Array<MapChip> &init_chips);

	// MapChip��ǉ�
	void addMapChip(MapChip init_chip);

	// ���O�̎擾
	String getName();

	// ���ׂĂ̌����̎擾
	Array<MapChipProfiles::Directions> getDirections();

	// �`�b�v�̃^�C�v
	MapChipProfiles::Types getType();

	// �`��i���ۂ̕`���chips.draw�ōs���j
	bool draw(const MapChipProfiles::Directions direction, const Point position);
};

