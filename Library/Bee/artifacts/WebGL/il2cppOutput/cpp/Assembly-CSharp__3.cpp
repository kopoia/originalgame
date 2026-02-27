#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct MethodInfo_t;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B;
struct GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871;
struct PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69;
struct PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD;
struct TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482;
struct fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0;
struct fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9;
struct fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51;
struct perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2;
struct thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9;
struct tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57;
struct velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4;
struct voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D;
struct windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E;

IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69  : public RuntimeObject
{
	int32_t ___id;
	float ___dist;
};
struct PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD  : public RuntimeObject
{
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___p_noiseValues;
	float ___p_amplitude;
	int32_t ___p_frequency;
};
struct fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___hydraulicIterations;
	float ___hydraulicMaxSlope;
	float ___hydraulicFalloff;
};
struct fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9  : public RuntimeObject
{
	String_t* ___presetName;
	float ___diamondSquareDelta;
	float ___diamondSquareBlend;
};
struct fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___hydraulicIterations;
	float ___hydraulicRainfall;
	float ___hydraulicEvaporation;
	float ___hydraulicSedimentSolubility;
	float ___hydraulicSedimentSaturation;
};
struct perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___perlinFrequency;
	float ___perlinAmplitude;
	int32_t ___perlinOctaves;
	float ___perlinBlend;
};
struct thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___thermalIterations;
	float ___thermalMinSlope;
	float ___thermalFalloff;
};
struct tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___tidalIterations;
	float ___tidalRangeAmount;
	float ___tidalCliffLimit;
};
struct velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___hydraulicIterations;
	float ___hydraulicVelocityRainfall;
	float ___hydraulicVelocityEvaporation;
	float ___hydraulicVelocitySedimentSolubility;
	float ___hydraulicVelocitySedimentSaturation;
	float ___hydraulicVelocity;
	float ___hydraulicMomentum;
	float ___hydraulicEntropy;
	float ___hydraulicDowncutting;
};
struct windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___windIterations;
	float ___windDirection;
	float ___windForce;
	float ___windLift;
	float ___windGravity;
	float ___windCapacity;
	float ___windEntropy;
	float ___windSmoothing;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3374_tCB74705C50E40ED9EE7FBB861D0FC63BE5FECA0D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3374_tCB74705C50E40ED9EE7FBB861D0FC63BE5FECA0D__padding[3374];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5001_t89F3287597F6435B1661543A93BB63282FFE857F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5001_t89F3287597F6435B1661543A93BB63282FFE857F__padding[5001];
	};
};
#pragma pack(pop, tp)
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct ErosionMode_tD800C3B5485147DF664E6327DB1BEFE909A5FF9A 
{
	int32_t ___value__;
};
struct ErosionType_tC30419513579D020E3592EFD3BF54AFD69A4BB81 
{
	int32_t ___value__;
};
struct FeatureType_tF309EC24FCA36C560F4DA85F1A912B4450F3400E 
{
	int32_t ___value__;
};
struct GeneratorType_t22F9A355640721617259FC2AB080C87C5C91300A 
{
	int32_t ___value__;
};
struct HydraulicType_t0004125A0EBA6DE546951064C956CFDE9790CE1A 
{
	int32_t ___value__;
};
struct Neighbourhood_tCBC27AEEE70C6951C41C39DC36358477E7849903 
{
	int32_t ___value__;
};
struct Peak_t1A1C2B73032A62FBF295DBBF73E31D041A72CDE8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___peakPoint;
	float ___peakHeight;
};
struct ToolMode_t915686C2155051E8BBA17A02082A747BE713008F 
{
	int32_t ___value__;
};
struct VoronoiType_tC94D1B79C9D01CCBEB15DB6DC08069770F72FB1D 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D  : public RuntimeObject
{
	String_t* ___presetName;
	int32_t ___p_voronoiType;
	int32_t ___voronoiCells;
	float ___voronoiFeatures;
	float ___voronoiScale;
	float ___voronoiBlend;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B  : public MulticastDelegate_t
{
};
struct GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871  : public MulticastDelegate_t
{
};
struct TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482  : public MulticastDelegate_t
{
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D3374_tCB74705C50E40ED9EE7FBB861D0FC63BE5FECA0D ___59ACBC9E5031AD89D21A2025A65689B81D858DDFD8A6B3CEF07CBA24E24CE900;
	__StaticArrayInitTypeSizeU3D5001_t89F3287597F6435B1661543A93BB63282FFE857F ___75CCBFE08CBB81C21CC3306A7AED30CDD482C827F977AAD7C7778AF1ECE6B7A3;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, double ___0_Pa, double ___1_Pb, double ___2_Px, const RuntimeMethod* method) ;
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
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Multicast(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* currentDelegate = reinterpret_cast<ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_titleString, ___1_displayString, ___2_iteration, ___3_nIterations, ___4_percentComplete, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenInst(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_iteration, ___3_nIterations, ___4_percentComplete, method);
}
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenStatic(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_iteration, ___3_nIterations, ___4_percentComplete, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_titleString_marshaled = NULL;
	____0_titleString_marshaled = il2cpp_codegen_marshal_string(___0_titleString);

	char* ____1_displayString_marshaled = NULL;
	____1_displayString_marshaled = il2cpp_codegen_marshal_string(___1_displayString);

	il2cppPInvokeFunc(____0_titleString_marshaled, ____1_displayString_marshaled, ___2_iteration, ___3_nIterations, ___4_percentComplete);

	il2cpp_codegen_marshal_free(____0_titleString_marshaled);
	____0_titleString_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_displayString_marshaled);
	____1_displayString_marshaled = NULL;

}
// Method Definition Index: 21969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate__ctor_m132F272BAA5236A82DFF5A8025F8BF18006F209D (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Multicast;
}
// Method Definition Index: 21970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_titleString, ___1_displayString, ___2_iteration, ___3_nIterations, ___4_percentComplete, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 21971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErosionProgressDelegate_BeginInvoke_mD1D92762000CD3BC634394A0F789599B1AC92981 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___0_titleString, String_t* ___1_displayString, int32_t ___2_iteration, int32_t ___3_nIterations, float ___4_percentComplete, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_titleString;
	__d_args[1] = ___1_displayString;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_iteration);
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___3_nIterations);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___4_percentComplete);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// Method Definition Index: 21972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate_EndInvoke_m18264B264C198B061DDC8D8C7827149A9DF968E3 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Multicast(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* currentDelegate = reinterpret_cast<TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_titleString, ___1_displayString, ___2_percentComplete, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenInst(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_percentComplete, method);
}
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenStatic(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_percentComplete, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482 (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_titleString_marshaled = NULL;
	____0_titleString_marshaled = il2cpp_codegen_marshal_string(___0_titleString);

	char* ____1_displayString_marshaled = NULL;
	____1_displayString_marshaled = il2cpp_codegen_marshal_string(___1_displayString);

	il2cppPInvokeFunc(____0_titleString_marshaled, ____1_displayString_marshaled, ___2_percentComplete);

	il2cpp_codegen_marshal_free(____0_titleString_marshaled);
	____0_titleString_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_displayString_marshaled);
	____1_displayString_marshaled = NULL;

}
// Method Definition Index: 21973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate__ctor_m19E10770AFA66903879D76F4A58303181F8B8FFB (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Multicast;
}
// Method Definition Index: 21974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_titleString, ___1_displayString, ___2_percentComplete, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 21975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureProgressDelegate_BeginInvoke_m3E192A432E320E07283754E78C8BF3432A625EF3 (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_titleString;
	__d_args[1] = ___1_displayString;
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_percentComplete);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 21976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate_EndInvoke_m9BD09AFDBBF0698D5F9F88BF1F27E22A7BD2170D (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Multicast(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* currentDelegate = reinterpret_cast<GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_titleString, ___1_displayString, ___2_percentComplete, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenInst(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_percentComplete, method);
}
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenStatic(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_titleString, ___1_displayString, ___2_percentComplete, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_titleString_marshaled = NULL;
	____0_titleString_marshaled = il2cpp_codegen_marshal_string(___0_titleString);

	char* ____1_displayString_marshaled = NULL;
	____1_displayString_marshaled = il2cpp_codegen_marshal_string(___1_displayString);

	il2cppPInvokeFunc(____0_titleString_marshaled, ____1_displayString_marshaled, ___2_percentComplete);

	il2cpp_codegen_marshal_free(____0_titleString_marshaled);
	____0_titleString_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_displayString_marshaled);
	____1_displayString_marshaled = NULL;

}
// Method Definition Index: 21977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate__ctor_m65515E579E6789B5B69A1405F09E73A431F70223 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Multicast;
}
// Method Definition Index: 21978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_titleString, ___1_displayString, ___2_percentComplete, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 21979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeneratorProgressDelegate_BeginInvoke_mFFA5E2B2CA2A9FE7A2560718DC69CD7B95296997 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___0_titleString, String_t* ___1_displayString, float ___2_percentComplete, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_titleString;
	__d_args[1] = ___1_displayString;
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_percentComplete);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 21980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate_EndInvoke_m452BD54385A29FAD25A0DD6479FF7FD4437A57CB (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 21981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeakDistance_CompareTo_mB182EAA2301192A08E384F45205112808FB64675 (PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* V_0 = NULL;
	int32_t V_1 = 0;
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3153>
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69*)CastclassClass((RuntimeObject*)L_0, PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var));
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3155>
		float* L_1 = (float*)(&__this->___dist);
		PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* L_2 = V_0;
		float L_3 = L_2->___dist;
		int32_t L_4;
		L_4 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_1, L_3, NULL);
		V_1 = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3157>
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3157>
		float* L_6 = (float*)(&__this->___dist);
		PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* L_7 = V_0;
		float L_8 = L_7->___dist;
		int32_t L_9;
		L_9 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_8, NULL);
		V_1 = L_9;
	}

