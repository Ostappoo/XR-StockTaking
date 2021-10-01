#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Func`1<System.DateTime>
struct Func_1_tF7A4F80A83ED82791CD660ED19558BF22C52103D;
// System.Func`1<System.DateTimeOffset>
struct Func_1_t5DFE9F53113522E155333FEB78DB88CF6C93BD54;
// System.Func`2<System.Char,System.Char>
struct Func_2_tA794DD839E2748A3962936477E2CAAC0A30CA6BC;
// System.Func`2<System.Reflection.FieldInfo,System.Type>
struct Func_2_tDF60161D557496E690F5241DE197B103C0DAAEC0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>
struct IEnumerator_1_tFABF1E2F4C4D0359A4AB0B8666DEAFBF5A2ED864;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<UnityEngine.Localization.SmartFormat.Core.Parsing.Format>
struct List_1_t65430745339F01A4033FA67CB0A7D557A964B3D0;
// System.Collections.Generic.List`1<UnityEngine.Localization.Metadata.IMetadata>
struct List_1_t5D3ED5F1D9F542094E757F904E6960EA6DBEE7A9;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Localization.SmartFormat.Core.Parsing.Format
struct Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E;
// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatCache
struct FormatCache_t4F6B4586AEED86AD3934044A4661A92A6EB22812;
// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails
struct FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853;
// UnityEngine.Localization.SmartFormat.Core.Formatting.FormattingException
struct FormattingException_t2367F6BB7974421C65FCE00BFA026F01CCE5849D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.Localization.SmartFormat.Core.Output.IOutput
struct IOutput_tD2BC3575A5F90A4E8A5DFDC4FE888868CB780E5A;
// UnityEngine.Localization.SmartFormat.Core.Extensions.ISelectorInfo
struct ISelectorInfo_t09A8F92112DD84298BB0E8274F10F50BA34F1091;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Localization.SmartFormat.SmartFormatter
struct SmartFormatter_tD618B6BBD301A5205EC59F2C9DD081AD1D18D858;
// UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings
struct SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Localization.SmartFormat.Core.Output.StringOutput
struct StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7;
// UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList
struct SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F;
// UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate
struct PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7;
// UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92;
// UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item
struct Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5;
// UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry
struct SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B;
// UnityEngine.Localization.SmartFormat.SplitListPool/<>c
struct U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF;
// UnityEngine.Localization.StringBuilderPool/<>c
struct U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5;
// UnityEngine.Localization.SmartFormat.StringOutputPool/<>c
struct U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC;
// UnityEngine.Localization.Tables.StringTable/<>c
struct U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0;
// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c
struct U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E;
// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t93EA8B13CC29969A9CE10B6DEBDA61A78A122C5B;
// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t21E57719F75CC1C48085B0BDA01FC8F6D362B3AA;
// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3
struct U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D;
// UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c
struct U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90;
// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c
struct U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8;
// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA95895DE85B643E7590508A692C1B5C6AF965741;
// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6
struct U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2;
// UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t88989E2B6DAA8E41F6AC01BFBE7CF39BFA379B51;
// UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4
struct U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISelectorInfo_t09A8F92112DD84298BB0E8274F10F50BA34F1091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanFormatOptions_tE2755764F74DE68883A9F71B8D46F05E8F684554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TupleExtensions_t766DBDC6D2D2DE2BF99007F81E241C8E2158F465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAllFlagsU3Ed__3_System_Collections_IEnumerator_Reset_m23BC97A31705736A684C0498842D7A34D8824EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m0FB2C58F5E9DEF0D92D936678D88C4CB864A1E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_IEnumerator_Reset_m863625F5B6D8876CC1A3482B593A4A8309B78BD8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails
struct FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853  : public RuntimeObject
{
public:
	// UnityEngine.Localization.SmartFormat.SmartFormatter UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<Formatter>k__BackingField
	SmartFormatter_tD618B6BBD301A5205EC59F2C9DD081AD1D18D858 * ___U3CFormatterU3Ek__BackingField_0;
	// UnityEngine.Localization.SmartFormat.Core.Parsing.Format UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<OriginalFormat>k__BackingField
	Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * ___U3COriginalFormatU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<System.Object> UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<OriginalArgs>k__BackingField
	RuntimeObject* ___U3COriginalArgsU3Ek__BackingField_2;
	// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatCache UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<FormatCache>k__BackingField
	FormatCache_t4F6B4586AEED86AD3934044A4661A92A6EB22812 * ___U3CFormatCacheU3Ek__BackingField_3;
	// System.IFormatProvider UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_4;
	// UnityEngine.Localization.SmartFormat.Core.Output.IOutput UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<Output>k__BackingField
	RuntimeObject* ___U3COutputU3Ek__BackingField_5;
	// UnityEngine.Localization.SmartFormat.Core.Formatting.FormattingException UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::<FormattingException>k__BackingField
	FormattingException_t2367F6BB7974421C65FCE00BFA026F01CCE5849D * ___U3CFormattingExceptionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CFormatterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3CFormatterU3Ek__BackingField_0)); }
	inline SmartFormatter_tD618B6BBD301A5205EC59F2C9DD081AD1D18D858 * get_U3CFormatterU3Ek__BackingField_0() const { return ___U3CFormatterU3Ek__BackingField_0; }
	inline SmartFormatter_tD618B6BBD301A5205EC59F2C9DD081AD1D18D858 ** get_address_of_U3CFormatterU3Ek__BackingField_0() { return &___U3CFormatterU3Ek__BackingField_0; }
	inline void set_U3CFormatterU3Ek__BackingField_0(SmartFormatter_tD618B6BBD301A5205EC59F2C9DD081AD1D18D858 * value)
	{
		___U3CFormatterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatterU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalFormatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3COriginalFormatU3Ek__BackingField_1)); }
	inline Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * get_U3COriginalFormatU3Ek__BackingField_1() const { return ___U3COriginalFormatU3Ek__BackingField_1; }
	inline Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E ** get_address_of_U3COriginalFormatU3Ek__BackingField_1() { return &___U3COriginalFormatU3Ek__BackingField_1; }
	inline void set_U3COriginalFormatU3Ek__BackingField_1(Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * value)
	{
		___U3COriginalFormatU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalFormatU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalArgsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3COriginalArgsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3COriginalArgsU3Ek__BackingField_2() const { return ___U3COriginalArgsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3COriginalArgsU3Ek__BackingField_2() { return &___U3COriginalArgsU3Ek__BackingField_2; }
	inline void set_U3COriginalArgsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3COriginalArgsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalArgsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFormatCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3CFormatCacheU3Ek__BackingField_3)); }
	inline FormatCache_t4F6B4586AEED86AD3934044A4661A92A6EB22812 * get_U3CFormatCacheU3Ek__BackingField_3() const { return ___U3CFormatCacheU3Ek__BackingField_3; }
	inline FormatCache_t4F6B4586AEED86AD3934044A4661A92A6EB22812 ** get_address_of_U3CFormatCacheU3Ek__BackingField_3() { return &___U3CFormatCacheU3Ek__BackingField_3; }
	inline void set_U3CFormatCacheU3Ek__BackingField_3(FormatCache_t4F6B4586AEED86AD3934044A4661A92A6EB22812 * value)
	{
		___U3CFormatCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatCacheU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3CProviderU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CProviderU3Ek__BackingField_4() const { return ___U3CProviderU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CProviderU3Ek__BackingField_4() { return &___U3CProviderU3Ek__BackingField_4; }
	inline void set_U3CProviderU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CProviderU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3COutputU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3COutputU3Ek__BackingField_5() const { return ___U3COutputU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3COutputU3Ek__BackingField_5() { return &___U3COutputU3Ek__BackingField_5; }
	inline void set_U3COutputU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3COutputU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFormattingExceptionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853, ___U3CFormattingExceptionU3Ek__BackingField_6)); }
	inline FormattingException_t2367F6BB7974421C65FCE00BFA026F01CCE5849D * get_U3CFormattingExceptionU3Ek__BackingField_6() const { return ___U3CFormattingExceptionU3Ek__BackingField_6; }
	inline FormattingException_t2367F6BB7974421C65FCE00BFA026F01CCE5849D ** get_address_of_U3CFormattingExceptionU3Ek__BackingField_6() { return &___U3CFormattingExceptionU3Ek__BackingField_6; }
	inline void set_U3CFormattingExceptionU3Ek__BackingField_6(FormattingException_t2367F6BB7974421C65FCE00BFA026F01CCE5849D * value)
	{
		___U3CFormattingExceptionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormattingExceptionU3Ek__BackingField_6), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Localization.Metadata.IMetadata> UnityEngine.Localization.Metadata.MetadataCollection::m_Items
	List_1_t5D3ED5F1D9F542094E757F904E6960EA6DBEE7A9 * ___m_Items_0;

