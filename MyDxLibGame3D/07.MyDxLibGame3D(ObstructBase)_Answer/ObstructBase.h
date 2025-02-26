﻿//-----------------------------------------------------------------------------
// @brief  障害物基底クラス.
// 2016 Takeru Yui All Rights Reserved.
//-----------------------------------------------------------------------------
#ifndef _OBSTRUCT_BASE_H_
#define _OBSTRUCT_BASE_H_

#include "DxLib.h"

class ObstructBase abstract
{
public:
	ObstructBase(){}				// コンストラクタ.
	virtual ~ObstructBase(){}		// デストラクタ.

	//virtual void Update() = 0;		// 更新.
	virtual void Update() abstract;		// 更新.
	virtual void Draw();				// 描画.

	// モデルハンドルの取得.
	int GetModelHandle(){ return modelHandle; }

	// ポジションのgetter/setter.
	const VECTOR& GetPos() const { return pos; }
	void SetPos(const VECTOR set) { pos = set; }

protected:
	int		modelHandle;	// モデルハンドル.
	VECTOR	pos;			// ポジション.
};

#endif // _OBSTACLE_BASE_H_