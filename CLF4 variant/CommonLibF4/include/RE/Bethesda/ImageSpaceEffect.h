#pragma once

#include "RE/NetImmerse/NiTArray.h"

namespace RE
{
	namespace BSGraphics
	{
		enum class TextureAddressMode;
		enum class TextureFilterMode;
	}

	class BSTriShape;
	class ImageSpaceEffectParam;
	class ImageSpaceManager;
	class ImageSpaceTexture;
	class NiTexture;

	class ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffect };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffect };

		struct EffectDesc
		{
		public:
			// members
			std::uint32_t startEffect;       // 00
			std::uint32_t lastEffect;        // 04
			ImageSpaceEffect* parentEffect;  // 08
			std::uint64_t labelWait;         // 10
			std::uint64_t* writeLabel;       // 18
		};
		static_assert(sizeof(EffectDesc) == 0x20);

		struct EffectInput
		{
		public:
			// members
			std::int32_t texIndex;                     // 00
			BSGraphics::TextureFilterMode filterMode;  // 04
		};
		static_assert(sizeof(EffectInput) == 0x08);

		virtual ~ImageSpaceEffect();  // 00

		// add
		virtual void Render(BSTriShape* a_geometry, ImageSpaceEffectParam* a_param);                                                   // 01
		virtual void Dispatch(ImageSpaceEffectParam* a_param, bool a_useAsyncPipe, std::uint32_t a_effect, EffectDesc* a_effectDesc);  // 02
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param);                                              // 03
		virtual void Shutdown();                                                                                                       // 04
		virtual void BorrowTextures(ImageSpaceEffectParam* a_param);                                                                   // 05
		virtual void ReturnTextures();                                                                                                 // 06
		virtual void UpdateComputeShaderParam(std::uint32_t a_effect);                                                                 // 07
		virtual bool IsActive();                                                                                                       // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param);                                                                     // 09
		virtual bool SetRenderStates(ImageSpaceEffectParam* a_param);                                                                  // 0A
		virtual bool RestoreRenderStates(ImageSpaceEffectParam* a_param);                                                              // 0B

		// members
		bool isActive;                                              // 08
		bool paramsChanged;                                         // 09
		NiTPrimitiveArray<ImageSpaceEffect*> effectList;            // 10
		NiTPrimitiveArray<ImageSpaceEffectParam*> effectParamList;  // 28
		NiTPrimitiveArray<ImageSpaceTexture*> textures;             // 40
		NiTPrimitiveArray<ImageSpaceTexture*> vsTextures;           // 58
		NiTPrimitiveArray<EffectInput*> effectInputs;               // 70
		NiTPrimitiveArray<std::int32_t*> effectOutput;              // 88
		bool isComputeShader;                                       // A0
		std::uint32_t nbOutput;                                     // A4
		bool useDynamicResolution;                                  // A8
	};
	static_assert(sizeof(ImageSpaceEffect) == 0xB0);

	class ImageSpaceTexture
	{
	public:
		// members
		bool forceAniso;                           // 00
		NiTexture* texture;                        // 08
		std::int32_t renderTarget;                 // 10
		std::int32_t depthBuffer;                  // 14
		std::int32_t stencilBuffer;                // 18
		BSGraphics::TextureFilterMode filterMode;  // 1C
		BSGraphics::TextureAddressMode clampMode;  // 20
		bool acquiredTarget;                       // 24
	};
	static_assert(sizeof(ImageSpaceTexture) == 0x28);

	class ImageSpaceEffectFullScreenBlur :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectFullScreenBlur };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectFullScreenBlur };

		virtual ~ImageSpaceEffectFullScreenBlur();  // 00

		// override (ImageSpaceEffect)
		virtual void Render(BSTriShape* a_geometry, ImageSpaceEffectParam* a_param) override;       // 01
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual void BorrowTextures(ImageSpaceEffectParam* a_param) override;                       // 05
		virtual void ReturnTextures() override;                                                     // 06
		virtual bool IsActive() override;                                                           // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09

		inline static REL::Relocation<bool*> bDisable{ REL::ID(372489) };

		// members
		ImageSpaceTexture buffer[3];  // B0
	};
	static_assert(sizeof(ImageSpaceEffectFullScreenBlur) == 0x128);

	class ImageSpaceEffectGetHit :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectGetHit };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectGetHit };

		virtual ~ImageSpaceEffectGetHit();  // 00

		// override (ImageSpaceEffect)
		virtual void Render(BSTriShape* a_geometry, ImageSpaceEffectParam* a_param) override;       // 01
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual void BorrowTextures(ImageSpaceEffectParam* a_param) override;                       // 05
		virtual void ReturnTextures() override;                                                     // 06
		virtual bool IsActive() override;                                                           // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09

		inline static REL::Relocation<bool*> bDisable{ REL::ID(1523708) };

		// members
		float* data;                  // B0
		ImageSpaceTexture buffer[2];  // B8
	};
	static_assert(sizeof(ImageSpaceEffectGetHit) == 0x108);

	class ImageSpaceEffectMotionBlur :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectMotionBlur };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectMotionBlur };

		virtual ~ImageSpaceEffectMotionBlur();  // 00

		// override (ImageSpaceEffect)
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual bool IsActive() override;                                                           // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09
	};
	static_assert(sizeof(ImageSpaceEffectMotionBlur) == 0xB0);

	class ImageSpaceEffectPipboyScreen :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectPipboyScreen };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectPipboyScreen };

		virtual ~ImageSpaceEffectPipboyScreen();  // 00

		// override (ImageSpaceEffect)
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual void ReturnTextures() override;                                                     // 06
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09

		inline static REL::Relocation<bool*> bPowerArmorPipboy{ REL::ID(1065542) };

		// members
		NiPointer<NiTexture> scanlineTexture;  // B0
		NiPointer<NiTexture> vScanTexture;     // B8
	};
	static_assert(sizeof(ImageSpaceEffectPipboyScreen) == 0xC0);

	class ImageSpaceEffectRadialBlur :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectRadialBlur };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectRadialBlur };

		virtual ~ImageSpaceEffectRadialBlur();  // 00

		// override (ImageSpaceEffect)
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual bool IsActive() override;                                                           // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09

		inline static REL::Relocation<bool*> bDisable{ REL::ID(1500590) };
	};
	static_assert(sizeof(ImageSpaceEffectRadialBlur) == 0xB0);

	class ImageSpaceEffectTemporalAA :
		public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectTemporalAA };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectTemporalAA };

		virtual ~ImageSpaceEffectTemporalAA();  // 00

		// override (ImageSpaceEffect)
		virtual void Render(BSTriShape* a_geometry, ImageSpaceEffectParam* a_param) override;       // 01
		virtual void Setup(ImageSpaceManager* a_manager, ImageSpaceEffectParam* a_param) override;  // 03
		virtual bool IsActive() override;                                                           // 08
		virtual bool UpdateParams(ImageSpaceEffectParam* a_param) override;                         // 09

		inline static REL::Relocation<std::uint32_t*> MaskS{ REL::ID(775377) };

		// members
		float previousInvTexSizeX;         // B0
		float previousInvTexSizeY;         // B4
		float previousDynamicWidthRatio;   // B8
		float previousDynamicHeightRatio;  // BC
	};
	static_assert(sizeof(ImageSpaceEffectTemporalAA) == 0xC0);
}