public:
	inline static int32_t get_offset_of_m_Items_0() { return static_cast<int32_t>(offsetof(MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5, ___m_Items_0)); }
	inline List_1_t5D3ED5F1D9F542094E757F904E6960EA6DBEE7A9 * get_m_Items_0() const { return ___m_Items_0; }
	inline List_1_t5D3ED5F1D9F542094E757F904E6960EA6DBEE7A9 ** get_address_of_m_Items_0() { return &___m_Items_0; }
	inline void set_m_Items_0(List_1_t5D3ED5F1D9F542094E757F904E6960EA6DBEE7A9 * value)
	{
		___m_Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_0), (void*)value);
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Core.Output.StringOutput
struct StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Localization.SmartFormat.Core.Output.StringOutput::output
	StringBuilder_t * ___output_0;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E, ___output_0)); }
	inline StringBuilder_t * get_output_0() const { return ___output_0; }
	inline StringBuilder_t ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(StringBuilder_t * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_0), (void*)value);
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

// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	// System.String System.Xml.Linq.XName::localName
	String_t* ___localName_1;
	// System.Int32 System.Xml.Linq.XName::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___ns_0)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_0), (void*)value);
	}

	inline static int32_t get_offset_of_localName_1() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___localName_1)); }
	inline String_t* get_localName_1() const { return ___localName_1; }
	inline String_t** get_address_of_localName_1() { return &___localName_1; }
	inline void set_localName_1(String_t* value)
	{
		___localName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};


// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___parent_0)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList
struct SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F  : public RuntimeObject
{
public:
	// UnityEngine.Localization.SmartFormat.Core.Parsing.Format UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList::m_Format
	Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * ___m_Format_0;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList::m_Splits
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Splits_1;
	// System.Collections.Generic.List`1<UnityEngine.Localization.SmartFormat.Core.Parsing.Format> UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList::m_FormatCache
	List_1_t65430745339F01A4033FA67CB0A7D557A964B3D0 * ___m_FormatCache_2;

public:
	inline static int32_t get_offset_of_m_Format_0() { return static_cast<int32_t>(offsetof(SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F, ___m_Format_0)); }
	inline Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * get_m_Format_0() const { return ___m_Format_0; }
	inline Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E ** get_address_of_m_Format_0() { return &___m_Format_0; }
	inline void set_m_Format_0(Format_tFEFA9814434D3CE1128F6907259D4E8B93ECBD9E * value)
	{
		___m_Format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Format_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Splits_1() { return static_cast<int32_t>(offsetof(SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F, ___m_Splits_1)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Splits_1() const { return ___m_Splits_1; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Splits_1() { return &___m_Splits_1; }
	inline void set_m_Splits_1(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Splits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Splits_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_FormatCache_2() { return static_cast<int32_t>(offsetof(SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F, ___m_FormatCache_2)); }
	inline List_1_t65430745339F01A4033FA67CB0A7D557A964B3D0 * get_m_FormatCache_2() const { return ___m_FormatCache_2; }
	inline List_1_t65430745339F01A4033FA67CB0A7D557A964B3D0 ** get_address_of_m_FormatCache_2() { return &___m_FormatCache_2; }
	inline void set_m_FormatCache_2(List_1_t65430745339F01A4033FA67CB0A7D557A964B3D0 * value)
	{
		___m_FormatCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormatCache_2), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92  : public RuntimeObject
{
public:
	// System.String UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0::selector
	String_t* ___selector_0;
	// UnityEngine.Localization.SmartFormat.Core.Extensions.ISelectorInfo UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0::selectorInfo
	RuntimeObject* ___selectorInfo_1;

public:
	inline static int32_t get_offset_of_selector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92, ___selector_0)); }
	inline String_t* get_selector_0() const { return ___selector_0; }
	inline String_t** get_address_of_selector_0() { return &___selector_0; }
	inline void set_selector_0(String_t* value)
	{
		___selector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_0), (void*)value);
	}

	inline static int32_t get_offset_of_selectorInfo_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92, ___selectorInfo_1)); }
	inline RuntimeObject* get_selectorInfo_1() const { return ___selectorInfo_1; }
	inline RuntimeObject** get_address_of_selectorInfo_1() { return &___selectorInfo_1; }
	inline void set_selectorInfo_1(RuntimeObject* value)
	{
		___selectorInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectorInfo_1), (void*)value);
	}
};


// UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item
struct Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::m_KeyId
	int64_t ___m_KeyId_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::m_TableCodes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_TableCodes_1;

public:
	inline static int32_t get_offset_of_m_KeyId_0() { return static_cast<int32_t>(offsetof(Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5, ___m_KeyId_0)); }
	inline int64_t get_m_KeyId_0() const { return ___m_KeyId_0; }
	inline int64_t* get_address_of_m_KeyId_0() { return &___m_KeyId_0; }
	inline void set_m_KeyId_0(int64_t value)
	{
		___m_KeyId_0 = value;
	}

	inline static int32_t get_offset_of_m_TableCodes_1() { return static_cast<int32_t>(offsetof(Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5, ___m_TableCodes_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_TableCodes_1() const { return ___m_TableCodes_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_TableCodes_1() { return &___m_TableCodes_1; }
	inline void set_m_TableCodes_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_TableCodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TableCodes_1), (void*)value);
	}
};


// UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry
struct SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::m_Id
	int64_t ___m_Id_0;
	// System.String UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::m_Key
	String_t* ___m_Key_1;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::m_Metadata
	MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * ___m_Metadata_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B, ___m_Id_0)); }
	inline int64_t get_m_Id_0() const { return ___m_Id_0; }
	inline int64_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int64_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Key_1() { return static_cast<int32_t>(offsetof(SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B, ___m_Key_1)); }
	inline String_t* get_m_Key_1() const { return ___m_Key_1; }
	inline String_t** get_address_of_m_Key_1() { return &___m_Key_1; }
	inline void set_m_Key_1(String_t* value)
	{
		___m_Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Key_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Metadata_2() { return static_cast<int32_t>(offsetof(SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B, ___m_Metadata_2)); }
	inline MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * get_m_Metadata_2() const { return ___m_Metadata_2; }
	inline MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 ** get_address_of_m_Metadata_2() { return &___m_Metadata_2; }
	inline void set_m_Metadata_2(MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * value)
	{
		___m_Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Metadata_2), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.SplitListPool/<>c
struct U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_StaticFields
{
public:
	// UnityEngine.Localization.SmartFormat.SplitListPool/<>c UnityEngine.Localization.SmartFormat.SplitListPool/<>c::<>9
	U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.Localization.StringBuilderPool/<>c
struct U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_StaticFields
{
public:
	// UnityEngine.Localization.StringBuilderPool/<>c UnityEngine.Localization.StringBuilderPool/<>c::<>9
	U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.StringOutputPool/<>c
struct U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_StaticFields
{
public:
	// UnityEngine.Localization.SmartFormat.StringOutputPool/<>c UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::<>9
	U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.Localization.Tables.StringTable/<>c
struct U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_StaticFields
{
public:
	// UnityEngine.Localization.Tables.StringTable/<>c UnityEngine.Localization.Tables.StringTable/<>c::<>9
	U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * ___U3CU3E9_0;
	// System.Func`2<System.Char,System.Char> UnityEngine.Localization.Tables.StringTable/<>c::<>9__0_0
	Func_2_tA794DD839E2748A3962936477E2CAAC0A30CA6BC * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_tA794DD839E2748A3962936477E2CAAC0A30CA6BC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_tA794DD839E2748A3962936477E2CAAC0A30CA6BC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_tA794DD839E2748A3962936477E2CAAC0A30CA6BC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c
struct U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_StaticFields
{
public:
	// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<>9
	U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * ___U3CU3E9_0;
	// System.Func`1<System.DateTime> UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<>9__4_0
	Func_1_tF7A4F80A83ED82791CD660ED19558BF22C52103D * ___U3CU3E9__4_0_1;
	// System.Func`1<System.DateTimeOffset> UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<>9__4_1
	Func_1_t5DFE9F53113522E155333FEB78DB88CF6C93BD54 * ___U3CU3E9__4_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_tF7A4F80A83ED82791CD660ED19558BF22C52103D * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_tF7A4F80A83ED82791CD660ED19558BF22C52103D ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_tF7A4F80A83ED82791CD660ED19558BF22C52103D * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_StaticFields, ___U3CU3E9__4_1_2)); }
	inline Func_1_t5DFE9F53113522E155333FEB78DB88CF6C93BD54 * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline Func_1_t5DFE9F53113522E155333FEB78DB88CF6C93BD54 ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(Func_1_t5DFE9F53113522E155333FEB78DB88CF6C93BD54 * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c
struct U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_StaticFields
{
public:
	// UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::<>9
	U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * ___U3CU3E9_0;
	// UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::<>9__15_0
	PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * ___U3CU3E9__15_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_StaticFields, ___U3CU3E9__15_0_1)); }
	inline PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_1), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c
struct U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_StaticFields
{
public:
	// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::<>9
	U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Type> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::<>9__4_0
	Func_2_tDF60161D557496E690F5241DE197B103C0DAAEC0 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_tDF60161D557496E690F5241DE197B103C0DAAEC0 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_tDF60161D557496E690F5241DE197B103C0DAAEC0 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_tDF60161D557496E690F5241DE197B103C0DAAEC0 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA95895DE85B643E7590508A692C1B5C6AF965741  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0::tuple
	RuntimeObject * ___tuple_0;

public:
	inline static int32_t get_offset_of_tuple_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tA95895DE85B643E7590508A692C1B5C6AF965741, ___tuple_0)); }
	inline RuntimeObject * get_tuple_0() const { return ___tuple_0; }
	inline RuntimeObject ** get_address_of_tuple_0() { return &___tuple_0; }
	inline void set_tuple_0(RuntimeObject * value)
	{
		___tuple_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tuple_0), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6
struct U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::tuple
	RuntimeObject * ___tuple_3;
	// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>3__tuple
	RuntimeObject * ___U3CU3E3__tuple_4;
	// System.Collections.Generic.IEnumerator`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
	// System.Collections.Generic.IEnumerator`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_tuple_3() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___tuple_3)); }
	inline RuntimeObject * get_tuple_3() const { return ___tuple_3; }
	inline RuntimeObject ** get_address_of_tuple_3() { return &___tuple_3; }
	inline void set_tuple_3(RuntimeObject * value)
	{
		___tuple_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tuple_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tuple_4() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3E3__tuple_4)); }
	inline RuntimeObject * get_U3CU3E3__tuple_4() const { return ___U3CU3E3__tuple_4; }
	inline RuntimeObject ** get_address_of_U3CU3E3__tuple_4() { return &___U3CU3E3__tuple_4; }
	inline void set_U3CU3E3__tuple_4(RuntimeObject * value)
	{
		___U3CU3E3__tuple_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tuple_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2, ___U3CU3E7__wrap2_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_6), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t88989E2B6DAA8E41F6AC01BFBE7CF39BFA379B51  : public RuntimeObject
{
public:
	// System.String UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0::selector
	String_t* ___selector_0;

public:
	inline static int32_t get_offset_of_selector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t88989E2B6DAA8E41F6AC01BFBE7CF39BFA379B51, ___selector_0)); }
	inline String_t* get_selector_0() const { return ___selector_0; }
	inline String_t** get_address_of_selector_0() { return &___selector_0; }
	inline void set_selector_0(String_t* value)
	{
		___selector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_0), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99  : public XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99, ___next_1)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_next_1() const { return ___next_1; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator
struct PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586 
{
public:
	// System.String UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator::m_BaseString
	String_t* ___m_BaseString_0;
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator::m_From
	int32_t ___m_From_1;
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator::m_To
	int32_t ___m_To_2;

public:
	inline static int32_t get_offset_of_m_BaseString_0() { return static_cast<int32_t>(offsetof(PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586, ___m_BaseString_0)); }
	inline String_t* get_m_BaseString_0() const { return ___m_BaseString_0; }
	inline String_t** get_address_of_m_BaseString_0() { return &___m_BaseString_0; }
	inline void set_m_BaseString_0(String_t* value)
	{
		___m_BaseString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseString_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_From_1() { return static_cast<int32_t>(offsetof(PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586, ___m_From_1)); }
	inline int32_t get_m_From_1() const { return ___m_From_1; }
	inline int32_t* get_address_of_m_From_1() { return &___m_From_1; }
	inline void set_m_From_1(int32_t value)
	{
		___m_From_1 = value;
	}

	inline static int32_t get_offset_of_m_To_2() { return static_cast<int32_t>(offsetof(PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586, ___m_To_2)); }
	inline int32_t get_m_To_2() const { return ___m_To_2; }
	inline int32_t* get_address_of_m_To_2() { return &___m_To_2; }
	inline void set_m_To_2(int32_t value)
	{
		___m_To_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator
struct PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586_marshaled_pinvoke
{
	char* ___m_BaseString_0;
	int32_t ___m_From_1;
	int32_t ___m_To_2;
};
// Native definition for COM marshalling of UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator
struct PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586_marshaled_com
{
	Il2CppChar* ___m_BaseString_0;
	int32_t ___m_From_1;
	int32_t ___m_To_2;
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


// UnityEngine.Localization.SmartFormat.Core.Settings.CaseSensitivityType
struct CaseSensitivityType_t9A9ADC5998A98C0D9A626F9394F31B7960B18095 
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Settings.CaseSensitivityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaseSensitivityType_t9A9ADC5998A98C0D9A626F9394F31B7960B18095, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction
struct ErrorAction_tC9C54A79FB8B5C7DAAA6130842F01AD1249A38BF 
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorAction_tC9C54A79FB8B5C7DAAA6130842F01AD1249A38BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions
struct TimeSpanFormatOptions_tE2755764F74DE68883A9F71B8D46F05E8F684554 
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanFormatOptions_tE2755764F74DE68883A9F71B8D46F05E8F684554, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_2;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525, ___content_2)); }
	inline RuntimeObject * get_content_2() const { return ___content_2; }
	inline RuntimeObject ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(RuntimeObject * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_2), (void*)value);
	}
};


