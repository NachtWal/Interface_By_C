#ifndef ___SCENARIOTRACE_H___
#define ___SCENARIOTRACE_H___

#include "TraceInterface.h"

// シナリオトレースクラス定義
typedef struct scenarioTrace{
    //! 実装インタフェース
    TraceInterface interface;

    //! フィールドが必要であれば追加する。
    const char* field1;
}ScenarioTrace;

/**
 * @fn
 * コンストラクタ
 * @param st シナリオトレースオブジェクト格納領域
 * @param field1 属性値
 */
void ScenarioTrace_Constructor(ScenarioTrace* st, const char*  field1);

#endif