IL_002e:
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3159>
		int32_t L_10 = V_1;
		return L_10;
	}
}
// Method Definition Index: 21982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeakDistance__ctor_m9CD2B070E23281025FC7F496F5C7786D1C4CD21C (PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 21983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voronoiPresetData__ctor_m0D0EB67A403D495B5C32EFD6D7867EE5AAD70220 (voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D* __this, String_t* ___0_pn, int32_t ___1_vt, int32_t ___2_c, float ___3_vf, float ___4_vs, float ___5_vb, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3194>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3195>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3196>
		int32_t L_1 = ___1_vt;
		__this->___p_voronoiType = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3197>
		int32_t L_2 = ___2_c;
		__this->___voronoiCells = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3198>
		float L_3 = ___3_vf;
		__this->___voronoiFeatures = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3199>
		float L_4 = ___4_vs;
		__this->___voronoiScale = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3200>
		float L_5 = ___5_vb;
		__this->___voronoiBlend = L_5;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3201>
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
// Method Definition Index: 21984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fractalPresetData__ctor_m75C4C7962F270D1FB220FB19398FA2860EB1F5E0 (fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9* __this, String_t* ___0_pn, float ___1_dsd, float ___2_dsb, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3237>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3238>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3239>
		float L_1 = ___1_dsd;
		__this->___diamondSquareDelta = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3240>
		float L_2 = ___2_dsb;
		__this->___diamondSquareBlend = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3241>
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
// Method Definition Index: 21985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perlinPresetData__ctor_mA2DD413BEF15E33ED6BBBD0049AABBBAE338EDC2 (perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2* __this, String_t* ___0_pn, int32_t ___1_pf, float ___2_pa, int32_t ___3_po, float ___4_pb, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3279>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3280>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3281>
		int32_t L_1 = ___1_pf;
		__this->___perlinFrequency = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3282>
		float L_2 = ___2_pa;
		__this->___perlinAmplitude = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3283>
		int32_t L_3 = ___3_po;
		__this->___perlinOctaves = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3284>
		float L_4 = ___4_pb;
		__this->___perlinBlend = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3285>
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
// Method Definition Index: 21986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thermalErosionPresetData__ctor_m4346746DE88F3F82CF637FCE751F48E143D27F26 (thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9* __this, String_t* ___0_pn, int32_t ___1_ti, float ___2_tms, float ___3_tba, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3322>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3323>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3324>
		int32_t L_1 = ___1_ti;
		__this->___thermalIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3325>
		float L_2 = ___2_tms;
		__this->___thermalMinSlope = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3326>
		float L_3 = ___3_tba;
		__this->___thermalFalloff = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3327>
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
// Method Definition Index: 21987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fastHydraulicErosionPresetData__ctor_mDD306D0F7CE0D02FB41FB59C8B3851859429CA33 (fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0* __this, String_t* ___0_pn, int32_t ___1_hi, float ___2_hms, float ___3_hba, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3364>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3365>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3366>
		int32_t L_1 = ___1_hi;
		__this->___hydraulicIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3367>
		float L_2 = ___2_hms;
		__this->___hydraulicMaxSlope = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3368>
		float L_3 = ___3_hba;
		__this->___hydraulicFalloff = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3369>
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
// Method Definition Index: 21988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fullHydraulicErosionPresetData__ctor_m98805C526E404DA7EC42C3F4EC119B709E0C3881 (fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51* __this, String_t* ___0_pn, int32_t ___1_hi, float ___2_hr, float ___3_he, float ___4_hso, float ___5_hsa, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3408>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3409>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3410>
		int32_t L_1 = ___1_hi;
		__this->___hydraulicIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3411>
		float L_2 = ___2_hr;
		__this->___hydraulicRainfall = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3412>
		float L_3 = ___3_he;
		__this->___hydraulicEvaporation = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3413>
		float L_4 = ___4_hso;
		__this->___hydraulicSedimentSolubility = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3414>
		float L_5 = ___5_hsa;
		__this->___hydraulicSedimentSaturation = L_5;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3415>
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
// Method Definition Index: 21989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void velocityHydraulicErosionPresetData__ctor_mD19B51EB2C9C6E4FBBB673962BE5A05E953AD865 (velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4* __this, String_t* ___0_pn, int32_t ___1_hi, float ___2_hvr, float ___3_hve, float ___4_hso, float ___5_hsa, float ___6_hv, float ___7_hm, float ___8_he, float ___9_hd, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3458>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3459>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3460>
		int32_t L_1 = ___1_hi;
		__this->___hydraulicIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3461>
		float L_2 = ___2_hvr;
		__this->___hydraulicVelocityRainfall = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3462>
		float L_3 = ___3_hve;
		__this->___hydraulicVelocityEvaporation = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3463>
		float L_4 = ___4_hso;
		__this->___hydraulicVelocitySedimentSolubility = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3464>
		float L_5 = ___5_hsa;
		__this->___hydraulicVelocitySedimentSaturation = L_5;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3465>
		float L_6 = ___6_hv;
		__this->___hydraulicVelocity = L_6;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3466>
		float L_7 = ___7_hm;
		__this->___hydraulicMomentum = L_7;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3467>
		float L_8 = ___8_he;
		__this->___hydraulicEntropy = L_8;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3468>
		float L_9 = ___9_hd;
		__this->___hydraulicDowncutting = L_9;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3469>
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
// Method Definition Index: 21990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tidalErosionPresetData__ctor_mF18C35D402E88359592BA76ED66CCF94439CF342 (tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57* __this, String_t* ___0_pn, int32_t ___1_ti, float ___2_tra, float ___3_tcl, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3506>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3507>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3508>
		int32_t L_1 = ___1_ti;
		__this->___tidalIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3509>
		float L_2 = ___2_tra;
		__this->___tidalRangeAmount = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3510>
		float L_3 = ___3_tcl;
		__this->___tidalCliffLimit = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3511>
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
// Method Definition Index: 21991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void windErosionPresetData__ctor_mA8140B2AA6977AA24F3C2D3CB1F29A9BAFFA4EF5 (windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E* __this, String_t* ___0_pn, int32_t ___1_wi, float ___2_wd, float ___3_wf, float ___4_wl, float ___5_wg, float ___6_wc, float ___7_we, float ___8_ws, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3553>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3554>
		String_t* L_0 = ___0_pn;
		__this->___presetName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName), (void*)L_0);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3555>
		int32_t L_1 = ___1_wi;
		__this->___windIterations = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3556>
		float L_2 = ___2_wd;
		__this->___windDirection = L_2;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3557>
		float L_3 = ___3_wf;
		__this->___windForce = L_3;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3558>
		float L_4 = ___4_wl;
		__this->___windLift = L_4;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3559>
		float L_5 = ___5_wg;
		__this->___windGravity = L_5;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3560>
		float L_6 = ___6_wc;
		__this->___windCapacity = L_6;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3561>
		float L_7 = ___7_we;
		__this->___windEntropy = L_7;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3562>
		float L_8 = ___8_ws;
		__this->___windSmoothing = L_8;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3563>
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
// Method Definition Index: 21992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerlinNoise2D__ctor_m4E453EB11C8CF39C3903995CF6EC18DD9C175281 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, int32_t ___0_freq, float ___1__amp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3592>
		__this->___p_amplitude = (1.0f);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3593>
		__this->___p_frequency = 1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3599>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3600>
		int32_t L_0;
		L_0 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3601>
		int32_t L_2 = ___0_freq;
		int32_t L_3 = ___0_freq;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_5);
		__this->___p_noiseValues = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_noiseValues), (void*)L_4);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3602>
		float L_6 = ___1__amp;
		__this->___p_amplitude = L_6;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3603>
		int32_t L_7 = ___0_freq;
		__this->___p_frequency = L_7;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3604>
		V_1 = 0;
		goto IL_0065;
	}

