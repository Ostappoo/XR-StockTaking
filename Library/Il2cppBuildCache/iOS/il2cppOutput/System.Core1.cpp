#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t947D2FEEDF3348F6F77C55E8712AD442E6A65F83;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_tBA929C89BC35AAE67764DAA82D62E01A200D3C7D;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t577FCBB6A17E4D24559E5AD6C70155CFF0DFACAC;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_t3970E0723A7C2FEA094E64207358CF587FA8010F;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>
struct TrueReadOnlyCollection_1_t7B0C79057B5BCC33C785557CBB2BEC37F5C2207A;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Linq.Expressions.TypedConstantExpression
struct TypedConstantExpression_tBBD471F35E5E9B51126D6779736D9CCC49538630;
// System.Linq.Expressions.TypedParameterExpression
struct TypedParameterExpression_t4A8A2ACEE15EB5177B0A2B69C3EA017418803EDC;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var;

struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Linq.Expressions.Expression/BinaryExpressionProxy
struct BinaryExpressionProxy_tB8DEB0944D2D5486E0A0701E1AA5F0C3C111AC9F  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/BlockExpressionProxy
struct BlockExpressionProxy_t0CAC642B8B7EA92F15CC5F9A7D5890BB7165803E  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/ConstantExpressionProxy
struct ConstantExpressionProxy_t39C76EDECAC93F67F8A1BF7A38F00C0A13ADAF68  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/IndexExpressionProxy
struct IndexExpressionProxy_t9985142CBCD8894FC1BDEDF34635BE29891C1AC5  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/InvocationExpressionProxy
struct InvocationExpressionProxy_tCFAF246C3589E14D4A659DF734B23620683F9F5B  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/LambdaExpressionProxy
struct LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/MemberExpressionProxy
struct MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/MethodCallExpressionProxy
struct MethodCallExpressionProxy_t98FE50C2E48A56C4A9FBFAEC917DEED84E44EA5E  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/ParameterExpressionProxy
struct ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression/UnaryExpressionProxy
struct UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082  : public ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5
{
public:

public:
};


// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3  : public ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472
{
public:

public:
};


// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CLeftU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CRightU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CLeftU3Ek__BackingField_4)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CLeftU3Ek__BackingField_4() const { return ___U3CLeftU3Ek__BackingField_4; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CLeftU3Ek__BackingField_4() { return &___U3CLeftU3Ek__BackingField_4; }
	inline void set_U3CLeftU3Ek__BackingField_4(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CLeftU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_4), (void*)value);
	}
};


// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Linq.Expressions.IndexExpression
struct IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t * ___U3CIndexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arguments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ___U3CObjectU3Ek__BackingField_4)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CObjectU3Ek__BackingField_4() const { return ___U3CObjectU3Ek__BackingField_4; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CObjectU3Ek__BackingField_4() { return &___U3CObjectU3Ek__BackingField_4; }
	inline void set_U3CObjectU3Ek__BackingField_4(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIndexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ___U3CIndexerU3Ek__BackingField_5)); }
	inline PropertyInfo_t * get_U3CIndexerU3Ek__BackingField_5() const { return ___U3CIndexerU3Ek__BackingField_5; }
	inline PropertyInfo_t ** get_address_of_U3CIndexerU3Ek__BackingField_5() { return &___U3CIndexerU3Ek__BackingField_5; }
	inline void set_U3CIndexerU3Ek__BackingField_5(PropertyInfo_t * value)
	{
		___U3CIndexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndexerU3Ek__BackingField_5), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CExpressionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622, ___U3CExpressionU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CExpressionU3Ek__BackingField_3() const { return ___U3CExpressionU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CExpressionU3Ek__BackingField_3() { return &___U3CExpressionU3Ek__BackingField_3; }
	inline void set_U3CExpressionU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Expressions.ExpressionType
struct ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Linq.Expressions.TypedConstantExpression
struct TypedConstantExpression_tBBD471F35E5E9B51126D6779736D9CCC49538630  : public ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB
{
public:
	// System.Type System.Linq.Expressions.TypedConstantExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TypedConstantExpression_tBBD471F35E5E9B51126D6779736D9CCC49538630, ___U3CTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_4), (void*)value);
	}
};


