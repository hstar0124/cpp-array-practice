#include "Player.h"
#include "Map.h"
#include "Util.h"

bool canMove = true;
int GPlayerX = 4;
int GPlayerY = 4;

void MovePlayer(int x, int y)
{

	// 맵 밖으로 못나가게 체크
	if (x < 0 || x >= MAP_SIZE - 2)
		return;
	if (y < 0 || y >= MAP_SIZE - 2)
		return;

	// 벽 체크
	if (GMap2D[y][x] == 1)
		return;

	// 기존 위치 정리
	SetMapState(GPlayerX, GPlayerY, 0);

	// 위치이동
	GPlayerX = x;
	GPlayerY = y;
	SetMapState(GPlayerX, GPlayerY, 2);

}

void SetMapState(int x, int y, int value)
{
	GMap2D[y][x] = value;
	GMap2D[y+1][x] = value;
	GMap2D[y][x+1] = value;
	GMap2D[y+1][x+1] = value;
}



void HandleMove()
{
	// 키보드를 떼야 다음 움직임 가능
	if (GMoveDir == MD_NONE)
	{
		canMove = true;
		return;
	}

	// 키 입력 상태 확인
	if (canMove == false)
		return;

	canMove = false;

	switch (GMoveDir)
	{
	case MD_LEFT:
		MovePlayer(GPlayerX - 1, GPlayerY);
		break;
	case MD_RIGHT:
		MovePlayer(GPlayerX + 1, GPlayerY);
		break;
	case MD_UP:
		MovePlayer(GPlayerX, GPlayerY - 1);
		break;
	case MD_DOWN:
		MovePlayer(GPlayerX, GPlayerY + 1);
		break;
	}
}