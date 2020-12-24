#pragma once
#include "header.h"
#include "MapObject.h"
#include "Character.h"

class GameMap
{
private:
	// �I�u�W�F�N�g
	std::map<String, MapObject> objects;

	// �I�u�W�F�N�g�̃}�b�v
	Array<Array<Array<MapObject>>> objects_map;

	// �}�b�v��̃I�u�W�F�N�g�̌���
	Array<Array<Array<MapChipProfiles::Directions>>> object_directions_map;

	// �v���C���[
	Character player;

	// �}�b�v��̃L�����N�^
	Array<Character> characters;

	// ���S���W
	SquarePosition center_square;

	// ���W�̃I�t�Z�b�g�i-32�`32�j
	Point square_position_offset = Point(0, 0);

public:
	// �}�b�v�o�^
	GameMap(Array<Array<Array<MapObject>>> init_objects_map,
		Array<Array<Array<MapChipProfiles::Directions>>> init_object_directions_map,
		Character init_player,
		SquarePosition init_center_square);
	GameMap(FilePath map_file_path,
		std::map<String, MapObject> init_objects,
		Character init_player,
		SquarePosition init_center_square);

	// ���_���ړ�
	SquarePosition moveCamera(Point direction);

	// �}�b�v�`��
	void draw();

	// �`�b�v�̍��W�����ʏ�̍��W�ɕϊ�
	Point squarePositionToPoint(SquarePosition square_position);

	// ��ʏ�̍��W����`�b�v�̍��W�ɕϊ�
	SquarePosition pointToSquarePosition(Point point);

	// ���͂̓������o���w�肳�ꂽ�}�X�̓��̌���������
	MapChipProfiles::Directions setRoadDirection(SquarePosition square_position);

	// �}�b�v�ǂݍ���
	void load(FilePath file_path);

	// �}�b�v�ۑ�
	void save(FilePath file_path);
};

