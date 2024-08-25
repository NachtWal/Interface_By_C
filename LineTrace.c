#include <stdio.h>
#include "LineTrace.h"

/**
 * @fn
 * ライントレース
 * @param p_this ライントレースオブジェクト
 * @param typeIndex パターン番号
 */
static void line_trace(const int typeIndex)
{
    printf("Excecute LineTrace Type: %d\n", typeIndex);
}

/**
 * インタフェースのtraceを、このファイルのline_traceが実装していることを指している。
 */
static const TraceMethod TRACE_METHOD = {
    line_trace,
};

/**
 * @fn
 * ライントレースのコンストラクタ
 * @param p_this ライントレース型オブジェクト格納領域
 * @param field1 設定するフィールド値
 */
void LineTrace_Constructor(LineTrace* p_this, const char* field1)
{
    //フィールド値を設定している
    p_this->field1 = field1;
    //ここでインタフェースを実装しているメソッドを指定している。
    ((TraceInterface*)p_this)->p_method = &TRACE_METHOD;
}