// System.Linq.Expressions.TypedParameterExpression
struct TypedParameterExpression_t4A8A2ACEE15EB5177B0A2B69C3EA017418803EDC  : public ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE
{
public:
	// System.Type System.Linq.Expressions.TypedParameterExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TypedParameterExpression_t4A8A2ACEE15EB5177B0A2B69C3EA017418803EDC, ___U3CTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_4), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CNodeTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CNodeTypeU3Ek__BackingField_4() const { return ___U3CNodeTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNodeTypeU3Ek__BackingField_4() { return &___U3CNodeTypeU3Ek__BackingField_4; }
	inline void set_U3CNodeTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CNodeTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COperandU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3COperandU3Ek__BackingField_5)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3COperandU3Ek__BackingField_5() const { return ___U3COperandU3Ek__BackingField_5; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3COperandU3Ek__BackingField_5() { return &___U3COperandU3Ek__BackingField_5; }
	inline void set_U3COperandU3Ek__BackingField_5(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3COperandU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperandU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CMethodU3Ek__BackingField_6)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_6() const { return ___U3CMethodU3Ek__BackingField_6; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_6() { return &___U3CMethodU3Ek__BackingField_6; }
	inline void set_U3CMethodU3Ek__BackingField_6(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_6), (void*)value);
	}
};


// System.Linq.Expressions.Expression/ExtensionInfo
struct ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ExtensionInfo::NodeType
	int32_t ___NodeType_0;
	// System.Type System.Linq.Expressions.Expression/ExtensionInfo::Type
	Type_t * ___Type_1;

