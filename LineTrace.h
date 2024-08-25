#ifndef ___LINETRACE_H___
#define ___LINETRACE_H___

#include "TraceInterface.h"

// ライントレースクラス定義
typedef struct lineTrace{
    //! 実装するインタフェース
    TraceInterface interface;
    
    //! もしフィールドが必要であれば追加する。
    const char* field1;
}LineTrace;

/**
* @fn コンストラクタ
* @brief ライントレース用コンストラクタ。
* @param lt ライントレース型オブジェクト格納領域
* @param field1 属性値
*/
void LineTrace_Constructor(LineTrace* lt, const char* field1);

#endif
