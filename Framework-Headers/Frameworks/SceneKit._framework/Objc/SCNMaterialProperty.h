//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSString, SCNOrderedDictionary, UIColor;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;
    unsigned int _isCommonProfileProperty:1;
    id _parent;
    int _propertyType;
    NSString *_customSlotName;
    SCNOrderedDictionary *_animations;
    UIColor *_borderColor;
    unsigned char _contentType;
    id _contents;
    long long _mappingChannel;
    float _intensity;
    float _maxAnisotropy;
    long long _minificationFilter;
    long long _magnificationFilter;
    long long _mipFilter;
    long long _wrapS;
    long long _wrapT;
    struct __C3DEffectSlot *_customSlot;
    struct __C3DImage *_c3dImage;
    struct __C3DTextureProxy *_textureProxy;
    struct SCNMatrix4 *_contentTransform;
}

@property (readonly) NSArray *animationKeys;
@property (strong, nonatomic) id borderColor;
@property (strong, nonatomic) id contents;
@property (nonatomic) struct SCNMatrix4 contentsTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double intensity;
@property (nonatomic) long long magnificationFilter;
@property (nonatomic) long long mappingChannel;
@property (nonatomic) double maxAnisotropy;
@property (nonatomic) long long minificationFilter;
@property (nonatomic) long long mipFilter;
@property (readonly) Class superclass;
@property (nonatomic) long long wrapS;
@property (nonatomic) long long wrapT;

+ (struct __C3DImage *)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2;
+ (id)_copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 autoCubemap:(BOOL)arg2;
+ (id)copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (id)materialPropertyWithContents:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)UIView;
- (void *)__CFObject;
- (void)__allocateContentTransformIfNeeded;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)_animationPathForKey:(id)arg1;
- (void)_clearContents;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (void)_layerDidChange:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (long long)_presentationMappingChannel;
- (void)_setC3DImageRef:(struct __C3DImage *)arg1;
- (void)_setColor:(id)arg1;
- (void)_setParent:(id)arg1;
- (BOOL)_supportsCubeMaps;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateMaterialAttachment:(id)arg1;
- (void)_updateMaterialBorderColor:(id)arg1;
- (void)_updateMaterialColor:(id)arg1;
- (void)_updateMaterialFilters;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialMTLTexture:(id)arg1;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (void)_updateMaterialPropertyTransform:(union C3DMatrix4x4)arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialUIComponent:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (id)attachment;
- (struct C3DColor4)borderColor4;
- (id)color;
- (struct C3DColor4)color4;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (id)content;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)copyPropertiesFrom:(id)arg1;
- (void)dealloc;
- (struct __C3DEffectSlot *)effectSlot;
- (struct __C3DEffectSlot *)effectSlotCreateIfNeeded:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DImage *)getC3DImageRef;
- (id)image;
- (id)init;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 propertyType:(int)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isPausedOrPausedByInheritance;
- (id)layer;
- (void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)mtlTexture;
- (id)parent;
- (void)parentWillDie:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationMaterialProperty;
- (id)proceduralContents;
- (int)propertyType;
- (id)pvrtcData;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (struct __C3DScene *)sceneRef;
- (void)setAttachment:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setMtlTexture:(id)arg1;
- (void)setProceduralContents:(id)arg1;
- (void)setSkScene:(id)arg1;
- (void)setSkTexture:(id)arg1;
- (void)setUIView:(id)arg1;
- (void)setUIWindow:(id)arg1;
- (id)skScene;
- (id)skTexture;
- (id)slotName;
- (struct __C3DTextureSampler *)textureSampler;
- (void)unlinkCustomPropertyWithParent:(id)arg1;

@end