public:
	inline static int32_t get_offset_of_NodeType_0() { return static_cast<int32_t>(offsetof(ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926, ___NodeType_0)); }
	inline int32_t get_NodeType_0() const { return ___NodeType_0; }
	inline int32_t* get_address_of_NodeType_0() { return &___NodeType_0; }
	inline void set_NodeType_0(int32_t value)
	{
		___NodeType_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * m_Items[1];

public:
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_mDF3EF583478D490FB15F7AB3FF61E2E73191FFA2_gshared (TrueReadOnlyCollection_1_t7B0C79057B5BCC33C785557CBB2BEC37F5C2207A * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___list0, const RuntimeMethod* method);

// System.Void System.Linq.Expressions.ConstantExpression::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantExpression__ctor_m96E16F51C8AD77FCDCDD1197875A6A3C9551542D (ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ParameterExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterExpression__ctor_m98C55FF4C049AE00655796359B8CB6A4E77AF2FB (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Expression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_m95B5A0A5256BB08165526F0843CDCB4334C43D1F (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceIndex_m2DFA8A2DB653367D55ED17EFBB54E59D75557F46 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceMember()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceMember_mD3A59BD6857BAB3F147A56E44B4210A639B3E3A2 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceVariable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceVariable_m422779ADA46D5AFBF1E3BDFA049211DC480BF296 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m21160294834514DA946C00EA104C8F3D1CBCF318 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, int32_t ___nodeType0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression1, Type_t * ___type2, MethodInfo_t * ___method3, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsPrefix_mCAF13AF8FF3636C1B61267FBFB229AB87BB112B9 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.UnaryExpression::FunctionalOp(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___operand0, const RuntimeMethod* method);
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::Assign(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___left0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___right1, const RuntimeMethod* method);
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333 (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5 (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 * __this, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ___list0, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_mDF3EF583478D490FB15F7AB3FF61E2E73191FFA2_gshared)(__this, ___list0, method);
}
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820 (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * __this, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ___list0, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_mDF3EF583478D490FB15F7AB3FF61E2E73191FFA2_gshared)(__this, ___list0, method);
}
// System.Linq.Expressions.BlockExpression System.Linq.Expressions.Expression::Block(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * Expression_Block_mA6CB052758601202DB19D5181835168D9CE6F908 (RuntimeObject* ___variables0, RuntimeObject* ___expressions1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method);
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::MakeMemberAccess(System.Linq.Expressions.Expression,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * Expression_MakeMemberAccess_m5BB353DB69256E9AE44D098D3F4E59628A28A0A9 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, MemberInfo_t * ___member1, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.IndexExpression::get_ArgumentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexExpression_get_ArgumentCount_m8DC5505DE6686A0A52874ED6875458368B1FF8F7 (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * IndexExpression_get_Object_mDD955311731D483584D5E23F38C4274E48F8A7CF_inline (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::GetArgument(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * IndexExpression_GetArgument_m8B2530DBAD367B2D2AF5E26323B47487967CAA32 (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::get_Indexer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t * IndexExpression_get_Indexer_m3B482E3736B7FA41B0678991045F37F69BE3D62A_inline (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, const RuntimeMethod* method);
// System.Linq.Expressions.IndexExpression System.Linq.Expressions.Expression::MakeIndex(System.Linq.Expressions.Expression,System.Reflection.PropertyInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * Expression_MakeIndex_m1E597FC16E3947602AD4C87DC11F125D1D068996 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___instance0, PropertyInfo_t * ___indexer1, RuntimeObject* ___arguments2, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::MakeUnary(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * Expression_MakeUnary_m6261375CB8B1B1CF0F1C5379E110108FC46DA60D (int32_t ___unaryType0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___operand1, Type_t * ___type2, MethodInfo_t * ___method3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.TypedConstantExpression::.ctor(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedConstantExpression__ctor_m1EC712C765866151A04233C247F069E7BC18EFA4 (TypedConstantExpression_tBBD471F35E5E9B51126D6779736D9CCC49538630 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		ConstantExpression__ctor_m96E16F51C8AD77FCDCDD1197875A6A3C9551542D(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___type1;
		__this->set_U3CTypeU3Ek__BackingField_4(L_1);
		return;
	}
}
// System.Type System.Linq.Expressions.TypedConstantExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypedConstantExpression_get_Type_m8880ACA8D2A0F0D72EE29D540FB4331BAFD0637C (TypedConstantExpression_tBBD471F35E5E9B51126D6779736D9CCC49538630 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_4();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.TypedParameterExpression::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedParameterExpression__ctor_m3D235CA0BCB4FCABE91C71DB32676114DA94AF6B (TypedParameterExpression_t4A8A2ACEE15EB5177B0A2B69C3EA017418803EDC * __this, Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name1;
		ParameterExpression__ctor_m98C55FF4C049AE00655796359B8CB6A4E77AF2FB(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		__this->set_U3CTypeU3Ek__BackingField_4(L_1);
		return;
	}
}
// System.Type System.Linq.Expressions.TypedParameterExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypedParameterExpression_get_Type_m1EDEDDA10E636F0AA0EF256F8ADC807FB563A610 (TypedParameterExpression_t4A8A2ACEE15EB5177B0A2B69C3EA017418803EDC * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_4();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m21160294834514DA946C00EA104C8F3D1CBCF318 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, int32_t ___nodeType0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression1, Type_t * ___type2, MethodInfo_t * ___method3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		Expression__ctor_m95B5A0A5256BB08165526F0843CDCB4334C43D1F(__this, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___expression1;
		__this->set_U3COperandU3Ek__BackingField_5(L_0);
		MethodInfo_t * L_1 = ___method3;
		__this->set_U3CMethodU3Ek__BackingField_6(L_1);
		int32_t L_2 = ___nodeType0;
		__this->set_U3CNodeTypeU3Ek__BackingField_4(L_2);
		Type_t * L_3 = ___type2;
		__this->set_U3CTypeU3Ek__BackingField_3(L_3);
		return;
	}
}
// System.Type System.Linq.Expressions.UnaryExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UnaryExpression_get_Type_mF956E2035E3EC10DCE54DC2E7F9EBBCB6D537DAF (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_NodeType_m4CCEEDA71A69296A5770C3DB7F08003227427EC1 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNodeTypeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3COperandU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CMethodU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::Accept(System.Linq.Expressions.ExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_Accept_mAEA94EECEBBECB433E97AF3F2E3274BEFFC1A66E (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * ___visitor0, const RuntimeMethod* method)
{
	{
		ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * L_0 = ___visitor0;
		NullCheck(L_0);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * >::Invoke(14 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression) */, L_0, __this);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.UnaryExpression::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_CanReduce_mE545049AC39B602AE7322D5F543CDED33D70A8DB (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)77)))) <= ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_Reduce_m8A66DEE3511E7931D5D44B3C92D418B8FB74C830 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, __this);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)23))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)55)))))
		{
			goto IL_002c;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_5;
		L_5 = UnaryExpression_ReduceIndex_m2DFA8A2DB653367D55ED17EFBB54E59D75557F46(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0025:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_6;
		L_6 = UnaryExpression_ReduceMember_mD3A59BD6857BAB3F147A56E44B4210A639B3E3A2(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_002c:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_7;
		L_7 = UnaryExpression_ReduceVariable_m422779ADA46D5AFBF1E3BDFA049211DC480BF296(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		return __this;
	}
}
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsPrefix_mCAF13AF8FF3636C1B61267FBFB229AB87BB112B9 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)77))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)78)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)1;
	}
}
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.UnaryExpression::FunctionalOp(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___operand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)77))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		V_0 = ((int32_t)54);
		goto IL_001c;
	}