// UnityEngine.Localization.Metadata.PreloadAssetTableMetadata/PreloadBehaviour
struct PreloadBehaviour_tE99FBE790F019FCCF3D949B77069320657212303 
{
public:
	// System.Int32 UnityEngine.Localization.Metadata.PreloadAssetTableMetadata/PreloadBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreloadBehaviour_tE99FBE790F019FCCF3D949B77069320657212303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Extensions.SubStringFormatter/SubStringOutOfRangeBehavior
struct SubStringOutOfRangeBehavior_t8E2694839EA481250B523AE9712FF1F0CBF42D1D 
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Extensions.SubStringFormatter/SubStringOutOfRangeBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SubStringOutOfRangeBehavior_t8E2694839EA481250B523AE9712FF1F0CBF42D1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t93EA8B13CC29969A9CE10B6DEBDA61A78A122C5B  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0::dateTimeNow
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTimeNow_0;

public:
	inline static int32_t get_offset_of_dateTimeNow_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t93EA8B13CC29969A9CE10B6DEBDA61A78A122C5B, ___dateTimeNow_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_dateTimeNow_0() const { return ___dateTimeNow_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_dateTimeNow_0() { return &___dateTimeNow_0; }
	inline void set_dateTimeNow_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___dateTimeNow_0 = value;
	}
};


// UnityEngine.Localization.Tables.TableEntryReference/Type
struct Type_tD83EF716BECA56D7611924427F97765760E76B6A 
{
public:
	// System.Int32 UnityEngine.Localization.Tables.TableEntryReference/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tD83EF716BECA56D7611924427F97765760E76B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Localization.Tables.TableReference/Type
struct Type_t65971A8B6DFBF97E5629D5547846A1D2F79AD756 
{
public:
	// System.Int32 UnityEngine.Localization.Tables.TableReference/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t65971A8B6DFBF97E5629D5547846A1D2F79AD756, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4
struct U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Char UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::<>2__current
	Il2CppChar ___U3CU3E2__current_1;
	// UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::<>4__this
	PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586  ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865, ___U3CU3E2__current_1)); }
	inline Il2CppChar get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppChar* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppChar value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865, ___U3CU3E4__this_2)); }
	inline PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586  get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586 * get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586  value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->___m_BaseString_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings
struct SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627  : public RuntimeObject
{
public:
	// UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings::m_FormatErrorAction
	int32_t ___m_FormatErrorAction_0;
	// UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings::m_ParseErrorAction
	int32_t ___m_ParseErrorAction_1;
	// UnityEngine.Localization.SmartFormat.Core.Settings.CaseSensitivityType UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings::m_CaseSensitivity
	int32_t ___m_CaseSensitivity_2;
	// System.Boolean UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings::m_ConvertCharacterStringLiterals
	bool ___m_ConvertCharacterStringLiterals_3;

public:
	inline static int32_t get_offset_of_m_FormatErrorAction_0() { return static_cast<int32_t>(offsetof(SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627, ___m_FormatErrorAction_0)); }
	inline int32_t get_m_FormatErrorAction_0() const { return ___m_FormatErrorAction_0; }
	inline int32_t* get_address_of_m_FormatErrorAction_0() { return &___m_FormatErrorAction_0; }
	inline void set_m_FormatErrorAction_0(int32_t value)
	{
		___m_FormatErrorAction_0 = value;
	}

	inline static int32_t get_offset_of_m_ParseErrorAction_1() { return static_cast<int32_t>(offsetof(SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627, ___m_ParseErrorAction_1)); }
	inline int32_t get_m_ParseErrorAction_1() const { return ___m_ParseErrorAction_1; }
	inline int32_t* get_address_of_m_ParseErrorAction_1() { return &___m_ParseErrorAction_1; }
	inline void set_m_ParseErrorAction_1(int32_t value)
	{
		___m_ParseErrorAction_1 = value;
	}

