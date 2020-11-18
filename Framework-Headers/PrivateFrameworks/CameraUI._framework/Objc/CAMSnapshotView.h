//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/_UIBasicAnimationFactory-Protocol.h>

@class NSString, UIVisualEffectView;

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory>
{
    BOOL _blurred;
    BOOL _dimmed;
    BOOL __supportsBlur;
    UIView *_snapshotView;
    long long _desiredAspectRatio;
    UIView *__lowQualityBlurView;
    UIView *__dimmingView;
    UIVisualEffectView *__blurView;
    long long __blurStyleForEffectAnimationFactory;
}

@property (nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) long long _blurStyleForEffectAnimationFactory; // @synthesize _blurStyleForEffectAnimationFactory=__blurStyleForEffectAnimationFactory;
@property (strong, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView; // @synthesize _blurView=__blurView;
@property (readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property (readonly, nonatomic) UIView *_lowQualityBlurView; // @synthesize _lowQualityBlurView=__lowQualityBlurView;
@property (readonly, nonatomic) BOOL _supportsBlur; // @synthesize _supportsBlur=__supportsBlur;
@property (nonatomic) BOOL blurred; // @synthesize blurred=_blurred;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long desiredAspectRatio; // @synthesize desiredAspectRatio=_desiredAspectRatio;
@property (nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(BOOL)arg2 inputRadiusAmount:(double *)arg3 inputRadiusDuration:(double *)arg4 inputRadiusDelay:(double *)arg5 inputRadiusTimingFunction:(id *)arg6 opacityAmount:(double *)arg7 opacityDuration:(double *)arg8 opacityDelay:(double *)arg9 opacityTimingFunction:(id *)arg10;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(BOOL)arg2 opacityAmount:(double *)arg3 opacityDuration:(double *)arg4 opacityDelay:(double *)arg5 opacityTimingFunction:(id *)arg6 targetView:(id *)arg7;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_setupDimOnSnapshot;
- (void)_setupLowQualityBlurOnSnapshot;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;
- (void)removeInflightBlurAnimations;
- (void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 style:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;

@end