IL_0019:
	{
		V_0 = ((int32_t)49);
	}

IL_001c:
	{
		int32_t L_2 = V_0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3 = ___operand0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_4 = ___operand0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_4);
		MethodInfo_t * L_6;
		L_6 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(__this, /*hidden argument*/NULL);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_7 = (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 *)il2cpp_codegen_object_new(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62_il2cpp_TypeInfo_var);
		UnaryExpression__ctor_m21160294834514DA946C00EA104C8F3D1CBCF318(L_7, L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceVariable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceVariable_m422779ADA46D5AFBF1E3BDFA049211DC480BF296 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_0 = NULL;
	{
		bool L_0;
		L_0 = UnaryExpression_get_IsPrefix_mCAF13AF8FF3636C1B61267FBFB229AB87BB112B9(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_2;
		L_2 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_3;
		L_3 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_4;
		L_4 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_5;
		L_5 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_7;
		L_7 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_6, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_7;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_8 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)1);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_9 = L_8;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_10);
		TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 * L_11 = (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5(L_11, L_9, /*hidden argument*/TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_12 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)3);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_13 = L_12;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_14 = V_0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_15;
		L_15 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_16;
		L_16 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_17 = L_13;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_18;
		L_18 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_19 = V_0;
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_20;
		L_20 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_19, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_21;
		L_21 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_21);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_22 = L_17;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_23 = V_0;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_23);
		TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * L_24 = (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820(L_24, L_22, /*hidden argument*/TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_25;
		L_25 = Expression_Block_mA6CB052758601202DB19D5181835168D9CE6F908(L_11, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceMember()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceMember_mD3A59BD6857BAB3F147A56E44B4210A639B3E3A2 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * V_0 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_1 = NULL;
	BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * V_2 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_3 = NULL;
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0;
		L_0 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		V_0 = ((MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 *)CastclassClass((RuntimeObject*)L_0, MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622_il2cpp_TypeInfo_var));
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_1 = V_0;
		NullCheck(L_1);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_2;
		L_2 = MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3;
		L_3 = UnaryExpression_ReduceVariable_m422779ADA46D5AFBF1E3BDFA049211DC480BF296(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_001b:
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_4 = V_0;
		NullCheck(L_4);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_5;
		L_5 = MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_7;
		L_7 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_6, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8 = V_1;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_9 = V_0;
		NullCheck(L_9);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_10;
		L_10 = MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline(L_9, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_11;
		L_11 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_12 = V_1;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_13 = V_0;
		NullCheck(L_13);
		MemberInfo_t * L_14;
		L_14 = MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C(L_13, /*hidden argument*/NULL);
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_15;
		L_15 = Expression_MakeMemberAccess_m5BB353DB69256E9AE44D098D3F4E59628A28A0A9(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		bool L_16;
		L_16 = UnaryExpression_get_IsPrefix_mCAF13AF8FF3636C1B61267FBFB229AB87BB112B9(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_17 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)1);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_18 = L_17;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_19 = V_1;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_19);
		TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 * L_20 = (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5(L_20, L_18, /*hidden argument*/TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_21 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_22 = L_21;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_23 = V_2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_23);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_24 = L_22;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_25 = V_0;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_26 = V_0;
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_27;
		L_27 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_28;
		L_28 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_28);
		TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * L_29 = (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820(L_29, L_24, /*hidden argument*/TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_30;
		L_30 = Expression_Block_mA6CB052758601202DB19D5181835168D9CE6F908(L_20, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_0083:
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_31 = V_0;
		NullCheck(L_31);
		Type_t * L_32;
		L_32 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_33;
		L_33 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_32, (String_t*)NULL, /*hidden argument*/NULL);
		V_3 = L_33;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_34 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_35 = L_34;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_36 = V_1;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_36);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_37 = L_35;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_38);
		TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 * L_39 = (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5(L_39, L_37, /*hidden argument*/TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_40 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_41 = L_40;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_42);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_43 = L_41;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_44 = V_3;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_45 = V_0;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_46;
		L_46 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_46);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_47 = L_43;
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_48 = V_0;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_49 = V_3;
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_50;
		L_50 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_49, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_51;
		L_51 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_48, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_51);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_51);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_52 = L_47;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_53 = V_3;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_53);
		TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * L_54 = (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820(L_54, L_52, /*hidden argument*/TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_55;
		L_55 = Expression_Block_mA6CB052758601202DB19D5181835168D9CE6F908(L_39, L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::ReduceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_ReduceIndex_m2DFA8A2DB653367D55ED17EFBB54E59D75557F46 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * V_1 = NULL;
	int32_t V_2 = 0;
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_3 = NULL;
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* V_4 = NULL;
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* V_5 = NULL;
	int32_t V_6 = 0;
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_7 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_8 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_9 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		bool L_0;
		L_0 = UnaryExpression_get_IsPrefix_mCAF13AF8FF3636C1B61267FBFB229AB87BB112B9(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		V_1 = ((IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD *)CastclassSealed((RuntimeObject*)L_1, IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD_il2cpp_TypeInfo_var));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = IndexExpression_get_ArgumentCount_m8DC5505DE6686A0A52874ED6875458368B1FF8F7(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		bool L_5 = V_0;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = 4;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_6 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)));
		V_3 = L_6;
		int32_t L_7 = V_2;
		bool L_8 = V_0;
		G_B4_0 = L_7;
		if (L_8)
		{
			G_B5_0 = L_7;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = 2;
		G_B6_1 = G_B4_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0031:
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_9 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)));
		V_4 = L_9;
		int32_t L_10 = V_2;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_11 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_5 = L_11;
		V_6 = 0;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_12 = V_4;
		int32_t L_13 = V_6;
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_14 = V_1;
		NullCheck(L_14);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_15;
		L_15 = IndexExpression_get_Object_mDD955311731D483584D5E23F38C4274E48F8A7CF_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_17;
		L_17 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_16, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_17);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_17);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_18 = V_3;
		int32_t L_19 = V_6;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_20 = V_4;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_24 = V_1;
		NullCheck(L_24);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_25;
		L_25 = IndexExpression_get_Object_mDD955311731D483584D5E23F38C4274E48F8A7CF_inline(L_24, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_26;
		L_26 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_26);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_00b6;
	}

