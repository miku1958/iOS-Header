//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIImage, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectEnvironment, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCornerMask;

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    NSMutableArray *_captureDependents;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _UIVisualEffectEnvironment *_environment;
    struct {
        unsigned int backgroundHostNeedsUpdate:1;
        unsigned int contentHostNeedsUpdate:1;
        unsigned int allowsDithering:1;
        unsigned int allowsBlurring:1;
        unsigned int allowsGroupFiltering:1;
        unsigned int useReducedTransparencyForContentHost:1;
        unsigned int isUpdatingSubviews:1;
        unsigned int hasBackdropBackgroundColorAlpha:1;
    } _effectViewFlags;
    BOOL _useLiveMasking;
    UIVisualEffectView *_captureSource;
    UIVisualEffect *_effect;
    _UIVisualEffectViewCornerMask *__cornerMask;
    NSArray *_backgroundEffects;
    NSArray *_contentEffects;
}

@property (nonatomic, setter=_setAllowsGroupFiltering:) BOOL _allowsGroupFiltering;
@property (readonly, nonatomic) BOOL _applyCornerMaskToSelf;
@property (nonatomic, setter=_setBackdropViewBackgroundColorAlpha:) double _backdropViewBackgroundColorAlpha;
@property (copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents;
@property (readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (readonly, weak, nonatomic) UIVisualEffectView *_captureSource; // @synthesize _captureSource;
@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView;
@property (strong, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask; // @synthesize _cornerMask=__cornerMask;
@property (nonatomic, setter=_setCornerRadius:) double _cornerRadius;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (strong, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
@property (nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) BOOL _noiseEnabled;
@property (nonatomic, setter=_setRenderMode:) long long _renderMode;
@property (nonatomic) BOOL allowsBlurring;
@property (nonatomic) BOOL allowsDithering;
@property (copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property (copy, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property (nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) BOOL useLiveMasking; // @synthesize useLiveMasking=_useLiveMasking;
@property (nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) BOOL useReducedTransparencyForContentEffects;

+ (Class)_contentViewClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addCaptureDependent:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_applyCornerRadiusToSubviews;
- (id)_backgroundHost;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)arg1;
- (void)_commonInit;
- (void)_configureEffects;
- (id)_contentHost;
- (double)_continuousCornerRadius;
- (id)_debug;
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;
- (void)_ensureBackgroundHost;
- (void)_ensureContentHostWithView:(id)arg1;
- (id)_environment;
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;
- (void)_generateDeferredAnimations:(id)arg1;
- (void)_generateEffectAnimations:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (id)_maskImageForMaskView:(id)arg1;
- (id)_maskView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_registerNotifications;
- (void)_removeCaptureDependent:(id)arg1;
- (void)_resetEffect;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1 continuous:(BOOL)arg2 maskedCorners:(unsigned long long)arg3;
- (void)_setEffect:(id)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setTintOpacity:(double)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_unregisterNotifications;
- (void)_updateCaptureDependents;
- (void)_updateEffectBackgroundColor;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)arg1;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)arg1;
- (void)_updateEffectForReducedTransparency;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
- (void)_updateEffectsFromLegacyEffect;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(CDUnknownBlockType)arg1;
- (void)_updateSubView:(id)arg1 frame:(struct CGRect)arg2;
- (void)_updateSubviews;
- (id)_whatsWrongWithThisEffect;
- (void)dealloc;
- (id)description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

