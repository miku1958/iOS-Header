//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/_UIVisualEffectViewParticipatingInternal-Protocol.h>

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipatingInternal>
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    NSArray *_viewEffects;
    NSArray *_filters;
}

@property (strong, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableGroupFiltering;
@property (copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
@property (weak, nonatomic) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;

- (void).cxx_destruct;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;

@end