IL_0076:
	{
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_28 = V_1;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_30;
		L_30 = IndexExpression_GetArgument_m8B2530DBAD367B2D2AF5E26323B47487967CAA32(L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_30;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_31 = V_5;
		int32_t L_32 = V_6;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_33 = V_4;
		int32_t L_34 = V_6;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_35 = V_7;
		NullCheck(L_35);
		Type_t * L_36;
		L_36 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_37;
		L_37 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_36, (String_t*)NULL, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_38 = L_37;
		V_8 = L_38;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_38);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_38);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_39 = V_8;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_39);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_39);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_40 = V_3;
		int32_t L_41 = V_6;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_42 = V_4;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_46 = V_7;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_47;
		L_47 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_47);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_47);
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_49 = V_6;
		int32_t L_50 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)L_50)))
		{
			goto IL_0076;
		}
	}
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52 = 0;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_54 = V_1;
		NullCheck(L_54);
		PropertyInfo_t * L_55;
		L_55 = IndexExpression_get_Indexer_m3B482E3736B7FA41B0678991045F37F69BE3D62A_inline(L_54, /*hidden argument*/NULL);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_56 = V_5;
		TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * L_57 = (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820(L_57, (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)L_56, /*hidden argument*/TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_58;
		L_58 = Expression_MakeIndex_m1E597FC16E3947602AD4C87DC11F125D1D068996(L_53, L_55, L_57, /*hidden argument*/NULL);
		V_1 = L_58;
		bool L_59 = V_0;
		if (L_59)
		{
			goto IL_0126;
		}
	}
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_60 = V_4;
		int32_t L_61 = V_6;
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_62 = V_1;
		NullCheck(L_62);
		Type_t * L_63;
		L_63 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_62);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_64;
		L_64 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_63, (String_t*)NULL, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_65 = L_64;
		V_8 = L_65;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_65);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_65);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_66 = V_8;
		V_9 = L_66;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_67 = V_3;
		int32_t L_68 = V_6;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_69 = V_4;
		int32_t L_70 = V_6;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_73 = V_1;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_74;
		L_74 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_72, L_73, /*hidden argument*/NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_74);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_74);
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_76 = V_3;
		int32_t L_77 = V_6;
		int32_t L_78 = L_77;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_79 = V_1;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_80 = V_9;
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_81;
		L_81 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_80, /*hidden argument*/NULL);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_82;
		L_82 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_79, L_81, /*hidden argument*/NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_82);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_82);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_83 = V_3;
		int32_t L_84 = V_6;
		int32_t L_85 = L_84;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_86 = V_9;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_86);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_86);
		goto IL_013c;
	}