	inline static int32_t get_offset_of_m_CaseSensitivity_2() { return static_cast<int32_t>(offsetof(SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627, ___m_CaseSensitivity_2)); }
	inline int32_t get_m_CaseSensitivity_2() const { return ___m_CaseSensitivity_2; }
	inline int32_t* get_address_of_m_CaseSensitivity_2() { return &___m_CaseSensitivity_2; }
	inline void set_m_CaseSensitivity_2(int32_t value)
	{
		___m_CaseSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_m_ConvertCharacterStringLiterals_3() { return static_cast<int32_t>(offsetof(SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627, ___m_ConvertCharacterStringLiterals_3)); }
	inline bool get_m_ConvertCharacterStringLiterals_3() const { return ___m_ConvertCharacterStringLiterals_3; }
	inline bool* get_address_of_m_ConvertCharacterStringLiterals_3() { return &___m_ConvertCharacterStringLiterals_3; }
	inline void set_m_ConvertCharacterStringLiterals_3(bool value)
	{
		___m_ConvertCharacterStringLiterals_3 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5  : public XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_3;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___name_3)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_3() const { return ___name_3; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}
};


// UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t21E57719F75CC1C48085B0BDA01FC8F6D362B3AA  : public RuntimeObject
{
public:
	// System.DateTimeOffset UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0::dateTimeOffset
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___dateTimeOffset_0;

public:
	inline static int32_t get_offset_of_dateTimeOffset_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t21E57719F75CC1C48085B0BDA01FC8F6D362B3AA, ___dateTimeOffset_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_dateTimeOffset_0() const { return ___dateTimeOffset_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_dateTimeOffset_0() { return &___dateTimeOffset_0; }
	inline void set_dateTimeOffset_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___dateTimeOffset_0 = value;
	}
};


// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3
struct U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::<>2__current
	int32_t ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::timeSpanFormatOptions
	int32_t ___timeSpanFormatOptions_3;
	// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::<>3__timeSpanFormatOptions
	int32_t ___U3CU3E3__timeSpanFormatOptions_4;
	// System.UInt32 UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::<value>5__2
	uint32_t ___U3CvalueU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___U3CU3E2__current_1)); }
	inline int32_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline int32_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(int32_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_timeSpanFormatOptions_3() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___timeSpanFormatOptions_3)); }
	inline int32_t get_timeSpanFormatOptions_3() const { return ___timeSpanFormatOptions_3; }
	inline int32_t* get_address_of_timeSpanFormatOptions_3() { return &___timeSpanFormatOptions_3; }
	inline void set_timeSpanFormatOptions_3(int32_t value)
	{
		___timeSpanFormatOptions_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__timeSpanFormatOptions_4() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___U3CU3E3__timeSpanFormatOptions_4)); }
	inline int32_t get_U3CU3E3__timeSpanFormatOptions_4() const { return ___U3CU3E3__timeSpanFormatOptions_4; }
	inline int32_t* get_address_of_U3CU3E3__timeSpanFormatOptions_4() { return &___U3CU3E3__timeSpanFormatOptions_4; }
	inline void set_U3CU3E3__timeSpanFormatOptions_4(int32_t value)
	{
		___U3CU3E3__timeSpanFormatOptions_4 = value;
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D, ___U3CvalueU3E5__2_5)); }
	inline uint32_t get_U3CvalueU3E5__2_5() const { return ___U3CvalueU3E5__2_5; }
	inline uint32_t* get_address_of_U3CvalueU3E5__2_5() { return &___U3CvalueU3E5__2_5; }
	inline void set_U3CvalueU3E5__2_5(uint32_t value)
	{
		___U3CvalueU3E5__2_5 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate
struct PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627 * FormatDetails_get_Settings_mB9944B35BC9D263A11C41B98626A9B3848772B66 (FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853 * __this, const RuntimeMethod* method);
// System.StringComparison UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings::GetCaseSensitivityComparison()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmartSettings_GetCaseSensitivityComparison_m53F2D447BEABB492B224620116CA6C3E66DC50B4 (SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int64 UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTableEntry_get_Id_m76E7DC1967E1DF86CD9CC4B8E5050C91A761A031_inline (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method);
// System.String UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTableEntry_get_Key_mD04A1F7B3F414B36D6F4EAAAD31E0398FEAC2023_inline (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.Metadata.MetadataCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataCollection__ctor_m4D1388E31851B3F421C638C8EA1A537BD73A79A0 (MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.SplitListPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEAB959A0F991F85489FC0757179FBE3FE85108BD (U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitList__ctor_mC4F588F6ABBA686F40ADBF3C1BF74A77EF1C9638 (SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitList_Clear_m1527DEAAE32A2CECE0454A2DB703BAFD36F5C5B7 (SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFFC3C3C75857C24CD50789E394CB5C77D4397F13 (U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF04470EC78DA875B34EE2D806A8D0129DC0049B2 (U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Core.Output.StringOutput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringOutput__ctor_m87B1302FD70A5EB6CCDFA12CC73AABA9BDDBFACB (StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Core.Output.StringOutput::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringOutput_Clear_m7E3C91271B516BBBFF4806A7BC89C360C5E9B95F (StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.Tables.StringTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m401FEC8C4029051F0E26D506F3856AB6352820B7 (U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m287CAC9D675FE3A0F42878A6A712780710A50A1D (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E (const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllFlagsU3Ed__3__ctor_mC79E9668766055ED89139D401199B8D21FC35A47 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions> UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.Generic.IEnumerable<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAllFlagsU3Ed__3_System_Collections_Generic_IEnumerableU3CUnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptionsU3E_GetEnumerator_mE081D96C0FEA4B3FA86C7DE485BC1E82FA8977E6 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5432B7F957A54F8EA2826AA2747CD4995C02634 (U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2516E8348B0CA893DC291F46444C34422C650782 (U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally2_mCE042CF18B38FD95AD257D4E260F94B93BF2EC02 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally1_m9877E17B9198F9C02A23C4CB3AE04630693F8394 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions::GetValueTupleItemObjects(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TupleExtensions_GetValueTupleItemObjects_mEA68F1F52977AED974351FE3FF03A1FFDC8A04F5 (RuntimeObject * ___tuple0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions::IsValueTuple(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TupleExtensions_IsValueTuple_m717EBC13A25564B8655C6B73449E96C394424B04 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions::GetValueTupleItemObjectsFlattened(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TupleExtensions_GetValueTupleItemObjectsFlattened_m1F1B05CFB938AB4AEAEF5EB338489915BCE858F4 (RuntimeObject * ___tuple0, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_IDisposable_Dispose_mEF8BA3541EE83DF58DDA01D3F9D48C8C8D1B2C16 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6__ctor_m94D640E72399278FB38D2B7F29F75B1F0CA36F51 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m1C58CDFBCA96372D3791B8A0EA6A608ACB3A10D8 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 (PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, int32_t ___pluralCount1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___value0, ___pluralCount1);

	return returnValue;
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluralRuleDelegate__ctor_m960632B9CD2F303AEE2A59D7C2EDBEEA7A3C5D7A (PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate::Invoke(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PluralRuleDelegate_Invoke_m62AB59931D895D02E65BC49E1651B4ABA422D472 (PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, int32_t ___pluralCount1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___value0, ___pluralCount1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___pluralCount1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t >::Invoke(targetMethod, targetThis, ___value0, ___pluralCount1);
					else
						result = GenericVirtFuncInvoker2< int32_t, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t >::Invoke(targetMethod, targetThis, ___value0, ___pluralCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___pluralCount1);
					else
						result = VirtFuncInvoker2< int32_t, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___pluralCount1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___value0) - 1), ___pluralCount1, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___pluralCount1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate::BeginInvoke(System.Decimal,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PluralRuleDelegate_BeginInvoke_m4651103F8348F32E8A32F7B5B37749A0BBF5068E (PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, int32_t ___pluralCount1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &___value0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pluralCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PluralRuleDelegate_EndInvoke_mAD5C9F291C67E38CBD76074BD68983031D57D99F (PluralRuleDelegate_tBF37E11170124F14732472B172498302121D22D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
// System.Void UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mBC899B8C1B767AB613DDE767A0851B49EC24F58A (U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0::<TryEvaluateSelector>b__0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CTryEvaluateSelectorU3Eb__0_mA639F88562BE42BEB9C4B910BF6E53072D89F0E5 (U3CU3Ec__DisplayClass5_0_t3FB5655A2A0A7220494C24F5C890EEFB2F30CC92 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISelectorInfo_t09A8F92112DD84298BB0E8274F10F50BA34F1091_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string.Equals(m.Name, selector, selectorInfo.FormatDetails.Settings.GetCaseSensitivityComparison()));
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_selector_0();
		RuntimeObject* L_3 = __this->get_selectorInfo_1();
		NullCheck(L_3);
		FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853 * L_4;
		L_4 = InterfaceFuncInvoker0< FormatDetails_t66E2407A10EBE2859C428830F49442618B0BB853 * >::Invoke(7 /* UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails UnityEngine.Localization.SmartFormat.Core.Extensions.ISelectorInfo::get_FormatDetails() */, ISelectorInfo_t09A8F92112DD84298BB0E8274F10F50BA34F1091_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		SmartSettings_t6138BC2CF750123930BD4CB8BA403F9E2ECDD627 * L_5;
		L_5 = FormatDetails_get_Settings_mB9944B35BC9D263A11C41B98626A9B3848772B66(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SmartSettings_GetCaseSensitivityComparison_m53F2D447BEABB492B224620116CA6C3E66DC50B4(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_1, L_2, L_6, /*hidden argument*/NULL);
		return L_7;
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
// System.Int64 UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::get_KeyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Item_get_KeyId_m33636465F4A2709BE7C6E1F2D8E40735CF5739CF (Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5 * __this, const RuntimeMethod* method)
{
	{
		// get => m_KeyId;
		int64_t L_0 = __this->get_m_KeyId_0();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::set_KeyId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_KeyId_m372CA165C190CF956D73C76AE67027115192DDB4 (Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_KeyId = value;
		int64_t L_0 = ___value0;
		__this->set_m_KeyId_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::get_Tables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Item_get_Tables_mEFB9B026B7C7187EB3D5134148F249F37A11F602 (Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TableCodes;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_m_TableCodes_1();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::set_Tables(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Tables_m0CB4421F69EE823555E7C82A19C4EC580D37F660 (Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_TableCodes = value;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_m_TableCodes_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m4CEBCCAD94221D9BCE884DA69AB3496DCF093F64 (Item_tCEBD4BE696E7AEC8FBCE3E1F5B43069C8989ECE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<string> m_TableCodes = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_m_TableCodes_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
// System.Int64 UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedTableEntry_get_Id_m76E7DC1967E1DF86CD9CC4B8E5050C91A761A031 (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	{
		// get => m_Id;
		int64_t L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::set_Id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTableEntry_set_Id_mEC8465D11C17CD6A58129B741E0521CFBABBE14F (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set => m_Id = value;
		int64_t L_0 = ___value0;
		__this->set_m_Id_0(L_0);
		return;
	}
}
// System.String UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTableEntry_get_Key_mD04A1F7B3F414B36D6F4EAAAD31E0398FEAC2023 (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	{
		// get => m_Key;
		String_t* L_0 = __this->get_m_Key_1();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::set_Key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTableEntry_set_Key_m90D913399333B83337DCBCB9BC8B93C2D905B5BD (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal set => m_Key = value;
		String_t* L_0 = ___value0;
		__this->set_m_Key_1(L_0);
		return;
	}
}
// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::get_Metadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * SharedTableEntry_get_Metadata_m9E59A5CECC9B5C4B9DCCD8599BF08A41A5D726E4 (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	{
		// get => m_Metadata;
		MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * L_0 = __this->get_m_Metadata_2();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::set_Metadata(UnityEngine.Localization.Metadata.MetadataCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTableEntry_set_Metadata_mDE342A6B182B6457F3B84C1A7B5AE8845B2B69FC (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Metadata = value;
		MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * L_0 = ___value0;
		__this->set_m_Metadata_2(L_0);
		return;
	}
}
// System.String UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTableEntry_ToString_mDF719896E888CECF5AE1D9FED7F1B81BBEE67D02 (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{Id} - {Key}";
		int64_t L_0;
		L_0 = SharedTableEntry_get_Id_m76E7DC1967E1DF86CD9CC4B8E5050C91A761A031_inline(__this, /*hidden argument*/NULL);
		int64_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = SharedTableEntry_get_Key_mD04A1F7B3F414B36D6F4EAAAD31E0398FEAC2023_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTableEntry__ctor_m061C1F354B8649432AF9305804A0EEFDD9A11F94 (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MetadataCollection m_Metadata = new MetadataCollection();
		MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 * L_0 = (MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5 *)il2cpp_codegen_object_new(MetadataCollection_t969873F65A2F9415F2D79D49BE27B02E5BA1D0F5_il2cpp_TypeInfo_var);
		MetadataCollection__ctor_m4D1388E31851B3F421C638C8EA1A537BD73A79A0(L_0, /*hidden argument*/NULL);
		__this->set_m_Metadata_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Localization.SmartFormat.SplitListPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8451DCC14213125AB510136B6223EFD5B07F1440 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * L_0 = (U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF *)il2cpp_codegen_object_new(U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEAB959A0F991F85489FC0757179FBE3FE85108BD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.SplitListPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEAB959A0F991F85489FC0757179FBE3FE85108BD (U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList UnityEngine.Localization.SmartFormat.SplitListPool/<>c::<.cctor>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * U3CU3Ec_U3C_cctorU3Eb__3_0_m4FF1F957C91FD631FDE9600CEC23CB3A83DA5AFE (U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly ObjectPool<SplitList> s_Pool = new ObjectPool<SplitList>(() => new SplitList(), null, sl => sl.Clear());
		SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * L_0 = (SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F *)il2cpp_codegen_object_new(SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F_il2cpp_TypeInfo_var);
		SplitList__ctor_mC4F588F6ABBA686F40ADBF3C1BF74A77EF1C9638(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.SplitListPool/<>c::<.cctor>b__3_1(UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__3_1_mC03259E398B110D8FD21D97EE467A7D200F70855 (U3CU3Ec_tD9574588ECB7D2B133315AB14427EAA5810740BF * __this, SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * ___sl0, const RuntimeMethod* method)
{
	{
		// internal static readonly ObjectPool<SplitList> s_Pool = new ObjectPool<SplitList>(() => new SplitList(), null, sl => sl.Clear());
		SplitList_t426F20506F82FD8E8819BBBFAF3C5B6464497E8F * L_0 = ___sl0;
		NullCheck(L_0);
		SplitList_Clear_m1527DEAAE32A2CECE0454A2DB703BAFD36F5C5B7(L_0, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Localization.StringBuilderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B8A9ED223680D90E33945EA982AD188A3AA8AF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * L_0 = (U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 *)il2cpp_codegen_object_new(U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFFC3C3C75857C24CD50789E394CB5C77D4397F13(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFFC3C3C75857C24CD50789E394CB5C77D4397F13 (U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.StringBuilder UnityEngine.Localization.StringBuilderPool/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * U3CU3Ec_U3C_cctorU3Eb__4_0_m4A2E997621A35BF6D0F1B62BC363B9279072DF36 (U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly ObjectPool<StringBuilder> s_Pool = new ObjectPool<StringBuilder>(() => new StringBuilder(), null, sb => sb.Clear());
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Localization.StringBuilderPool/<>c::<.cctor>b__4_1(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__4_1_m77890050B39F0C75314B5AFF1C4BD4D906E44E7F (U3CU3Ec_t6189D1564EB40701AD4F10224C3368FDCEF2CAE5 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		// internal static readonly ObjectPool<StringBuilder> s_Pool = new ObjectPool<StringBuilder>(() => new StringBuilder(), null, sb => sb.Clear());
		StringBuilder_t * L_0 = ___sb0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCF7E57D77CC0D97C085BFB06D1CA4C13E3F0914D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * L_0 = (U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC *)il2cpp_codegen_object_new(U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF04470EC78DA875B34EE2D806A8D0129DC0049B2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF04470EC78DA875B34EE2D806A8D0129DC0049B2 (U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Localization.SmartFormat.Core.Output.StringOutput UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * U3CU3Ec_U3C_cctorU3Eb__4_0_m93CDFE76A133D977940AF2FEF0803CD00C8F958C (U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly ObjectPool<StringOutput> s_Pool = new ObjectPool<StringOutput>(() => new StringOutput(), null, so => so.Clear());
		StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * L_0 = (StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E *)il2cpp_codegen_object_new(StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E_il2cpp_TypeInfo_var);
		StringOutput__ctor_m87B1302FD70A5EB6CCDFA12CC73AABA9BDDBFACB(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.StringOutputPool/<>c::<.cctor>b__4_1(UnityEngine.Localization.SmartFormat.Core.Output.StringOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__4_1_m9BC46A768FF1BBD916667060935D57BCAF1346F7 (U3CU3Ec_t37D725A4E67DDFEAAE5C1BD1350081D6F24003BC * __this, StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * ___so0, const RuntimeMethod* method)
{
	{
		// internal static readonly ObjectPool<StringOutput> s_Pool = new ObjectPool<StringOutput>(() => new StringOutput(), null, so => so.Clear());
		StringOutput_t02889D76152DED30CEF3F1ED564D2EE9BE79747E * L_0 = ___so0;
		NullCheck(L_0);
		StringOutput_Clear_m7E3C91271B516BBBFF4806A7BC89C360C5E9B95F(L_0, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Localization.Tables.StringTable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m13C2C1350D1FCAAAE0C6F424868D31BB7B054389 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * L_0 = (U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 *)il2cpp_codegen_object_new(U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m401FEC8C4029051F0E26D506F3856AB6352820B7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.Tables.StringTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m401FEC8C4029051F0E26D506F3856AB6352820B7 (U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Char UnityEngine.Localization.Tables.StringTable/<>c::<GenerateCharacterSet>b__0_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CU3Ec_U3CGenerateCharacterSetU3Eb__0_0_m65E8DD768CF72A6E560E71F307CC174C547CEFC7 (U3CU3Ec_t913A939717238F67F98EFA222B1DC96F526720D0 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		// var sorted = literals.Distinct().OrderBy(c => c);
		Il2CppChar L_0 = ___c0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5B4ECBB31CF43D2DE9641C7A620426A4DF69FF24 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * L_0 = (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E *)il2cpp_codegen_object_new(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m287CAC9D675FE3A0F42878A6A712780710A50A1D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m287CAC9D675FE3A0F42878A6A712780710A50A1D (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<ResetDateTime>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  U3CU3Ec_U3CResetDateTimeU3Eb__4_0_m2ECF6D3DA83FE03CC3B0B1FF2607D7DA539266D2 (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Now = () => DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.DateTimeOffset UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<ResetDateTime>b__4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  U3CU3Ec_U3CResetDateTimeU3Eb__4_1_m0832954B62DCCDE34C84FD4D010ABD0A677ED5A5 (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OffsetNow = () => DateTimeOffset.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0;
		L_0 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.DateTime UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<.cctor>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  U3CU3Ec_U3C_cctorU3Eb__5_0_mD6F388760D3F769FA12D167A1F79034991636F8D (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<DateTime> Now = () => DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.DateTimeOffset UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c::<.cctor>b__5_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  U3CU3Ec_U3C_cctorU3Eb__5_1_mAD3E59C2401CDDE2AE2D531F5FF375D6E55E8343 (U3CU3Ec_t814827044D73BAF0CFB8F06DA4098B37DD70BD2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<DateTimeOffset> OffsetNow = () => DateTimeOffset.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0;
		L_0 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
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
// System.Void UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m7270CF242C3E536A8125E0720847BE85DBF98298 (U3CU3Ec__DisplayClass1_0_t93EA8B13CC29969A9CE10B6DEBDA61A78A122C5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0::<SetDateTime>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  U3CU3Ec__DisplayClass1_0_U3CSetDateTimeU3Eb__0_mABFE1EA30C49F3BC6A933101A6482F7A94DB56B6 (U3CU3Ec__DisplayClass1_0_t93EA8B13CC29969A9CE10B6DEBDA61A78A122C5B * __this, const RuntimeMethod* method)
{
	{
		// Now = () => dateTimeNow;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_dateTimeNow_0();
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
// System.Void UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB8A09AAE5604E5150EAC83CA31A142B124E41C8D (U3CU3Ec__DisplayClass3_0_t21E57719F75CC1C48085B0BDA01FC8F6D362B3AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTimeOffset UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0::<SetDateTimeOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  U3CU3Ec__DisplayClass3_0_U3CSetDateTimeOffsetU3Eb__0_m5FF3D516BCD9066F75BEE0F6B340E64271954BB0 (U3CU3Ec__DisplayClass3_0_t21E57719F75CC1C48085B0BDA01FC8F6D362B3AA * __this, const RuntimeMethod* method)
{
	{
		// OffsetNow = () => dateTimeOffset;
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get_dateTimeOffset_0();
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
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllFlagsU3Ed__3__ctor_mC79E9668766055ED89139D401199B8D21FC35A47 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllFlagsU3Ed__3_System_IDisposable_Dispose_m39E9DF5DCCCA61F7675F3907285F9D95EF034AD0 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAllFlagsU3Ed__3_MoveNext_m5796B61E9B5DE077039EB3C9A0548F3582A01D40 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// uint value = 0x1;
		__this->set_U3CvalueU3E5__2_5(1);
		goto IL_0059;
	}

IL_0020:
	{
		// if ((value & (uint)timeSpanFormatOptions) != 0) yield return (TimeSpanFormatOptions)value;
		uint32_t L_3 = __this->get_U3CvalueU3E5__2_5();
		int32_t L_4 = __this->get_timeSpanFormatOptions_3();
		if (!((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_004b;
		}
	}
	{
		// if ((value & (uint)timeSpanFormatOptions) != 0) yield return (TimeSpanFormatOptions)value;
		uint32_t L_5 = __this->get_U3CvalueU3E5__2_5();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004b:
	{
		// value <<= 1;
		uint32_t L_6 = __this->get_U3CvalueU3E5__2_5();
		__this->set_U3CvalueU3E5__2_5(((int32_t)((int32_t)L_6<<(int32_t)1)));
	}

IL_0059:
	{
		// while (value <= (uint)timeSpanFormatOptions)
		uint32_t L_7 = __this->get_U3CvalueU3E5__2_5();
		int32_t L_8 = __this->get_timeSpanFormatOptions_3();
		if ((!(((uint32_t)L_7) > ((uint32_t)L_8))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.Generic.IEnumerator<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CAllFlagsU3Ed__3_System_Collections_Generic_IEnumeratorU3CUnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptionsU3E_get_Current_m834F97AB6507F599EA62A558DB909BBE9D367455 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllFlagsU3Ed__3_System_Collections_IEnumerator_Reset_m23BC97A31705736A684C0498842D7A34D8824EB6 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAllFlagsU3Ed__3_System_Collections_IEnumerator_Reset_m23BC97A31705736A684C0498842D7A34D8824EB6_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAllFlagsU3Ed__3_System_Collections_IEnumerator_get_Current_mDB1A6ECDE75EC35BF98FB63BB7B9B095A75DAC68 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanFormatOptions_tE2755764F74DE68883A9F71B8D46F05E8F684554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_U3CU3E2__current_1();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(TimeSpanFormatOptions_tE2755764F74DE68883A9F71B8D46F05E8F684554_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions> UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.Generic.IEnumerable<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAllFlagsU3Ed__3_System_Collections_Generic_IEnumerableU3CUnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptionsU3E_GetEnumerator_mE081D96C0FEA4B3FA86C7DE485BC1E82FA8977E6 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * L_3 = (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D *)il2cpp_codegen_object_new(U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D_il2cpp_TypeInfo_var);
		U3CAllFlagsU3Ed__3__ctor_mC79E9668766055ED89139D401199B8D21FC35A47(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * L_4 = V_0;
		int32_t L_5 = __this->get_U3CU3E3__timeSpanFormatOptions_4();
		NullCheck(L_4);
		L_4->set_timeSpanFormatOptions_3(L_5);
		U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAllFlagsU3Ed__3_System_Collections_IEnumerable_GetEnumerator_mABC0E82E38A0F0CECE178A3E28EB632F49DBC402 (U3CAllFlagsU3Ed__3_t9A45070F34EBCFD236B29AE4F0BF74B9938F333D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CAllFlagsU3Ed__3_System_Collections_Generic_IEnumerableU3CUnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptionsU3E_GetEnumerator_mE081D96C0FEA4B3FA86C7DE485BC1E82FA8977E6(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5324F1287FFE01C82A7191D58ED3C2E36FFE0A7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * L_0 = (U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 *)il2cpp_codegen_object_new(U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB5432B7F957A54F8EA2826AA2747CD4995C02634(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5432B7F957A54F8EA2826AA2747CD4995C02634 (U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c::<.ctor>b__15_0(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__15_0_mF2768F5C27C083C8BADAF12C06A54F9F1D50AAD3 (U3CU3Ec_tC94F5AD03B031CAAA1109615AB9753ADBB35EB90 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d0, int32_t ___c1, const RuntimeMethod* method)
{
	{
		// PluralRule = (d, c) => 0;
		return 0;
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
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m796CC8445A45C51B62A1F94A4D10F3337456C62A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * L_0 = (U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 *)il2cpp_codegen_object_new(U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2516E8348B0CA893DC291F46444C34422C650782(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2516E8348B0CA893DC291F46444C34422C650782 (U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c::<GetValueTupleItemTypes>b__4_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetValueTupleItemTypesU3Eb__4_0_m67B4CE3F485F153B4A608DBBA343EF6E25080863 (U3CU3Ec_tD5513ABAE62B8F230FC883A04B70101811EA46A8 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		// public static IEnumerable<Type> GetValueTupleItemTypes(this Type tupleType) => GetValueTupleItemFields(tupleType).Select(f => f.FieldType);
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		return L_1;
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
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mCD83480D1DCDD9B9EE907648ACEA54EEB8FFFBE8 (U3CU3Ec__DisplayClass3_0_tA95895DE85B643E7590508A692C1B5C6AF965741 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0::<GetValueTupleItemObjects>b__0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CGetValueTupleItemObjectsU3Eb__0_m36D51665A280D9E532A3D624ACF0A9C093FD3DF6 (U3CU3Ec__DisplayClass3_0_tA95895DE85B643E7590508A692C1B5C6AF965741 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		// public static IEnumerable<object> GetValueTupleItemObjects(this object tuple) => GetValueTupleItemFields(tuple.GetType()).Select(f => f.GetValue(tuple));
		FieldInfo_t * L_0 = ___f0;
		RuntimeObject * L_1 = __this->get_tuple_0();
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6__ctor_m94D640E72399278FB38D2B7F29F75B1F0CA36F51 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_IDisposable_Dispose_mEF8BA3541EE83DF58DDA01D3F9D48C8C8D1B2C16 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x31, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally2_mCE042CF18B38FD95AD257D4E260F94B93BF2EC02(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(35)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally1_m9877E17B9198F9C02A23C4CB3AE04630693F8394(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetValueTupleItemObjectsFlattenedU3Ed__6_MoveNext_m84084FD0162E6D18C7FC22EA047A4D9C80A44231 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleExtensions_t766DBDC6D2D2DE2BF99007F81E241C8E2158F465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_0097;
				}
				case 2:
				{
					goto IL_00cd;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_00fd;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var theTuple in tuple.GetValueTupleItemObjects())
			RuntimeObject * L_2 = __this->get_tuple_3();
			IL2CPP_RUNTIME_CLASS_INIT(TupleExtensions_t766DBDC6D2D2DE2BF99007F81E241C8E2158F465_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = TupleExtensions_GetValueTupleItemObjects_mEA68F1F52977AED974351FE3FF03A1FFDC8A04F5(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00d5;
		}

IL_004a:
		{
			// foreach (var theTuple in tuple.GetValueTupleItemObjects())
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// if (theTuple.IsValueTuple())
			RuntimeObject * L_7 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(TupleExtensions_t766DBDC6D2D2DE2BF99007F81E241C8E2158F465_il2cpp_TypeInfo_var);
			bool L_8;
			L_8 = TupleExtensions_IsValueTuple_m717EBC13A25564B8655C6B73449E96C394424B04(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00bb;
			}
		}

IL_005e:
		{
			// foreach (var innerTuple in theTuple.GetValueTupleItemObjectsFlattened())
			RuntimeObject * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(TupleExtensions_t766DBDC6D2D2DE2BF99007F81E241C8E2158F465_il2cpp_TypeInfo_var);
			RuntimeObject* L_10;
			L_10 = TupleExtensions_GetValueTupleItemObjectsFlattened_m1F1B05CFB938AB4AEAEF5EB338489915BCE858F4(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_6(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_009f;
		}

IL_0079:
		{
			// foreach (var innerTuple in theTuple.GetValueTupleItemObjectsFlattened())
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_6();
			NullCheck(L_12);
			RuntimeObject * L_13;
			L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_12);
			V_3 = L_13;
			// yield return innerTuple;
			RuntimeObject * L_14 = V_3;
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00fd;
		}

IL_0097:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_009f:
		{
			// foreach (var innerTuple in theTuple.GetValueTupleItemObjectsFlattened())
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap2_6();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0079;
			}
		}

IL_00ac:
		{
			U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally2_mCE042CF18B38FD95AD257D4E260F94B93BF2EC02(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_6((RuntimeObject*)NULL);
			// }
			goto IL_00d5;
		}

IL_00bb:
		{
			// yield return theTuple;
			RuntimeObject * L_17 = V_2;
			__this->set_U3CU3E2__current_1(L_17);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00fd;
		}

IL_00cd:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00d5:
		{
			// foreach (var theTuple in tuple.GetValueTupleItemObjects())
			RuntimeObject* L_18 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_004a;
			}
		}

IL_00e5:
		{
			U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally1_m9877E17B9198F9C02A23C4CB3AE04630693F8394(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00fd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00f6;
	}

FAULT_00f6:
	{ // begin fault (depth: 1)
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_IDisposable_Dispose_mEF8BA3541EE83DF58DDA01D3F9D48C8C8D1B2C16(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(246)
	} // end fault
	IL2CPP_CLEANUP(246)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fd:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally1_m9877E17B9198F9C02A23C4CB3AE04630693F8394 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_U3CU3Em__Finally2_mCE042CF18B38FD95AD257D4E260F94B93BF2EC02 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0AF9C1B1C26600F25D84B6931F63CD499F2B8A4F (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_IEnumerator_Reset_m863625F5B6D8876CC1A3482B593A4A8309B78BD8 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_IEnumerator_Reset_m863625F5B6D8876CC1A3482B593A4A8309B78BD8_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_IEnumerator_get_Current_m0050F0788FAAE7B7B081A55C2C212D23DCBD91CD (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m1C58CDFBCA96372D3791B8A0EA6A608ACB3A10D8 (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * L_3 = (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 *)il2cpp_codegen_object_new(U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2_il2cpp_TypeInfo_var);
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6__ctor_m94D640E72399278FB38D2B7F29F75B1F0CA36F51(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_U3CU3E3__tuple_4();
		NullCheck(L_4);
		L_4->set_tuple_3(L_5);
		U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_IEnumerable_GetEnumerator_m90C5C28D8957DE4C74F31853DCD9B7C99B4E832F (U3CGetValueTupleItemObjectsFlattenedU3Ed__6_t8B0DB9EB49D98CD7E327742CC8147FF3513935E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetValueTupleItemObjectsFlattenedU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m1C58CDFBCA96372D3791B8A0EA6A608ACB3A10D8(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m2C2F599BE9F53FCBCAFC5F08EFF7184139C6D975 (U3CU3Ec__DisplayClass1_0_t88989E2B6DAA8E41F6AC01BFBE7CF39BFA379B51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0::<TryEvaluateSelector>b__0(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CTryEvaluateSelectorU3Eb__0_mA394F9CA10D7FA7965452CE3A1F566117926B959 (U3CU3Ec__DisplayClass1_0_t88989E2B6DAA8E41F6AC01BFBE7CF39BFA379B51 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___x0, const RuntimeMethod* method)
{
	{
		// .Where(x => x.Name.LocalName == selector).ToList();
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___x0;
		NullCheck(L_0);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1;
		L_1 = XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_selector_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m97310B67540746C8B540DFEDC3E9DE72806E7A72 (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_mB847E7FBCF88C8C1C9D9527B3291A4BECEF05C78 (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__4_MoveNext_m5E2929D83667369484406150A8DDBF8E449CB3F6 (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = m_From; i < m_To; ++i)
		PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586 * L_3 = __this->get_address_of_U3CU3E4__this_2();
		int32_t L_4 = L_3->get_m_From_1();
		__this->set_U3CiU3E5__2_3(L_4);
		goto IL_0066;
	}

IL_002a:
	{
		// yield return m_BaseString[i];
		PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586 * L_5 = __this->get_address_of_U3CU3E4__this_2();
		String_t* L_6 = L_5->get_m_BaseString_0();
		int32_t L_7 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = m_From; i < m_To; ++i)
		int32_t L_9 = __this->get_U3CiU3E5__2_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_1;
		__this->set_U3CiU3E5__2_3(L_10);
	}

IL_0066:
	{
		// for (int i = m_From; i < m_To; ++i)
		int32_t L_11 = __this->get_U3CiU3E5__2_3();
		PartialCharEnumerator_tFF688D7D308D094A1CF656C5B83CD77765351586 * L_12 = __this->get_address_of_U3CU3E4__this_2();
		int32_t L_13 = L_12->get_m_To_2();
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Char UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::System.Collections.Generic.IEnumerator<System.Char>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CGetEnumeratorU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_CharU3E_get_Current_mEBD76FFBDAF2C7D8557777063697382D65F2162E (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m0FB2C58F5E9DEF0D92D936678D88C4CB864A1E2B (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m0FB2C58F5E9DEF0D92D936678D88C4CB864A1E2B_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_get_Current_m4D69EC84A13129817A8D41E3C5C26825F4D8CC54 (U3CGetEnumeratorU3Ed__4_t2745D8C980B737DDBE34EFF2B6223971CD949865 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = __this->get_U3CU3E2__current_1();
		Il2CppChar L_1 = L_0;
		RuntimeObject * L_2 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTableEntry_get_Id_m76E7DC1967E1DF86CD9CC4B8E5050C91A761A031_inline (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	{
		// get => m_Id;
		int64_t L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTableEntry_get_Key_mD04A1F7B3F414B36D6F4EAAAD31E0398FEAC2023_inline (SharedTableEntry_tF52A697114343CFD6DD566A7B600E1D4B860552B * __this, const RuntimeMethod* method)
{
	{
		// get => m_Key;
		String_t* L_0 = __this->get_m_Key_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