IL_0042:
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3605>
		V_2 = 0;
		goto IL_005d;
	}

IL_0046:
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3606>
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = __this->___p_noiseValues;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = V_0;
		double L_12;
		L_12 = VirtualFuncInvoker0< double >::Invoke(8, L_11);
		(L_8)->SetAtUnchecked(L_9, L_10, L_12);
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3605>
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005d:
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3605>
		int32_t L_14 = V_2;
		int32_t L_15 = ___0_freq;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3604>
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3604>
		int32_t L_17 = V_1;
		int32_t L_18 = ___0_freq;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3609>
		return;
	}
}
// Method Definition Index: 21993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_getInterpolatedPoint_m2B88A3D7FA705AEBFB178E0A1821948EDBB9A47D (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, int32_t ___0__xa, int32_t ___1__xb, int32_t ___2__ya, int32_t ___3__yb, double ___4_Px, double ___5_Py, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3616>
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___p_noiseValues;
		int32_t L_1 = ___0__xa;
		int32_t L_2;
		L_2 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline(__this, NULL);
		int32_t L_3 = ___2__ya;
		int32_t L_4 = __this->___p_frequency;
		double L_5;
		L_5 = (L_0)->GetAtUnchecked(((int32_t)(L_1%L_2)), ((int32_t)(L_3%L_4)));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_6 = __this->___p_noiseValues;
		int32_t L_7 = ___1__xb;
		int32_t L_8;
		L_8 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline(__this, NULL);
		int32_t L_9 = ___2__ya;
		int32_t L_10 = __this->___p_frequency;
		double L_11;
		L_11 = (L_6)->GetAtUnchecked(((int32_t)(L_7%L_8)), ((int32_t)(L_9%L_10)));
		double L_12 = ___4_Px;
		double L_13;
		L_13 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_5, L_11, L_12, NULL);
		V_0 = L_13;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3617>
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_14 = __this->___p_noiseValues;
		int32_t L_15 = ___0__xa;
		int32_t L_16;
		L_16 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline(__this, NULL);
		int32_t L_17 = ___3__yb;
		int32_t L_18 = __this->___p_frequency;
		double L_19;
		L_19 = (L_14)->GetAtUnchecked(((int32_t)(L_15%L_16)), ((int32_t)(L_17%L_18)));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_20 = __this->___p_noiseValues;
		int32_t L_21 = ___1__xb;
		int32_t L_22;
		L_22 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline(__this, NULL);
		int32_t L_23 = ___3__yb;
		int32_t L_24 = __this->___p_frequency;
		double L_25;
		L_25 = (L_20)->GetAtUnchecked(((int32_t)(L_21%L_22)), ((int32_t)(L_23%L_24)));
		double L_26 = ___4_Px;
		double L_27;
		L_27 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_19, L_25, L_26, NULL);
		V_1 = L_27;
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3618>
		double L_28 = V_0;
		double L_29 = V_1;
		double L_30 = ___5_Py;
		double L_31;
		L_31 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_28, L_29, L_30, NULL);
		return L_31;
	}
}
// Method Definition Index: 21994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, double ___0_Pa, double ___1_Pb, double ___2_Px, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3626>
		double L_0 = ___2_Px;
		V_0 = ((double)il2cpp_codegen_multiply(L_0, (3.1415927410125732)));
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3627>
		double L_1 = V_0;
		float L_2;
		L_2 = cosf(((float)L_1));
		V_1 = ((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_subtract((1.0f), L_2))), (0.5)));
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3628>
		double L_3 = ___0_Pa;
		double L_4 = V_1;
		double L_5 = ___1_Pb;
		double L_6 = V_1;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_3, ((double)il2cpp_codegen_subtract((1.0), L_4)))), ((double)il2cpp_codegen_multiply(L_5, L_6))));
	}
}
// Method Definition Index: 21995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerlinNoise2D_get_Amplitude_m696A42745CBE5733B812F6191CE1352F043E018F (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3637>
		float L_0 = __this->___p_amplitude;
		return L_0;
	}
}
// Method Definition Index: 21996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3647>
		int32_t L_0 = __this->___p_frequency;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 21996
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3_inline (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/yuuic/Desktop/UnityProjects/OriginalRPG/Assets/com/heparo/terrain/toolkit/scripts/TerrainToolkit.cs:3647>
		int32_t L_0 = __this->___p_frequency;
		return L_0;
	}
}