IL_0126:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_87 = V_3;
		int32_t L_88 = V_6;
		int32_t L_89 = L_88;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_90 = V_1;
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_91 = V_1;
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_92;
		L_92 = UnaryExpression_FunctionalOp_m638F4914EAB4DF35633D3C468AA3F08B2A97E65B(__this, L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_93;
		L_93 = Expression_Assign_m32AEF41186AAC28E7AB3E83502C64A93CA69562C(L_90, L_92, /*hidden argument*/NULL);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_93);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_93);
	}

IL_013c:
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_94 = V_4;
		TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 * L_95 = (TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5(L_95, L_94, /*hidden argument*/TrueReadOnlyCollection_1__ctor_mF8FDD857140C35B895099B7D89BFFE4153D771B5_RuntimeMethod_var);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_96 = V_3;
		TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 * L_97 = (TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082 *)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_il2cpp_TypeInfo_var);
		TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820(L_97, L_96, /*hidden argument*/TrueReadOnlyCollection_1__ctor_m69554AD79082CEEEE9808387797E4A9C052A1820_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_98;
		L_98 = Expression_Block_mA6CB052758601202DB19D5181835168D9CE6F908(L_95, L_97, /*hidden argument*/NULL);
		return L_98;
	}
}
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.UnaryExpression::Update(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * UnaryExpression_Update_m79C8EF4FC42CA87B8499564CA5A830D40CED3899 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___operand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___operand0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_0) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return __this;
	}

IL_000b:
	{
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3 = ___operand0;
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		MethodInfo_t * L_5;
		L_5 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_6;
		L_6 = Expression_MakeUnary_m6261375CB8B1B1CF0F1C5379E110108FC46DA60D(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3COperandU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CMethodU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * IndexExpression_get_Object_mDD955311731D483584D5E23F38C4274E48F8A7CF_inline (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CObjectU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t * IndexExpression_get_Indexer_m3B482E3736B7FA41B0678991045F37F69BE3D62A_inline (IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * __this, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get_U3CIndexerU3Ek__BackingField_5();
		return L_0;
	}
}
