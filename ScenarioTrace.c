#include <stdio.h>
#include "ScenarioTrace.h"

/**
 * @fn
 * シナリオトレースの実装部分
 * @param p_this シナリオトレースオブジェクト
 * @param typeIndex パターン番号
 */
static void scenario_trace(TraceInterface* const p_this, const int traceType)
{
    printf("Excecute ScenarioTrace Type: %d\n", traceType);
}

/**
 * インタフェースのtraceを、このファイルのscenario_traceが実装していることを指している。
 */
static const TraceMethod TRACE_METHOD = {
    scenario_trace,
};

/**
 * @fn
 * シナリオトレースのコンストラクタ
 * @param p_this シナリオトレース型オブジェクト格納領域
 * @param field1 設定するフィールド値
 */
void ScenarioTrace_Constructor(ScenarioTrace* p_this, const char* field1)
{
    p_this->field1 = field1;
    ((TraceInterface*)p_this)->p_method = &TRACE_METHOD;
}

